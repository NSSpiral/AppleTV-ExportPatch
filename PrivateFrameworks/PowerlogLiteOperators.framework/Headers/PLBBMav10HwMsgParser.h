/* Runtime dump - PLBBMav10HwMsgParser
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMav10HwMsgParser : PLMav7BasebandHardwareMessage
{
    struct ? * _rfLTE;
    struct ? * _rfWCDMA;
    struct ? * _rfGSM;
    struct ? * _rfTDS;
    struct ? * _rf1x;
    struct ? * _rfHDR;
    struct ? * _rfOOS;
    struct ? * _rpmNew;
    struct ? * _apps_sleepNew;
    struct ? * _mpss_sleepNew;
    struct ? * _appsNew;
    struct ? * _qdspNew;
    struct ? * _mcpm_sleep_vetoNew;
}

@property (nonatomic) struct ? * rfLTE;
@property (nonatomic) struct ? * rfWCDMA;
@property (nonatomic) struct ? * rfGSM;
@property (nonatomic) struct ? * rfTDS;
@property (nonatomic) struct ? * rf1x;
@property (nonatomic) struct ? * rfHDR;
@property (nonatomic) struct ? * rfOOS;
@property (nonatomic) struct ? * rpmNew;
@property (nonatomic) struct ? * apps_sleepNew;
@property (nonatomic) struct ? * mpss_sleepNew;
@property (nonatomic) struct ? * appsNew;
@property (nonatomic) struct ? * qdspNew;
@property (nonatomic) struct ? * mcpm_sleep_vetoNew;

- (PLBBMav10HwMsgParser *)initWithData:(NSData *)arg0;
- (void)parseData:(NSData *)arg0;
- (void)logWithLogger:(PLBBMsg *)arg0;
- (void)setRpmNew:(struct ? *)arg0;
- (void)setAppsNew:(struct ? *)arg0;
- (void)setApps_sleepNew:(struct ? *)arg0;
- (void)setQdspNew:(struct ? *)arg0;
- (void)setMpss_sleepNew:(struct ? *)arg0;
- (void)setRfLTE:(struct ? *)arg0;
- (void)setRfWCDMA:(struct ? *)arg0;
- (void)setRfGSM:(struct ? *)arg0;
- (void)setRfTDS:(struct ? *)arg0;
- (void)setRf1x:(struct ? *)arg0;
- (void)setRfHDR:(struct ? *)arg0;
- (void)setRfOOS:(struct ? *)arg0;
- (void)setMcpm_sleep_vetoNew:(struct ? *)arg0;
- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0 oftype:(int)arg1 withData:(char *)arg2;
- (void)logRPMWithLogger:(id)arg0;
- (void)logAPPSWithLogger:(id)arg0;
- (void)logMPSSWithLogger:(id)arg0;
- (void)logSleepVetoWithLogger:(id)arg0;
- (void)logHwRFLTEWithLogger:(id)arg0;
- (void)logHwRFWCDMAWithLogger:(id)arg0;
- (void)logHwRFGSMWithLogger:(id)arg0;
- (void)logHwRFTDSWithLogger:(id)arg0;
- (void)logHwRF1xWithLogger:(id)arg0;
- (void)logHwRFHDRWithLogger:(id)arg0;
- (void)logHwRFOOSWithLogger:(id)arg0;
- (struct ? *)mcpm_sleep_vetoNew;
- (struct ? *)rpmNew;
- (struct ? *)appsNew;
- (struct ? *)apps_sleepNew;
- (struct ? *)mpss_sleepNew;
- (struct ? *)qdspNew;
- (struct ? *)rfLTE;
- (struct ? *)rfWCDMA;
- (struct ? *)rfGSM;
- (struct ? *)rfTDS;
- (struct ? *)rf1x;
- (struct ? *)rfHDR;
- (struct ? *)rfOOS;

@end
