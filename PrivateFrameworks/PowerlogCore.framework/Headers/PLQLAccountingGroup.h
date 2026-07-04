/* Runtime dump - PLQLAccountingGroup
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLQLAccountingGroup : NSObject <PLQLAccountingGroupProtocol>
{
    short _accountingGroupType;
    NSString * _accountingGroupName;
    id _accountingGroupDefinitionBlock;
}

@property (readonly, retain) NSString * accountingGroupName;
@property (readonly) short accountingGroupType;
@property (readonly) id accountingGroupDefinitionBlock;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_destruct;
- (NSString *)accountingGroupName;
- (short)accountingGroupType;
- (NSObject *)getLastSnapshot;
- (double)timeOfLastSnapshot;
- (double)safeTimeForAccounting;
- (id /* block */)accountingGroupDefinitionBlock;
- (id)createAccountingEntry:(id)arg0 withStartDate:(NSDate *)arg1 withStopDate:(char)arg2 withWeight:(double)arg3;
- (NSObject *)getLastOpenSnapshot;
- (NSObject *)getEventsInRange:(struct _PLTimeIntervalRange)arg0;
- (NSObject *)genericCreateAccountingEventsInRange:(struct _PLTimeIntervalRange)arg0 withIdentifierKey:(NSString *)arg1 withEventKey:(NSString *)arg2 withStartKey:(NSString *)arg3 withStartValue:(float)arg4 withEndKey:(NSString *)arg5 withEndValue:(float)arg6 withEntries:(NSArray *)arg7;
- (PLQLAccountingGroup *)initWithName:(NSString *)arg0 withAccountingGroupType:(short)arg1 withAccountingGroupDefinitionBlock:(id /* block */)arg2;

@end
