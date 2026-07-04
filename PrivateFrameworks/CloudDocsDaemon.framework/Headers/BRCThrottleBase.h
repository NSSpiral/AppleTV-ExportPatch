/* Runtime dump - BRCThrottleBase
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCThrottleBase : NSObject
{
    NSString * _name;
    unsigned int _initialRetryCount;
    unsigned int _finalRetryCount;
    long long _minimumNsecsBetweenRetries;
    long long _maximumNsecsBetweenRetries;
    long long _nsecsBeforeForgettingCounter;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) long long nsecsBeforeForgettingCounter;

- (NSString *)name;
- (void).cxx_destruct;
- (long long)nsecsToNextRetry:(long long)arg0 retryCount:(unsigned int *)arg1 now:(long long)arg2;
- (long long)nsecsBeforeForgettingCounter;
- (BRCThrottleBase *)initWithName:(NSString *)arg0 andParameters:(NSDictionary *)arg1;
- (long long)retryBackoff:(unsigned int)arg0;
- (char)isBlocking;

@end
