/* Runtime dump - PLSCDynamicStoreAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLSCDynamicStoreAgent : PLAgent

+ (void)load;
+ (PLSCDynamicStoreAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;

- (PLSCDynamicStoreAgent *)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)networkLinkQualityChanged:(struct __SCDynamicStore *)arg0 withChangedKeys:(NSArray *)arg1;

@end
