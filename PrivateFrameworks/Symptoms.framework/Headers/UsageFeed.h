/* Runtime dump - UsageFeed
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
 */

@interface UsageFeed : NSObject
{
    AnalyticsWorkspace * workspace;
    UsageAnalytics * handleAnalytics;
    id _delegate;
    NSArray * _processFeedData;
}

@property (nonatomic) id delegate;
@property (retain, nonatomic) NSArray * processFeedData;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void).cxx_destruct;
- (UsageFeed *)initWithWorkspace:(AnalyticsWorkspace *)arg0;
- (BOOL)usageToDateWithOptionsFor:(id)arg0 nameKind:(id)arg1 options:(NSDictionary *)arg2 reply:(id /* block */)arg3;
- (BOOL)setUsageOption:(id)arg0 reply:(id /* block */)arg1;
- (BOOL)_rollUsageValuesFromDict:(id)arg0 toDict:(id)arg1 forKey:(NSString *)arg2;
- (void)_rollValuesFrom:(NSObject *)arg0 toDict:(id)arg1;
- (void)prepProcessDataFractionWithTag:(unsigned int)arg0 andMetadata:(unsigned int)arg1 from:(NSObject *)arg2 until:(ICSDateValue *)arg3 pollInterval:(float)arg4;
- (id)_performRollUp:(unsigned int)arg0 andMetadata:(unsigned int)arg1 from:(NSObject *)arg2 until:(ICSDateValue *)arg3;
- (NSString *)_composePredicateLineWithName:(NSString *)arg0 keyPath:(NSString *)arg1 isSweep:(BOOL *)arg2 wantGeneric:(BOOL)arg3 gotGeneric:(BOOL *)arg4;
- (id)_usagePresentation:(id)arg0 nameKind:(id)arg1 altName:(NSString *)arg2 altNameKind:(id)arg3 source:(double *)arg4 since:(long long)arg5;
- (id)_typicalUsagePresentation:(id)arg0 nameKind:(id)arg1 source:(NSObject *)arg2;
- (id)_calendarUsagePresentation:(id)arg0 nameKind:(id)arg1 source:(NSObject *)arg2;
- (void)prepProcessDataFractionWithTag:(unsigned int)arg0 from:(NSObject *)arg1 until:(ICSDateValue *)arg2 pollInterval:(float)arg3;
- (BOOL)usageToDateFor:(id)arg0 nameKind:(id)arg1 reply:(id /* block */)arg2;
- (BOOL)typicalUsageFor:(AppTypicalUsage *)arg0 nameKind:(id)arg1 intervalKind:(unsigned int)arg2 reply:(id /* block */)arg3;
- (BOOL)calendarUsageFor:(AppCalendarUsage *)arg0 nameKind:(id)arg1 dayResolution:(id)arg2 daySlot:(unsigned short)arg3 weekSlot:(unsigned short)arg4 reply:(id /* block */)arg5;
- (BOOL)resetUsageDataFor:(id)arg0 nameKind:(id)arg1 reply:(id /* block */)arg2;
- (NSArray *)processFeedData;
- (void)setProcessFeedData:(NSArray *)arg0;

@end
