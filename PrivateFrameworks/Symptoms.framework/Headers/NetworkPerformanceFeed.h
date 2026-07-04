/* Runtime dump - NetworkPerformanceFeed
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
 */

@interface NetworkPerformanceFeed : NSObject
{
    AnalyticsWorkspace * workspace;
    NSObject<OS_dispatch_queue> * concQueue;
    NSObject<OS_dispatch_queue> * callerQueue;
    id _delegate;
}

@property (nonatomic) id delegate;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void).cxx_destruct;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NetworkPerformanceFeed *)initWithWorkspace:(AnalyticsWorkspace *)arg0;
- (void)_consultReturn:(id)arg0 advice:(/* block */ id)arg1;
- (id)_normalizedOpts:(id)arg0 toNetwork:(int)arg1;
- (BOOL)_rollFlowMetricsValuesFromDict:(id)arg0 toDict:(id)arg1 forKey:(NSString *)arg2 andRequest:(NSURLRequest *)arg3;
- (id)_flowMetricsPresentationFromRoll:(id)arg0 source:(struct flow_stats_stuct *)arg1;
- (BOOL)_rollRouteMetricsValuesFromDict:(id)arg0 toDict:(id)arg1 forKey:(NSString *)arg2;
- (id)_routeMetricsPresentationFromRoll:(id)arg0 source:(struct route_stats_stuct *)arg1 since:(long long)arg2 isKnownGood:(NSNumber *)arg3;
- (id)_formatInstantRouteMetrics:(id)arg0;
- (id)_formatWatchpointHit:(id)arg0;
- (BOOL)setReferencePoint:(int)arg0 reply:(id /* block */)arg1;
- (BOOL)usageConsultOn:(int)arg0 onlyRelativeToReferencePoint:(NSObject *)arg1 reply:(id /* block */)arg2;
- (BOOL)predictWaitUntilKnownGoodNetworkFor:(int)arg0 matchSignature:(BOOL)arg1 reply:(id /* block */)arg2;
- (BOOL)fullScorecardFor:(int)arg0 options:(NSDictionary *)arg1 reply:(id /* block */)arg2;
- (BOOL)watchpointOn:(int)arg0 forIdentifier:(NSString *)arg1 andKey:(NSString *)arg2 onThreshold:(double)arg3 withOptions:(unsigned long long)arg4 uponHit:(id)arg5;
- (BOOL)resetDataForKeys:(NSArray *)arg0 reply:(id /* block */)arg1;

@end
