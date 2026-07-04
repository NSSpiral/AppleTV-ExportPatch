/* Runtime dump - PLDuetService
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLDuetService : PLService
{
    PLXPCListenerOperatorComposition * _xpcListenerDuetEvent;
    PLXPCResponderOperatorComposition * _xpcResponderDuetEnergyQuery;
    PLQLDuetQuery * _duetAccountingQuery;
    PLQLDuetQuery * _coreDuetAccountingQuery;
    PLNSTimerOperatorComposition * _runQueryTimer;
    PLNSTimerOperatorComposition * _queryDuetBudgetTimer;
    CDDClientConnection * _gCddClientConnection;
    CDDClientConnection * _clouddocClientConnection;
    NSMutableDictionary * _duetBudgetKeys;
    NSMutableDictionary * _duetEventsCache;
    int _leafCount;
}

@property (retain) PLXPCListenerOperatorComposition * xpcListenerDuetEvent;
@property (retain) PLXPCResponderOperatorComposition * xpcResponderDuetEnergyQuery;
@property (retain) PLQLDuetQuery * duetAccountingQuery;
@property (retain) PLQLDuetQuery * coreDuetAccountingQuery;
@property (retain) PLNSTimerOperatorComposition * runQueryTimer;
@property (retain) PLNSTimerOperatorComposition * queryDuetBudgetTimer;
@property (readonly) CDDClientConnection * gCddClientConnection;
@property (readonly) CDDClientConnection * clouddocClientConnection;
@property (retain) NSMutableDictionary * duetBudgetKeys;
@property (retain) NSMutableDictionary * duetEventsCache;
@property int leafCount;

+ (void)load;
+ (PLDuetService *)defaults;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;
+ (PLDuetService *)aggregateNameDuetEventEnergyBreakdown;
+ (PLDuetService *)aggregateNameCoreDuetEventEnergyBreakdown;
+ (PLDuetService *)entryEventNoneDefinitionCoreDuetEvents;
+ (PLDuetService *)entryEventNoneDefinitionCoreDuetAdmissionControlEvents;
+ (PLDuetService *)entryEventNoneDefinitionCoreDuetABLEDebugging;
+ (PLDuetService *)entryEventForwardDefinitionCoreDuetBudget;

- (PLDuetService *)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)setRunQueryTimer:(PLNSTimerOperatorComposition *)arg0;
- (PLNSTimerOperatorComposition *)runQueryTimer;
- (void)handleDuetAccountingTimer:(NSObject *)arg0;
- (void)logEventForwardCoreDuetBudget;
- (void)setQueryDuetBudgetTimer:(PLNSTimerOperatorComposition *)arg0;
- (void)DuetEventHandler:(id /* block */)arg0;
- (void)setXpcListenerDuetEvent:(PLXPCListenerOperatorComposition *)arg0;
- (NSURLResponse *)DuetEnergyQueryResponse:(NSURLResponse *)arg0;
- (void)setXpcResponderDuetEnergyQuery:(PLXPCResponderOperatorComposition *)arg0;
- (void)setDuetAccountingQuery:(PLQLDuetQuery *)arg0;
- (void)setCoreDuetAccountingQuery:(PLQLDuetQuery *)arg0;
- (void)readDuetConfigurationPlist;
- (void)addBudgetKeysFromPlist:(id)arg0 inDict:(id)arg1 withBudgetKey:(double)arg2;
- (NSMutableDictionary *)duetEventsCache;
- (void)createDict:(unsigned long long)arg0 withAttribute:(unsigned long long)arg1 withUpdateType:(short)arg2;
- (void)flushInMemoryStartStopEvents:(id)arg0 withDict:(id)arg1;
- (int)leafCount;
- (void)flushAllOpenInMemoryEvents;
- (void)setLeafCount:(int)arg0;
- (void)setDuetEventsCache:(NSMutableDictionary *)arg0;
- (void)clearDictionary;
- (id)lastTimeDeviceSlept;
- (void)writeAGEntryForCoreDuet:(id)arg0 withStartDate:(NSDate *)arg1 withStopDate:(char)arg2;
- (void)writeCoreDuetEntry:(id)arg0 withStartTime:(double)arg1 withStopTime:(double)arg2;
- (NSObject *)duetAGStringFromCoreDuetEvent:(NSObject *)arg0;
- (NSCache *)createPLEntryFromCache:(NSObject *)arg0 withStartTime:(double)arg1 withStopTime:(double)arg2;
- (void)performAccountingWithEntry:(struct archive_entry *)arg0;
- (NSObject *)duetAGStringFromDuetEvent:(NSObject *)arg0;
- (void)cacheCoreDuetEventsInMemory:(id)arg0;
- (NSObject *)getBundleIDsFromContainerID:(unsigned long long)arg0 clientID:(unsigned long long)arg1;
- (NSURLResponse *)MT2DuetEnergyQueryResponse:(NSURLResponse *)arg0;
- (NSURLResponse *)CoreDuetEnergyQueryResponse:(NSURLResponse *)arg0;
- (void)accountEnergyForDuetEvents;
- (void)accountEnergyForCoreDuetEvents;
- (void)storeDuetAccountedEnergy:(id)arg0 withEnergy:(double)arg1;
- (PLQLDuetQuery *)duetAccountingQuery;
- (void)patchOpenEvents:(id)arg0;
- (NSString *)duetEventFromAGString:(NSString *)arg0;
- (PLQLDuetQuery *)coreDuetAccountingQuery;
- (void)storeCoreDuetAccountedEnergy:(id)arg0 withEnergy:(double)arg1;
- (NSString *)coreDuetEventFromAGString:(NSString *)arg0;
- (NSObject *)getMatchingCoreDuetEvent:(NSObject *)arg0 inTable:(struct __CFUUID *)arg1;
- (id)getDuetForecast:(unsigned long long)arg0 clientID:(unsigned long long)arg1 forHistoryWindow:(NSObject *)arg2 forecastType:(int)arg3 maximumElements:(unsigned long long)arg4 error:(id *)arg5;
- (CDDClientConnection *)clouddocClientConnection;
- (NSMutableDictionary *)duetBudgetKeys;
- (void)logEventForwardCoreDuetBudgetForPoolId:(unsigned long long)arg0 withKey:(NSString *)arg1;
- (CDDClientConnection *)gCddClientConnection;
- (void)creatDummyCoreDuetEvent:(NSObject *)arg0;
- (void)writeInMemoryCoreDuetEventsToDB;
- (void)dummyAccountingOfDuetEvents;
- (void)createDummyCoreDuetEvents:(id)arg0;
- (void)createDummyDuetEvents:(id)arg0;
- (PLXPCListenerOperatorComposition *)xpcListenerDuetEvent;
- (PLXPCResponderOperatorComposition *)xpcResponderDuetEnergyQuery;
- (PLNSTimerOperatorComposition *)queryDuetBudgetTimer;
- (void)setDuetBudgetKeys:(NSMutableDictionary *)arg0;

@end
