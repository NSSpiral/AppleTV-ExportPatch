/* Runtime dump - BRCThrottle
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCThrottle : BRCThrottleBase
{
    NSMutableDictionary * _retryCounters;
    BRCMinHeap * _retryHeap;
}

+ (long long)throttleHashFormat:(NSString *)arg0;
+ (long long)throttleHashBytes:(void *)arg0 length:(unsigned long)arg1;

- (void).cxx_destruct;
- (void)incrementRetryCount:(long long)arg0;
- (long long)nsecsToNextRetry:(long long)arg0 now:(long long)arg1;
- (BRCThrottle *)initWithName:(NSString *)arg0 andParameters:(NSDictionary *)arg1;
- (void)_cleanupStaleCounters:(long long)arg0;
- (void)logFirstBackoffTimes:(unsigned int)arg0;

@end
