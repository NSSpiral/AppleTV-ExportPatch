/* Runtime dump - EKRequestAvailabilityOperation
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRequestAvailabilityOperation : NSOperation
{
    char _isFinished;
    char _isExecuting;
    EKAvailabilityCache * _availabilityCache;
    NSDate * _startDate;
    NSDate * _endDate;
    NSString * _ignoredEventID;
    NSArray * _addresses;
    id _resultsBlock;
    id _requestID;
    NSObject<OS_dispatch_queue> * _queue;
    NSError * _error;
}

@property (retain, nonatomic) NSError * error;

- (void)_finishWithError:(NSError *)arg0;
- (EKRequestAvailabilityOperation *)initWithSource:(NSObject *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2 ignoredEventID:(NSString *)arg3 addresses:(NSArray *)arg4 resultsBlock:(id /* block */)arg5;
- (void)cancel;
- (void)dealloc;
- (EKRequestAvailabilityOperation *)init;
- (NSString *)description;
- (void)start;
- (void)main;
- (char)isFinished;
- (char)isExecuting;
- (char)isConcurrent;
- (NSError *)error;
- (void)setError:(NSError *)arg0;

@end
