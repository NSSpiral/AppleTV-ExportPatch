/* Runtime dump - PLMav7BasebandHardwareMessage
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLMav7BasebandHardwareMessage : PLMav5BasebandHardwareMessage
{
    struct _PLMav7BasebandHWStatsRFTech * _rf;
    struct _PLMav7BasebandHWStatsProtocol * _protocol;
    struct _PLMav7BasebandHWStatsMCPMVeto * _mcpm_sleep_veto;
    struct _PLMav7BasebandHWStatsNPAVeto * _npa_sleep_veto;
    struct _PLMav7BasebandHWStatsClockStateMask * _apps_clock_duration_mask;
    struct _PLMav7BasebandHWStatsClockStateMask * _mpss_clock_duration_mask;
    NSMutableString * _apps_clock_duration;
    NSMutableString * _mpss_clock_duration;
    struct _PLMav7BasebandHWStatsClockStateMask * _apps_clock_count_mask;
    struct _PLMav7BasebandHWStatsClockStateMask * _mpss_clock_count_mask;
    struct _PLMav7BasebandHWStatsHSICState * _hsic;
    struct _PLMav7BasebandGPSDPOBin * _gps_dpo_bins;
}

@property (nonatomic) struct _PLMav7BasebandHWStatsRFTech * rf;
@property (nonatomic) struct _PLMav7BasebandHWStatsProtocol * protocol;
@property (nonatomic) struct _PLMav7BasebandHWStatsMCPMVeto * mcpm_sleep_veto;
@property (nonatomic) struct _PLMav7BasebandHWStatsNPAVeto * npa_sleep_veto;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask * apps_clock_duration_mask;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask * mpss_clock_duration_mask;
@property (nonatomic) NSMutableString * apps_clock_duration;
@property (nonatomic) NSMutableString * mpss_clock_duration;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask * apps_clock_count_mask;
@property (nonatomic) struct _PLMav7BasebandHWStatsClockStateMask * mpss_clock_count_mask;
@property (nonatomic) struct _PLMav7BasebandHWStatsHSICState * hsic;
@property (nonatomic) struct _PLMav7BasebandGPSDPOBin * gps_dpo_bins;

- (PLMav7BasebandHardwareMessage *)initWithData:(NSData *)arg0;
- (struct _PLMav7BasebandHWStatsProtocol *)protocol;
- (void)parseData:(NSData *)arg0;
- (void)logPeripheralsWithLogger:(id)arg0;
- (void)logRFWithLogger2:(id)arg0;
- (id)indexToRAT:(unsigned int)arg0;
- (void)logWithLogger:(PLBBMsg *)arg0;
- (void)setGps_dpo_bins:(struct _PLMav7BasebandGPSDPOBin *)arg0;
- (void)setRf:(struct _PLMav7BasebandHWStatsRFTech *)arg0;
- (void)setProtocol:(struct _PLMav7BasebandHWStatsProtocol *)arg0;
- (void)setNpa_sleep_veto:(struct _PLMav7BasebandHWStatsNPAVeto *)arg0;
- (void)setApps_clock_duration_mask:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0;
- (struct _PLMav7BasebandHWStatsClockStateMask *)apps_clock_duration_mask;
- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0;
- (void)setApps_clock_duration:(NSMutableString *)arg0;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0 oftype:(int)arg1 withData:(char *)arg2;
- (void)setMpss_clock_duration_mask:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0;
- (struct _PLMav7BasebandHWStatsClockStateMask *)mpss_clock_duration_mask;
- (void)setMpss_clock_duration:(NSMutableString *)arg0;
- (void)setApps_clock_count_mask:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0;
- (struct _PLMav7BasebandHWStatsClockStateMask *)apps_clock_count_mask;
- (void)setMpss_clock_count_mask:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0;
- (struct _PLMav7BasebandHWStatsClockStateMask *)mpss_clock_count_mask;
- (void)setHsic:(struct _PLMav7BasebandHWStatsHSICState *)arg0;
- (void)logAPPSWithLogger:(id)arg0;
- (void)logMPSSWithLogger:(id)arg0;
- (void)logProtocolActiveWithLogger:(id)arg0;
- (void)logSleepVetoWithLogger:(id)arg0;
- (void)logClockWithLogger:(id)arg0;
- (void)logHSICWithLogger:(id)arg0;
- (struct _PLMav7BasebandHWStatsNPAVeto *)npa_sleep_veto;
- (NSMutableString *)apps_clock_duration;
- (NSMutableString *)mpss_clock_duration;
- (void)setMcpm_sleep_veto:(struct _PLMav7BasebandHWStatsMCPMVeto *)arg0;
- (struct _PLMav7BasebandGPSDPOBin *)gps_dpo_bins;
- (struct _PLMav7BasebandHWStatsRFTech *)rf;
- (struct _PLMav7BasebandHWStatsMCPMVeto *)mcpm_sleep_veto;
- (struct _PLMav7BasebandHWStatsHSICState *)hsic;

@end
