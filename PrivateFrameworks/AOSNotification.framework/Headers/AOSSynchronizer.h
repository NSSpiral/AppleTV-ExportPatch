/* Runtime dump - AOSSynchronizer
 * Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@interface AOSSynchronizer : NSObject
{
    char _timeoutOccurred;
    NSObject<OS_dispatch_semaphore> * _sem;
    NSString * _info;
    double _timeout;
}

@property (nonatomic) char timeoutOccurred;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString * info;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> * sem;

- (NSString *)info;
- (void).cxx_destruct;
- (void)signal;
- (void)setInfo:(NSString *)arg0;
- (AOSSynchronizer *)initWithDescription:(NSString *)arg0 andTimeout:(double)arg1;
- (NSObject<OS_dispatch_semaphore> *)sem;
- (NSObject *)loggingID;
- (char)timeoutOccurred;
- (void)setTimeoutOccurred:(char)arg0;
- (void)setSem:(NSObject<OS_dispatch_semaphore> *)arg0;
- (void)setTimeout:(double)arg0;
- (void)wait;
- (double)timeout;

@end
