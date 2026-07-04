/* Runtime dump - PLAccountingGroup
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLAccountingGroup : PLOperator <PLQLAccountingGroupProtocol>
{
    char _closeAllAccountingEventsAtBoot;
    char _eventCacheOn;
    short _accountingGroupType;
    NSString * _accountingGroupName;
    NSArray * _eventCacheResults;
    struct _PLTimeIntervalRange _eventCacheTimeRange;
}

@property (readonly, retain) NSString * accountingGroupName;
@property (readonly) short accountingGroupType;
@property char closeAllAccountingEventsAtBoot;
@property char eventCacheOn;
@property (retain) NSArray * eventCacheResults;
@property struct _PLTimeIntervalRange eventCacheTimeRange;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)entryEventNoneDefinitionAccountingGroup;
+ (NSString *)accountingGroupFromAGName:(NSString *)arg0;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSString *)getAccountingGroupEntryKey;

- (void).cxx_destruct;
- (char)closeAllAccountingEventsAtBoot;
- (NSString *)accountingGroupName;
- (NSString *)getLastOpenSnapshotForIdentifier:(NSString *)arg0 forEntryKey:(NSString *)arg1;
- (short)accountingGroupType;
- (void)cacheEventsForTimeInterval:(struct _PLTimeIntervalRange)arg0;
- (NSArray *)eventCacheResults;
- (void)setEventCacheResults:(NSArray *)arg0;
- (NSObject *)getLastSnapshot;
- (double)timeOfLastSnapshot;
- (double)timeOfLastEndedSnapshot;
- (char)eventCacheOn;
- (struct _PLTimeIntervalRange)eventCacheTimeRange;
- (void)logEventCacheStats:(id)arg0;
- (void)setEventCacheTimeRange:(struct _PLTimeIntervalRange)arg0;
- (void)setEventCacheOn:(char)arg0;
- (double)safeTimeForAccounting;
- (PLAccountingGroup *)initWithName:(NSString *)arg0 withAccountingGroupType:(short)arg1 withCloseAllAccountingEventsAtBoot:(char)arg2;
- (void)closeLastOpenEventAtTime:(id)arg0;
- (char)useCachedEventsForTimeInterval:(struct _PLTimeIntervalRange)arg0;
- (void)clearEventCache;
- (void)setCloseAllAccountingEventsAtBoot:(char)arg0;
- (void)closeAllOpenEventAtTime:(id)arg0 withForceClose:(char)arg1;
- (NSObject *)getLastOpenSnapshot;
- (void)addAccountingEvent:(NSObject *)arg0 withStartDate:(NSDate *)arg1 withStopDate:(char)arg2 withWeight:(double)arg3;
- (void)initOperatorDependancies;
- (void)addEventToEvents:(id)arg0 withIdentifier:(NSString *)arg1 withStartDate:(NSDate *)arg2 withStopDate:(char)arg3 withWeight:(double)arg4;
- (void)batchAddAccountingEvents:(id)arg0;
- (NSObject *)getEventsInRange:(struct _PLTimeIntervalRange)arg0;

@end
