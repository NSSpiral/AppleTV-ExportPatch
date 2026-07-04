/* Runtime dump - CDAttribute
 * Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDAttribute : NSObject
{
    CDSession * _session;
    NSString * _name;
    NSString * _fullName;
    int _type;
    unsigned long long _integerId;
    NSMutableArray * resourceCallbackList;
    NSMutableArray * revocationCallbackList;
    NSObject<OS_dispatch_queue> * resourceCallbackQueue;
    int resourceCallToken;
    int focalAppToken;
    int conditionChangeToken;
    int systemConditionChangeToken;
    int localFocalInfoToken;
    int revocationToken;
    unsigned short _admissionMask;
    NSMutableDictionary * costCache;
    NSDate * lastUpdate;
    NSMutableDictionary * tokenCache;
    NSMutableArray * activeReports;
    NSObject<OS_dispatch_queue> * _deferredRequestsQ;
}

@property (readonly) NSString * name;
@property (readonly) NSString * fullName;
@property (readonly) int type;
@property (readonly) unsigned long long integerId;
@property (readonly) CDSession * session;
@property (readonly) NSObject<OS_dispatch_queue> * deferredRequestsQ;

- (void)dealloc;
- (NSString *)name;
- (int)type;
- (void).cxx_destruct;
- (id)historyOfValue:(id)arg0 forWindow:(NSObject *)arg1 filter:(int)arg2 maximumElements:(unsigned long long)arg3 error:(id *)arg4;
- (CDSession *)session;
- (char)associateToBudget:(id)arg0 error:(id *)arg1;
- (char)occurredWithValue:(id)arg0 cost:(long long)arg1 error:(id *)arg2;
- (CDAttribute *)initWithSession:(CDSession *)arg0 name:(NSString *)arg1 type:(int)arg2 integerId:(unsigned long long)arg3 error:(id *)arg4;
- (NSString *)fullNameFromString:(NSString *)arg0 clientId:(unsigned long long)arg1 error:(id *)arg2;
- (char)attributeIsClientWriteable;
- (char)occurredWithValue:(id)arg0 cost:(long long)arg1 onDate:(NSDate *)arg2 risingEdge:(char)arg3 fallingEdge:(char)arg4 error:(id *)arg5;
- (NSObject<OS_dispatch_queue> *)deferredRequestsQ;
- (char)isBypassClient;
- (char)occurredWithValue:(id)arg0 cost:(long long)arg1 onDate:(NSDate *)arg2 risingEdge:(char)arg3 fallingEdge:(char)arg4 deferredRequest:(char)arg5 error:(id *)arg6;
- (NSArray *)temporalForecastXPCObjectToArray:(NSArray *)arg0 attributeValue:(KNBuildAttributeValue *)arg1 forecastType:(int)arg2 error:(id *)arg3;
- (NSDictionary *)peerForecastXPCObjectToDictionary:(NSDictionary *)arg0 attributeValue:(KNBuildAttributeValue *)arg1 error:(id *)arg2;
- (NSArray *)repeatedStatisticXPCObjectToArray:(NSArray *)arg0 error:(id *)arg1;
- (void)stuffDictionary:(id *)arg0 forStatisticType:(int)arg1 matchingStatisticType:(int)arg2 xpcKey:(char *)arg3 incomingXpcObject:(NSObject *)arg4;
- (void)callListOfCallbacks:(id)arg0 oneshotCall:(char)arg1 callList:(NSArray *)arg2;
- (char)setRevocationDispatch;
- (char)setResourceDispatch:(id *)arg0;
- (NSString *)meteringLookupCachedToken:(NSString *)arg0;
- (void)meteringInsertCachedToken:(NSString *)arg0 meteringToken:(unsigned long long)arg1;
- (id)updateCostOnDownload:(id)arg0 meteringToken:(unsigned long long)arg1;
- (unsigned int)meteringIsActive:(id)arg0;
- (void)updateDuetWithCost;
- (id)temporalForecastOfValue:(id)arg0 forHistoryWindow:(NSObject *)arg1 forecastType:(int)arg2 maximumElements:(unsigned long long)arg3 error:(id *)arg4;
- (id)peerForecastOfValue:(id)arg0 forHistoryWindow:(NSObject *)arg1 forecastType:(int)arg2 maximumElements:(unsigned long long)arg3 error:(id *)arg4;
- (id)repeatedStatistic:(int)arg0 forHistoryWindow:(NSObject *)arg1 error:(id *)arg2;
- (char)associateToAttribute:(NSObject *)arg0 error:(id *)arg1;
- (char)disassociateWithError:(id *)arg0;
- (char)activityStartedWithValue:(id)arg0 cost:(long long)arg1 onDate:(NSDate *)arg2 error:(id *)arg3;
- (char)activityStoppedWithValue:(id)arg0 cost:(long long)arg1 onDate:(NSDate *)arg2 error:(id *)arg3;
- (char)activityWithValue:(id)arg0 cost:(long long)arg1 error:(id *)arg2 block:(id /* block */)arg3;
- (char)occurredWithValue:(id)arg0 cost:(long long)arg1 onDate:(NSDate *)arg2 error:(id *)arg3;
- (double)correlationOfValue:(id)arg0 toAttribute:(NSObject *)arg1 withValue:(NSValue *)arg2 temporalLeeway:(double)arg3 error:(id *)arg4;
- (id)temporalForecastOfValue:(id)arg0 forHistoryWindow:(NSObject *)arg1 forecastLength:(double)arg2 forecastGranularity:(int)arg3 forecastType:(int)arg4 maximumElements:(unsigned long long)arg5 error:(id *)arg6;
- (id)statistic:(int)arg0 forHistoryWindow:(NSObject *)arg1 error:(id *)arg2;
- (UIWindow *)budgetStatisticsForHistoryWindow:(NSObject *)arg0 error:(id *)arg1;
- (int)budgetStatusWithError:(id *)arg0;
- (char)admissionCheckOfValue:(id)arg0 withReason:(id *)arg1 error:(id *)arg2;
- (char)admissionCheckOfValue:(id)arg0 withReason:(id *)arg1 error:(id *)arg2 handler:(id /* block */)arg3;
- (char)admissionCheckOfValue:(id)arg0 andStartedWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3 handler:(id /* block */)arg4;
- (char)admissionCheckOfValue:(id)arg0 andStartedWithValue:(id)arg1 cost:(long long)arg2 type:(int)arg3 options:(NSDictionary *)arg4 error:(id *)arg5 handler:(id /* block */)arg6;
- (char)admissionCheckOfValue:(id)arg0 andOccurredWithValue:(id)arg1 cost:(long long)arg2 error:(id *)arg3 handler:(id /* block */)arg4;
- (char)admissionCheckOfValue:(id)arg0 andOccurredWithValue:(id)arg1 cost:(long long)arg2 type:(int)arg3 options:(NSDictionary *)arg4 error:(id *)arg5 handler:(id /* block */)arg6;
- (void)admissionCheckOfValueAsync:(id)arg0 type:(int)arg1 options:(NSDictionary *)arg2 handleQueue:(NSObject *)arg3 handler:(id /* block */)arg4;
- (char)setTrendBlockForValue:(id)arg0 withConfig:(NSObject *)arg1 error:(id *)arg2 handler:(id /* block */)arg3;
- (char)setAdmissionRevocationBlockWithError:(id *)arg0 handler:(id /* block */)arg1;
- (char)setResourceAvailabilityBlockWithError:(id *)arg0 handler:(id /* block */)arg1;
- (id)temporalForecastOfValue:(id)arg0 forHistoryWindow:(NSObject *)arg1 device:(NSObject *)arg2 forecastType:(int)arg3 temporalLeeway:(double)arg4 maximumElements:(unsigned long long)arg5 error:(id *)arg6;
- (id)peerForecastOfValue:(id)arg0 forHistoryWindow:(NSObject *)arg1 device:(NSObject *)arg2 forecastType:(int)arg3 temporalLeeway:(double)arg4 maximumElements:(unsigned long long)arg5 error:(id *)arg6;
- (id)statistic:(int)arg0 forHistoryWindow:(NSObject *)arg1 device:(NSObject *)arg2 error:(id *)arg3;
- (id)repeatedStatistic:(int)arg0 forHistoryWindow:(NSObject *)arg1 device:(NSObject *)arg2 error:(id *)arg3;
- (char)reset:(int)arg0 error:(id *)arg1;
- (id)temporalForecastOfValue:(id)arg0 forHistoryWindow:(NSObject *)arg1 deviceDescription:(NSString *)arg2 forecastType:(int)arg3 temporalLeeway:(double)arg4 maximumElements:(unsigned long long)arg5 error:(id *)arg6;
- (id)peerForecastOfValue:(id)arg0 forHistoryWindow:(NSObject *)arg1 deviceDescription:(NSString *)arg2 forecastType:(int)arg3 temporalLeeway:(double)arg4 maximumElements:(unsigned long long)arg5 error:(id *)arg6;
- (id)statistic:(int)arg0 forHistoryWindow:(NSObject *)arg1 deviceDescription:(NSString *)arg2 error:(id *)arg3;
- (id)repeatedStatistic:(int)arg0 forHistoryWindow:(NSObject *)arg1 deviceDescription:(NSString *)arg2 error:(id *)arg3;
- (char)setAdmissionBitMask:(unsigned long long)arg0 error:(id *)arg1;
- (char)resetAdmissionBitMask:(unsigned long long)arg0 error:(id *)arg1;
- (char)requestTemporalForecastFromDevice:(NSObject *)arg0 withValue:(NSValue *)arg1 forHistoryWindow:(NSObject *)arg2 forecastType:(int)arg3 error:(id *)arg4 handler:(id /* block */)arg5;
- (char)requestPeerForecastFromDevice:(NSObject *)arg0 withValue:(NSValue *)arg1 forHistoryWindow:(NSObject *)arg2 forecastType:(int)arg3 error:(id *)arg4 handler:(id /* block */)arg5;
- (char)requestStatisticFromDevice:(NSObject *)arg0 statistic:(int)arg1 forHistoryWindow:(NSObject *)arg2 error:(id *)arg3 handler:(id /* block */)arg4;
- (char)setAdmissionManualType:(BOOL)arg0 error:(id *)arg1;
- (unsigned long long)integerId;
- (unsigned long long)meteringStartedWithValue:(id)arg0 costDictionary:(NSDictionary *)arg1 onDate:(NSDate *)arg2 error:(id *)arg3;
- (char)meteringUpdateWithValue:(id)arg0 costDictionary:(NSDictionary *)arg1 onDate:(NSDate *)arg2 meteringToken:(unsigned long long)arg3 error:(id *)arg4;
- (char)meteringStoppedWithValue:(id)arg0 costDictionary:(NSDictionary *)arg1 onDate:(NSDate *)arg2 meteringToken:(unsigned long long)arg3 error:(id *)arg4;
- (char)activityStartedWithValue:(id)arg0 cost:(long long)arg1 error:(id *)arg2;
- (char)activityStoppedWithValue:(id)arg0 cost:(long long)arg1 error:(id *)arg2;
- (char)destroyWithError:(id *)arg0;
- (char)admissionCheckOfValue:(id)arg0 type:(int)arg1 options:(NSDictionary *)arg2 error:(id *)arg3 handler:(id /* block */)arg4;
- (NSString *)fullName;
- (char)setCategory:(int)arg0 error:(id *)arg1;

@end
