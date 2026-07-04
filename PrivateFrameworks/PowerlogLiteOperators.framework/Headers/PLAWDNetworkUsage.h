/* Runtime dump - PLAWDNetworkUsage
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDNetworkUsage : PLAWDAuxMetrics
{
    PLEntryNotificationOperatorComposition * _netEventCallback;
    PLEntryNotificationOperatorComposition * _nameConnectionCallback;
    unsigned int _netState;
    NSTimer * _snapshotTimer;
}

@property (weak) PLOperator * operator;
@property (retain, nonatomic) NSMutableSet * runningMetrics;
@property (retain) PLEntryNotificationOperatorComposition * netEventCallback;
@property (retain) PLEntryNotificationOperatorComposition * nameConnectionCallback;
@property unsigned int netState;
@property (retain) NSTimer * snapshotTimer;

+ (NSArray *)entryEventPointDefinitions;
+ (PLAWDNetworkUsage *)getSharedObjWithOperator:(PLOperator *)arg0;
+ (NSArray *)entryAggregateDefinitions;
+ (PLAWDNetworkUsage *)entryPointDefinitionAwdNetStart;
+ (PLAWDNetworkUsage *)entryPointDefinitionAwdNetEnd;

- (void).cxx_destruct;
- (void)startMetricCollection:(id)arg0;
- (void)stopMetricCollection:(id)arg0;
- (char)submitDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (void)setNetState:(unsigned int)arg0;
- (void)resetAllTables;
- (void)handleNetCallback:(id /* block */)arg0;
- (void)setNetEventCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (PLEntryNotificationOperatorComposition *)netEventCallback;
- (void)handleNameConnectionCallback:(id /* block */)arg0;
- (void)setNameConnectionCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (unsigned int)netState;
- (void)resetEndTable;
- (void)resetStartTable;
- (PLEntryNotificationOperatorComposition *)nameConnectionCallback;
- (NSTimer *)snapshotTimer;
- (void)setSnapshotTimer:(NSTimer *)arg0;

@end
