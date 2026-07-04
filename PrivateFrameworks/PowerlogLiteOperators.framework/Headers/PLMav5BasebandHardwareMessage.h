/* Runtime dump - PLMav5BasebandHardwareMessage
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLMav5BasebandHardwareMessage : PLMav4BasebandHardwareMessage
{
    struct _PLMav5BasebandHWStatsRPM * _mav5_rpm;
    struct _PLMav5BasebandHWStatsAPPSPerf * _mav5_apps;
    struct _PLMav5BasebandHWStatsSleep * _mav5_apps_sleep;
    struct _PLMav5BasebandHWAPPSSleepVeto * _mav5_apps_sleep_veto;
    struct _PLMav4BasebandHWOnOffComponentStats * _mav5_lpass;
    struct _PLMav5BasebandHWStatsMDSP * _mav5_mdsp;
    struct _PLMav5BasebandHWStatsQDSP * _mav5_qdsp;
    struct _PLMav5BasebandHWStatsSleep * _mav5_mpss_sleep;
    struct _PLMav5BasebandHWMPSSSleepVeto * _mav5_mpss_sleep_veto;
    struct _PLMav5BasebandHWStatsUSB * _mav5_usb;
    struct _PLMav4BasebandHWOnOffComponentStats * _mav5_gps_dpo;
    struct _PLMav5BasebandHWStatsRX * _mav5_rx;
    struct _PLMav5BasebandHWStatsTX * _mav5_tx;
    struct _PLMav5BasebandHWStatsRXSQA * _mav5_rx_sqa;
    struct _PLMav5BasebandHWStatsProtocol * _mav5_protocol;
    struct _PLMav5BasebandHWClocksDuration * _mav5_clock;
    struct _PLMav5BasebandHWStatsSleep * _mav4_mpss_sleep;
    struct _PLMav5BasebandHWMPSSSleepVeto * _mav4_mpss_sleep_veto;
}

@property (nonatomic) struct _PLMav5BasebandHWStatsRPM * rpm;
@property (nonatomic) struct _PLMav5BasebandHWStatsAPPSPerf * apps;
@property (nonatomic) struct _PLMav5BasebandHWAPPSSleepVeto * apps_sleep_veto;
@property (nonatomic) struct _PLMav5BasebandHWStatsSleep * apps_sleep;
@property (nonatomic) struct _PLMav5BasebandHWStatsUSB * usb;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats * lpass;
@property (nonatomic) struct _PLMav5BasebandHWMPSSSleepVeto * mpss_sleep_veto;
@property (nonatomic) struct _PLMav5BasebandHWStatsSleep * mpss_sleep;
@property (nonatomic) struct _PLMav5BasebandHWStatsMDSP * mdsp;
@property (nonatomic) struct _PLMav5BasebandHWStatsQDSP * qdsp;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats * gps_dpo;
@property (nonatomic) struct _PLMav5BasebandHWStatsRX * rx;
@property (nonatomic) struct _PLMav5BasebandHWStatsTX * tx;
@property (nonatomic) struct _PLMav5BasebandHWStatsRXSQA * rx_sqa;
@property (nonatomic) struct _PLMav5BasebandHWStatsProtocol * protocol;
@property (nonatomic) struct _PLMav5BasebandHWClocksDuration * clock;

- (PLMav5BasebandHardwareMessage *)initWithData:(NSData *)arg0;
- (struct _PLMav5BasebandHWStatsProtocol *)protocol;
- (void)setRx:(struct _PLMav5BasebandHWStatsRX *)arg0;
- (void)setTx:(struct _PLMav5BasebandHWStatsTX *)arg0;
- (void)parseData:(NSData *)arg0;
- (void)logModemAppWithLogger:(id)arg0;
- (void)logPeripheralsWithLogger:(id)arg0;
- (void)logRFWithLogger2:(id)arg0;
- (struct _PLMav5BasebandHWStatsRX *)rx;
- (struct _PLMav5BasebandHWStatsTX *)tx;
- (id)indexToRAT:(unsigned int)arg0;
- (void)logWithLogger:(PLBBMsg *)arg0;
- (void)setUsb:(struct _PLMav5BasebandHWStatsUSB *)arg0;
- (void)setLpass:(struct _PLMav4BasebandHWOnOffComponentStats *)arg0;
- (void)setApps_sleep_veto:(struct _PLMav5BasebandHWAPPSSleepVeto *)arg0;
- (void)setMpss_sleep_veto:(struct _PLMav5BasebandHWMPSSSleepVeto *)arg0;
- (void)setGps_dpo:(struct _PLMav4BasebandHWOnOffComponentStats *)arg0;
- (void)setProtocol:(struct _PLMav5BasebandHWStatsProtocol *)arg0;
- (void)logRPMWithLogger:(id)arg0;
- (void)logAPPSWithLogger:(id)arg0;
- (void)logLPASSWithLogger:(id)arg0;
- (void)logProtocolWithLogger:(id)arg0 withCount:(unsigned int)arg1;
- (void)logClockWithLogger:(id)arg0;
- (struct _PLMav5BasebandHWAPPSSleepVeto *)apps_sleep_veto;
- (struct _PLMav5BasebandHWMPSSSleepVeto *)mpss_sleep_veto;
- (void)setRpm:(struct _PLMav5BasebandHWStatsRPM *)arg0;
- (void)setApps:(struct _PLMav5BasebandHWStatsAPPSPerf *)arg0;
- (void)setApps_sleep:(struct _PLMav5BasebandHWStatsSleep *)arg0;
- (void)setMdsp:(struct _PLMav5BasebandHWStatsMDSP *)arg0;
- (void)setQdsp:(struct _PLMav5BasebandHWStatsQDSP *)arg0;
- (void)setMpss_sleep:(struct _PLMav5BasebandHWStatsSleep *)arg0;
- (void)setRx_sqa:(struct _PLMav5BasebandHWStatsRXSQA *)arg0;
- (void)setClock:(struct _PLMav5BasebandHWClocksDuration *)arg0;
- (struct _PLMav5BasebandHWStatsRPM *)rpm;
- (struct _PLMav5BasebandHWStatsAPPSPerf *)apps;
- (struct _PLMav5BasebandHWStatsSleep *)apps_sleep;
- (struct _PLMav4BasebandHWOnOffComponentStats *)lpass;
- (struct _PLMav5BasebandHWStatsSleep *)mpss_sleep;
- (struct _PLMav5BasebandHWStatsMDSP *)mdsp;
- (struct _PLMav5BasebandHWStatsQDSP *)qdsp;
- (struct _PLMav5BasebandHWStatsUSB *)usb;
- (struct _PLMav4BasebandHWOnOffComponentStats *)gps_dpo;
- (struct _PLMav5BasebandHWStatsRXSQA *)rx_sqa;
- (struct _PLMav5BasebandHWClocksDuration *)clock;
- (void)formatDurationandCount:(unsigned int)arg0 withCount:(unsigned int)arg1 inString:(NSAttributedString *)arg2;

@end
