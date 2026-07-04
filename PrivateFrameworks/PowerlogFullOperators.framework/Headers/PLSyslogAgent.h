/* Runtime dump - PLSyslogAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface PLSyslogAgent : PLAgent
{
    int kq;
    unsigned int lastMessageID;
    unsigned int syslogdPid;
    struct __CFRunLoopSource * fileDescriptorSource;
    PLEntryNotificationOperatorComposition * _batteryLevelChanged;
}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;

+ (void)load;
+ (PLSyslogAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;

- (PLSyslogAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)enumerateResultsOfASLQuery:(struct __asl_object_s *)arg0 usingBlock:(id /* block */)arg1;
- (void)logEventPointLogLine;
- (void)listenForSyslogDeath;
- (void)resetMessageIndex;
- (void)initOperatorDependancies;
- (void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg0;
- (PLEntryNotificationOperatorComposition *)batteryLevelChanged;

@end
