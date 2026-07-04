/* Runtime dump - TimeWithLatency
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface TimeWithLatency : NSObject
{
    NSDate * _time;
    double _latency;
}

@property (retain) NSDate * time;
@property double latency;

- (TimeWithLatency *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTime:(NSDate *)arg0;
- (NSDate *)time;
- (void).cxx_destruct;
- (double)latency;
- (void)setLatency:(double)arg0;
- (TimeWithLatency *)initWithTime:(NSDate *)arg0 andLatency:(double)arg1;

@end
