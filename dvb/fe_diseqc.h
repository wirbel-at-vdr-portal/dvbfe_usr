/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once
/*******************************************************************************
 * Control of Satellite Equipment.
 ******************************************************************************/




/*******************************************************************************
 * Control Satellite Equipment with 13V/18V DC voltage (polarization) and
 * 22kHz Tones.
 ******************************************************************************/
enum fe_sec_mini_cmd {
  SEC_MINI_A,                                 /* Send 22kHz '0' Tone Burst for Sat Position A     */
  SEC_MINI_B                                  /* Send 22kHz '1' Tone Burst for Sat Position B     */
};

#define FE_DISEQC_SEND_BURST  _IO('o', 65)



enum fe_sec_tone_mode {
  SEC_TONE_ON,                                /* Send a 22kHz Tone to the antenna                   */
  SEC_TONE_OFF                                /* Don't send a 22kHz Tone to the antenna             */
};

#define FE_SET_TONE  _IO('o', 66)



enum fe_sec_voltage {
  SEC_VOLTAGE_13,                             /* Send 13 volts to the antenna                       */
  SEC_VOLTAGE_18,                             /* Send 18 volts to the antenna                       */
  SEC_VOLTAGE_OFF                             /* Turn DC voltage to antenna off.                    */
};

#define FE_SET_VOLTAGE  _IO('o', 67)


/*******************************************************************************
 * usually not needed: enable higher output voltage for rotors. Only available
 * on a few frontends. Takes one int as argument.
 ******************************************************************************/
#define FE_ENABLE_HIGH_LNB_VOLTAGE  _IO('o', 68)


/*******************************************************************************
 * usually not needed: reset current overload
 ******************************************************************************/
#define FE_DISEQC_RESET_OVERLOAD _IO('o', 62)



/*******************************************************************************
 * DiSEqC support: send or receive DiSEqC messages through frontend.
 * Hint: DiSEqC bus spec available on http://www.eutelsat.org/
 ******************************************************************************/

/* Send a DiSEqC message:
 *   header  : 3 bytes, framing + address + command
 *   optional: up to 3 bytes command argument
 */
struct dvb_diseqc_master_cmd {
  __u8 msg[6];                                /* DiSEqC message to be sent.                       */
  __u8 msg_len;                               /* Length of DiSEqC message: valid 3..6             */
};

#define FE_DISEQC_SEND_MASTER_CMD  _IOW('o', 63, struct dvb_diseqc_master_cmd)




/* Receive a DiSEqC message:
 *   header  : 1 byte, framing
 *   optional: up to 3 bytes command argument
 */
struct dvb_diseqc_slave_reply {
  __u8 msg[4];                                /* 1 byte header, optional 3 byte argument          */
  __u8 msg_len;                               /* Length of DiSEqC message: valid 0..4             */
  int timeout;                                /* timeout in ms for receiving message              */
};

#define FE_DISEQC_RECV_SLAVE_REPLY _IOR('o', 64, struct dvb_diseqc_slave_reply)
