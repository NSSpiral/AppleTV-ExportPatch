/* Runtime dump - PLIOReportAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLIOReportAgent : PLAgent
{
    PLEntryNotificationOperatorComposition * _batteryLevelChangedNotifications;
    NSMutableDictionary * _sampleChannelsSignificantBattery;
    NSMutableDictionary * _sampleChannelsHalfHour;
    NSMutableDictionary * _sampleChannelsDaily;
}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChangedNotifications;
@property (retain, nonatomic) NSMutableDictionary * sampleChannelsSignificantBattery;
@property (retain, nonatomic) NSMutableDictionary * sampleChannelsHalfHour;
@property (retain, nonatomic) NSMutableDictionary * sampleChannelsDaily;

+ (void)load;
+ (NSArray *)railDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (PLIOReportAgent *)entryEventBackwardDefinitionIOReport;
+ (NSArray *)entryEventBackwardDefinitionGPUStatsDVDRequestStates;
+ (PLIOReportAgent *)entryEventBackwardDefinitionGPUStatsActiveTimeHistogram;
+ (NSArray *)entryEventBackwardDefinitionGPUStatsGPUPerformanceStates;
+ (PLIOReportAgent *)entryEventBackwardDefinitionGPUStatsIdleTimeHistogram;
+ (NSObject *)entryEventBackwardDefinitionMesaMesaPowerState;
+ (NSObject *)entryEventBackwardDefinitionH6ISPH6ISPPowerState;
+ (PLIOReportAgent *)entryEventBackwardDefinitionbacklightreportplaybackbacklightfactorsreport;
+ (PLIOReportAgent *)entryEventBackwardDefinitionOscarSensorevents;
+ (PLIOReportAgent *)entryEventBackwardDefinitionOscarPlatformpowerstate;
+ (PLIOReportAgent *)entryEventBackwardDefinitionOscarPlatformevents;
+ (PLIOReportAgent *)entryEventBackwardDefinitionOscarSensorpowerstate;
+ (PLIOReportAgent *)entryEventBackwardDefinitionCPUStatsDVDStats;
+ (PLIOReportAgent *)entryEventBackwardDefinitionCPUStatsActiveTimeHistogram;
+ (NSArray *)entryEventBackwardDefinitionCPUStatsCPUPerformanceStates;
+ (NSArray *)entryEventBackwardDefinitionCPUStatsVoltageDomainPerformanceStates;
+ (PLIOReportAgent *)entryEventBackwardDefinitionCPUStatsIdleTimeHistogram;
+ (PLIOReportAgent *)entryEventBackwardDefinitionSoCStatsH6PMGRCounters;
+ (PLIOReportAgent *)entryEventBackwardDefinitionSoCStatsDeviceStats;
+ (NSArray *)entryEventBackwardDefinitionSoCStatsVoltageDomainPerformanceStates;
+ (PLIOReportAgent *)entryEventBackwardDefinitionCLPCStatsCounters;
+ (NSObject *)entryEventBackwardDefinitionCLPCStatsLeadingController;
+ (PLIOReportAgent *)entryEventBackwardDefinitionCLPCStatsControlEffort;
+ (PLIOReportAgent *)entryEventBackwardDefinitionClpcStatsMetricHistograms;
+ (NSObject *)entryEventBackwardDefinitionEnergyModel;
+ (PLIOReportAgent *)entryEventBackwardDefinitionCpuStatsCpuFeatures;
+ (PLIOReportAgent *)entryEventBackwardDefinitionSocStatsH7PmgrCounters;
+ (PLIOReportAgent *)entryEventBackwardDefinitionAmcStatsPerfCounters;
+ (NSArray *)entryEventBackwardDefinitionAppleEmbeddedPcieLinkStates;
+ (PLIOReportAgent *)entryEventBackwardDefinitionSocStatsDvdStats;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipConnectionActivity;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipAWDLActivity;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipPMAwakeActivity;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipRadioPhyicalLayerActivity;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipPCIeActivity;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipTxStatCounters;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipScanActivity;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipHSICActivity;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipRxChipErrorCounters;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipTxChipErrorCounters;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipRxPerRateCounters;
+ (PLIOReportAgent *)entryEventBackwardDefinitionWifiChipRxStatCounters;
+ (PLIOReportAgent *)entryEventBackwardDefinitionCLPCStatsFrameRateHistogram;

- (PLIOReportAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)combineDISP0ChannelsWithChannels:(struct __CFDictionary *)arg0;
- (void)pruneChannelsWithChannels:(struct __CFDictionary *)arg0 withTargetSet:(NSSet *)arg1;
- (NSSet *)chanelDictionaryWithChannelSet:(NSSet *)arg0 withMinProcessTime:(double)arg1;
- (NSObject *)sampleDeltaForChannelGroup:(NSObject *)arg0;
- (void)setBatteryLevelChangedNotifications:(PLEntryNotificationOperatorComposition *)arg0;
- (NSObject *)entryForReportingGroup:(NSObject *)arg0 withEntry:(struct archive_entry *)arg1;
- (void)logEventBackwardIOReport;
- (NSMutableDictionary *)sampleChannelsSignificantBattery;
- (char)processNotificationForChannelGroup:(NSObject *)arg0;
- (void)logEventBackwardIOReportWithDelta:(int)arg0 forChannelGroup:(NSObject *)arg1;
- (NSMutableDictionary *)sampleChannelsHalfHour;
- (NSMutableDictionary *)sampleChannelsDaily;
- (NSString *)entryKeyForEventWithGroupName:(NSString *)arg0 withSubGroupName:(NSString *)arg1;
- (NSObject *)entryForReportingGroup:(NSObject *)arg0 withKey:(NSString *)arg1 withChannelGroup:(NSObject *)arg2;
- (void)modelAPSoCPower:(id)arg0;
- (double)mJtomWinTime:(double)arg0 withmJ:(double)arg1;
- (void)pruneAllChannelsWithChannels:(struct __CFDictionary *)arg0;
- (PLEntryNotificationOperatorComposition *)batteryLevelChangedNotifications;
- (void)setSampleChannelsSignificantBattery:(NSMutableDictionary *)arg0;
- (void)setSampleChannelsHalfHour:(NSMutableDictionary *)arg0;
- (void)setSampleChannelsDaily:(NSMutableDictionary *)arg0;

@end
