/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * DVBv5 commands
 ******************************************************************************/

#define DTV_UNDEFINED                               0 /* doesnt do anything on Get/Set                                                             */
#define DTV_TUNE                                    1 /* Start tune request with current params                                                    */
#define DTV_CLEAR                                   2 /* Reset cached properties to defaults.                                                      */
#define DTV_FREQUENCY                               3 /* Get/Set Frequency. Sat:kHz, Cable/Terr: Hz                                                */
#define DTV_MODULATION                              4 /* Get/Set modulation type, one of enum fe_modulation                                        */
#define DTV_BANDWIDTH_HZ                            5 /* DVB-T/T2, bandwidth in Hz: 0(AUTO), 1712000, 5000000, 6000000, 7000000, 8000000, 10000000 */
#define DTV_INVERSION                               6 /* Get/Set spectral Inversion, one of enum fe_spectral_inversion                             */
#define DTV_DISEQC_MASTER                           7 /* Currently not implemented.                                                                */
#define DTV_SYMBOL_RATE                             8 /* Get/Set symbol rate, in bauds, Cable and satellite.                                       */
#define DTV_INNER_FEC                               9 /* Get/Set inner FEC, one of fe_code_rate. Cable and satellite.                              */
#define DTV_VOLTAGE                                10 /* Get/Set DC voltage for satellite equipment control, one of fe_sec_voltage.                */
#define DTV_TONE                                   11 /* Currently not implemented.                                                                */
#define DTV_PILOT                                  12 /* Set/Get use of pilot tones (ie DVB-S2), one of fe_pilot.                                  */
#define DTV_ROLLOFF                                13 /* Get/Set the roll-off factor, one of fe_rolloff.                                           */
#define DTV_DISEQC_SLAVE_REPLY                     14 /* Currently not implemented.                                                                */
#define DTV_FE_CAPABILITY_COUNT                    15 /* Currently not implemented.                                                                */
#define DTV_FE_CAPABILITY                          16 /* Currently not implemented.                                                                */
#define DTV_DELIVERY_SYSTEM                        17 /* Get/Set the current delivery system, one of fe_delivery_system.                           */
#define DTV_ISDBT_PARTIAL_RECEPTION                18 /*                                                                                           */
#define DTV_ISDBT_SOUND_BROADCASTING               19 /*                                                                                           */
#define DTV_ISDBT_SB_SUBCHANNEL_ID                 20 /*                                                                                           */
#define DTV_ISDBT_SB_SEGMENT_IDX                   21 /*                                                                                           */
#define DTV_ISDBT_SB_SEGMENT_COUNT                 22 /*                                                                                           */
#define DTV_ISDBT_LAYERA_FEC                       23 /*                                                                                           */
#define DTV_ISDBT_LAYERA_MODULATION                24 /*                                                                                           */
#define DTV_ISDBT_LAYERA_SEGMENT_COUNT             25 /*                                                                                           */
#define DTV_ISDBT_LAYERA_TIME_INTERLEAVING         26 /*                                                                                           */
#define DTV_ISDBT_LAYERB_FEC                       27 /*                                                                                           */
#define DTV_ISDBT_LAYERB_MODULATION                28 /*                                                                                           */
#define DTV_ISDBT_LAYERB_SEGMENT_COUNT             29 /*                                                                                           */
#define DTV_ISDBT_LAYERB_TIME_INTERLEAVING         30 /*                                                                                           */
#define DTV_ISDBT_LAYERC_FEC                       31 /*                                                                                           */
#define DTV_ISDBT_LAYERC_MODULATION                32 /*                                                                                           */
#define DTV_ISDBT_LAYERC_SEGMENT_COUNT             33 /*                                                                                           */
#define DTV_ISDBT_LAYERC_TIME_INTERLEAVING         34 /*                                                                                           */
#define DTV_API_VERSION                            35 /* Returns the major/minor version of the DVB API.                                           */
#define DTV_CODE_RATE_HP                           36 /* Get/Set DVB-T/T2 coderate high priority, one of fe_code_rate.                             */
#define DTV_CODE_RATE_LP                           37 /* Get/Set DVB-T/T2 coderate high priority, one of fe_code_rate.                             */
#define DTV_GUARD_INTERVAL                         38 /* Get/Set DVB-T/T2 guard interval, one of fe_guard_interval.                                */
#define DTV_TRANSMISSION_MODE                      39 /* Get/Set OFDM (ie DVB-T/T2, ISDB-T) transmission mode, one of fe_transmit_mode.            */
#define DTV_HIERARCHY                              40 /* Get/Set DVB-T hierarchy, one of fe_hierarchy. Usually HIERARCHY_NONE.                     */
#define DTV_ISDBT_LAYER_ENABLED                    41 /*                                                                                           */
#define DTV_STREAM_ID                              42 /* Get/Set substream per PLP. DVB-T2/S2:0..255, ISDB:1..65535, OFF=NO_STREAM_ID_FILTER       */
#define DTV_DVBT2_PLP_ID_LEGACY                    43 /* Use DTV_STREAM_ID.                                                                        */
#define DTV_ENUM_DELSYS                            44 /* Returns the delivery systems supported by this frontend.                                  */
#define DTV_ATSCMH_FIC_VER                         45 /*                                                                                           */
#define DTV_ATSCMH_PARADE_ID                       46 /*                                                                                           */
#define DTV_ATSCMH_NOG                             47 /*                                                                                           */
#define DTV_ATSCMH_TNOG                            48 /*                                                                                           */
#define DTV_ATSCMH_SGN                             49 /*                                                                                           */
#define DTV_ATSCMH_PRC                             50 /*                                                                                           */
#define DTV_ATSCMH_RS_FRAME_MODE                   51 /*                                                                                           */
#define DTV_ATSCMH_RS_FRAME_ENSEMBLE               52 /*                                                                                           */
#define DTV_ATSCMH_RS_CODE_MODE_PRI                53 /*                                                                                           */
#define DTV_ATSCMH_RS_CODE_MODE_SEC                54 /*                                                                                           */
#define DTV_ATSCMH_SCCC_BLOCK_MODE                 55 /*                                                                                           */
#define DTV_ATSCMH_SCCC_CODE_MODE_A                56 /*                                                                                           */
#define DTV_ATSCMH_SCCC_CODE_MODE_B                57 /*                                                                                           */
#define DTV_ATSCMH_SCCC_CODE_MODE_C                58 /*                                                                                           */
#define DTV_ATSCMH_SCCC_CODE_MODE_D                59 /*                                                                                           */
#define DTV_INTERLEAVING                           60 /* Get/Set time interleaving. DTMB, one of fe_interleaving.                                  */
#define DTV_LNA                                    61 /* Get/Set enable LNA for terrestrial reception. <int>, one of (0, 1, LNA_AUTO).             */
#define DTV_STAT_SIGNAL_STRENGTH                   62 /* Get tuner signal strength level. Result might be dBm or relative, dep. on hardware.       */
#define DTV_STAT_CNR                               63 /* Get Signal to Noise ratio. Result might be dBm or relative, dep. on hardware.             */
#define DTV_STAT_PRE_ERROR_BIT_COUNT               64 /* Get number of bit errors before inner FEC (VITERBI, LDPC or other)                        */
#define DTV_STAT_PRE_TOTAL_BIT_COUNT               65 /* Get total number of bits before inner FEC (VITERBI, LDPC or other)                        */
#define DTV_STAT_POST_ERROR_BIT_COUNT              66 /* Get number of bit errors after inner FEC (VITERBI, LDPC or other)                         */
#define DTV_STAT_POST_TOTAL_BIT_COUNT              67 /* Get total number of bits after inner FEC (VITERBI, LDPC or other)                         */
#define DTV_STAT_ERROR_BLOCK_COUNT                 68 /* Get number of block errors after outer FEC (RS or other)                                  */
#define DTV_STAT_TOTAL_BLOCK_COUNT                 69 /* Get total number of blocks after outer FEC (RS or other)                                  */
#define DTV_SCRAMBLING_SEQUENCE_INDEX              70 /*                                                                                           */
