/* Runtime dump - PLWatchKitAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLWatchKitAgent : PLAgent
{
    PLXPCListenerOperatorComposition * _xpcHandler;
    PLAccountingGroup * _watchkitAccountingGroup;
}

@property (retain) PLXPCListenerOperatorComposition * xpcHandler;
@property (readonly) PLAccountingGroup * watchkitAccountingGroup;

+ (void)load;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;

- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (PLXPCListenerOperatorComposition *)xpcHandler;
- (void)setXpcHandler:(PLXPCListenerOperatorComposition *)arg0;
- (void)createWatchKitAccountingEventsWithTransportEntries:(NSArray *)arg0;
- (PLAccountingGroup *)watchkitAccountingGroup;
- (id)appNameForWatchAppExtension:(id)arg0;

@end
