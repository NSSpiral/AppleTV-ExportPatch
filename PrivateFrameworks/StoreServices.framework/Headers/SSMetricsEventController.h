/* Runtime dump - SSMetricsEventController
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventController : SSMetricsController
{
    SSMetricsEventTable * _table;
}

- (void)dealloc;
- (SSMetricsEventController *)init;
- (void)flushUnreportedEventsWithCompletionHandler:(id /* block */)arg0;
- (void)_serialQueueInsertEvents:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (int)_maximumUnreportedToSelect;
- (id)_collectUnreportedPIDsFromDatabase:(id)arg0 matchingReportURLString:(NSString *)arg1 since:(long long)arg2;
- (char)deleteEventsInsertedBefore:(long long)arg0;
- (char)deleteReportedEvents;
- (char)insertEventSummaries:(id)arg0 error:(id *)arg1;
- (char)markEventsAsReported:(id)arg0;
- (NSURL *)unreportedEventsForURL:(NSURL *)arg0 since:(long long)arg1;
- (NSURL *)newReportingSessionForURL:(NSURL *)arg0 since:(long long)arg1;
- (id)unreportedEventURLsSince:(long long)arg0;

@end
