/* Runtime dump - PLCoreAccountingGroup
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLCoreAccountingGroup : PLCoreOperator

- (PLCoreAccountingGroup *)init;
- (void)startAccountingGroups;
- (void)stopAccountingGroups;
- (void)startAccountingGroupForOperator:(id)arg0;
- (NSArray *)getAllAccountingGroupNames;
- (NSString *)accountingGroupForAccountingGroupName:(NSString *)arg0;

@end
