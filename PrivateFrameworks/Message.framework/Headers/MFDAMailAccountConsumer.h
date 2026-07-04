/* Runtime dump - MFDAMailAccountConsumer
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer>
{
    NSConditionLock * _doneCondition;
    char _shouldRetryRequest;
    char _alwaysReportFailures;
}

- (void)dealloc;
- (MFDAMailAccountConsumer *)init;
- (void)waitUntilDone;
- (char)shouldRetryRequest;
- (MFDAMailAccountConsumer *)initWithAlwaysReportFailures:(char)arg0;
- (void)taskFailed:(id)arg0 statusCode:(int)arg1 error:(NSError *)arg2;
- (void)setDone:(char)arg0;
- (void)actionFailed:(int)arg0 forTask:(NSObject *)arg1 error:(NSError *)arg2;
- (char)waitUntilDoneBeforeDate:(NSDate *)arg0;

@end
