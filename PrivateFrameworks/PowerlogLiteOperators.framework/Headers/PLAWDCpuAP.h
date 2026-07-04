/* Runtime dump - PLAWDCpuAP
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDCpuAP : PLAWDAuxMetrics
{
    char _isIoreportEnergy;
    PLEntryNotificationOperatorComposition * _monitorEventCallback;
    PLEntryNotificationOperatorComposition * _wakeEventCallback;
    PLEntryNotificationOperatorComposition * _ioreportEnergyEventCallback;
    NSDate * _sleepStartTime;
    long _apSubmitCnt;
    long _cpuLoadSubmitCnt;
}

@property (weak) PLOperator * operator;
@property (retain, nonatomic) NSMutableSet * runningMetrics;
@property (retain) PLEntryNotificationOperatorComposition * monitorEventCallback;
@property (retain) PLEntryNotificationOperatorComposition * wakeEventCallback;
@property (retain) PLEntryNotificationOperatorComposition * ioreportEnergyEventCallback;
@property (retain) NSDate * sleepStartTime;
@property char isIoreportEnergy;
@property long apSubmitCnt;
@property long cpuLoadSubmitCnt;

+ (PLAWDCpuAP *)getSharedObjWithOperator:(PLOperator *)arg0;
+ (NSArray *)entryAggregateDefinitions;
+ (PLAWDCpuAP *)entryAggregateDefinitionAwdAp;
+ (PLAWDCpuAP *)entryAggregateDefinitionAwdCpu;

- (void).cxx_destruct;
- (void)startMetricCollection:(id)arg0;
- (void)stopMetricCollection:(id)arg0;
- (char)submitDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (void)startApMetricCollection:(id)arg0;
- (void)startCpuMetricCollection:(id)arg0;
- (void)setIoreportEnergyEventCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setMonitorEventCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setWakeEventCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (char)submitApDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (char)submitCpuDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (void)setApSubmitCnt:(long)arg0;
- (void)resetApTable;
- (void)setSleepStartTime:(NSDate *)arg0;
- (void)setIsIoreportEnergy:(char)arg0;
- (void)handleMonitorCallback:(id /* block */)arg0;
- (void)handleIOReportEnergyCallback:(id /* block */)arg0;
- (PLEntryNotificationOperatorComposition *)ioreportEnergyEventCallback;
- (void)handleWakeCallback:(id /* block */)arg0;
- (char)isIoreportEnergy;
- (void)addEntryToApMetricsTable:(id)arg0 withValue:(double)arg1;
- (NSDate *)sleepStartTime;
- (long)apSubmitCnt;
- (void)setCpuLoadSubmitCnt:(long)arg0;
- (long)cpuLoadSubmitCnt;
- (PLEntryNotificationOperatorComposition *)monitorEventCallback;
- (PLEntryNotificationOperatorComposition *)wakeEventCallback;

@end
