/* Runtime dump - BRCRetryCounter
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCRetryCounter : NSObject
{
    char _scheduled;
    unsigned int _retryCount;
    long long _latestRetry;
    long long _throttleHash;
}

@property (readonly, nonatomic) unsigned int retryCount;
@property (readonly, nonatomic) long long latestRetry;
@property (readonly, nonatomic) long long throttleHash;

- (void)schedule;
- (void)incrementRetry;
- (BRCRetryCounter *)initWithThrottleHash:(long long)arg0;
- (unsigned int)retryCount;
- (long long)latestRetry;
- (long long)throttleHash;

@end
