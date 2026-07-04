/* Runtime dump - SSMetricsEventReportingSession
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventReportingSession : NSObject
{
    long long _insertTimestamp;
    NSURL * _reportingURL;
    NSArray * _unreportedEvents;
    NSMutableArray * _unreportedEventPIDs;
    SSMetricsEventController * _eventController;
}

- (void)dealloc;
- (SSMetricsEventReportingSession *)initWithReportingURL:(NSURL *)arg0 insertTimestamp:(long long)arg1 eventController:(SSMetricsEventController *)arg2;
- (NSArray *)_unreportedEvents;
- (void)_writeString:(NSString *)arg0 toData:(NSData *)arg1;
- (char)anyUnreportedEvents;
- (char)markEventsAsReported;
- (void)writeEventsToStream:(NSObject *)arg0;

@end
