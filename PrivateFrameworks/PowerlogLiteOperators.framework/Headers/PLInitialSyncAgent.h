/* Runtime dump - PLInitialSyncAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLInitialSyncAgent : PLAgent
{
    PLXPCListenerOperatorComposition * _xpcHandler;
}

@property (retain) PLXPCListenerOperatorComposition * xpcHandler;

+ (void)load;
+ (NSArray *)entryEventIntervalDefinitions;

- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (PLXPCListenerOperatorComposition *)xpcHandler;
- (void)setXpcHandler:(PLXPCListenerOperatorComposition *)arg0;
- (void)logInitialSyncActivityFromEvent:(NSObject *)arg0;
- (void)logInitialSyncFromEvent:(NSObject *)arg0;

@end
