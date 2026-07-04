/* Runtime dump - PLBLMDebugService
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBLMDebugService : PLService
{
    PLXPCListenerOperatorComposition * _xpcListenerBLMDebugTrigger;
    PLXPCResponderOperatorComposition * _xpcResponderBLMDebugQuery;
    PLEntryNotificationOperatorComposition * _ioreportCallback;
    PLEntryNotificationOperatorComposition * _processmonitorCallback;
    PLEntryNotificationOperatorComposition * _processnetworkCallback;
    PLEntryNotificationOperatorComposition * _wifiCallback;
    PLEntryNotificationOperatorComposition * _bbCallback;
    NSMutableDictionary * _triggers;
}

@property (retain) PLXPCListenerOperatorComposition * xpcListenerBLMDebugTrigger;
@property (retain) PLXPCResponderOperatorComposition * xpcResponderBLMDebugQuery;
@property (retain) PLEntryNotificationOperatorComposition * ioreportCallback;
@property (retain) PLEntryNotificationOperatorComposition * processmonitorCallback;
@property (retain) PLEntryNotificationOperatorComposition * processnetworkCallback;
@property (retain) PLEntryNotificationOperatorComposition * wifiCallback;
@property (retain) PLEntryNotificationOperatorComposition * bbCallback;
@property (retain) NSMutableDictionary * triggers;

+ (void)load;
+ (NSArray *)entryEventNoneDefinitions;
+ (PLBLMDebugService *)entryEventNoneDefinitionBLMDebug;

- (PLBLMDebugService *)init;
- (void).cxx_destruct;
- (NSMutableDictionary *)triggers;
- (void)setTriggers:(NSMutableDictionary *)arg0;
- (void)initOperatorDependancies;
- (void)registerTrigger:(id)arg0;
- (void)setXpcListenerBLMDebugTrigger:(PLXPCListenerOperatorComposition *)arg0;
- (void)setIoreportCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setProcessmonitorCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setProcessnetworkCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setWifiCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setBbCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)triggerLoggersNow:(id)arg0;
- (void)triggerSelectorAtDate:(NSDate *)arg0 withSelector:(SEL)arg1 withUseInfo:(NSDictionary *)arg2;
- (NSObject *)respondBLMDDebugQuery:(NSObject *)arg0;
- (PLEntryNotificationOperatorComposition *)wifiCallback;
- (PLEntryNotificationOperatorComposition *)ioreportCallback;
- (PLEntryNotificationOperatorComposition *)processmonitorCallback;
- (PLEntryNotificationOperatorComposition *)processnetworkCallback;
- (PLEntryNotificationOperatorComposition *)bbCallback;
- (NSData *)logRailData:(NSData *)arg0 withTriggerName:(NSString *)arg1 inTimeRange:(struct _PLTimeIntervalRange)arg2;
- (id)Testservice:(id)arg0;
- (PLXPCListenerOperatorComposition *)xpcListenerBLMDebugTrigger;
- (PLXPCResponderOperatorComposition *)xpcResponderBLMDebugQuery;
- (void)setXpcResponderBLMDebugQuery:(PLXPCResponderOperatorComposition *)arg0;

@end
