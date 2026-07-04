/* Runtime dump - GEOThrottleState
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOThrottleState : NSObject
{
    unsigned int _requestCount;
    double _lastResetTime;
}

@property (nonatomic) unsigned int requestCount;
@property (nonatomic) double lastResetTime;

- (unsigned int)requestCount;
- (double)lastResetTime;
- (void)setRequestCount:(unsigned int)arg0;
- (void)setLastResetTime:(double)arg0;

@end
