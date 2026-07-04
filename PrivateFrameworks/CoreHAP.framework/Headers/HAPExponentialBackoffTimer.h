/* Runtime dump - HAPExponentialBackoffTimer
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPExponentialBackoffTimer : HAPTimer
{
    char _increasing;
    int _exponentialFactor;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    double _minimumTimeInterval;
    double _maximumTimeInterval;
}

@property (readonly, nonatomic) double minimumTimeInterval;
@property (readonly, nonatomic) double maximumTimeInterval;
@property (readonly, nonatomic) int exponentialFactor;
@property (nonatomic) double timeInterval;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (readonly, nonatomic) char increasing;

- (double)timeInterval;
- (void)setTimeInterval:(double)arg0;
- (void).cxx_destruct;
- (HAPExponentialBackoffTimer *)initWithTimeInterval:(double)arg0 options:(unsigned int)arg1;
- (void)_fire;
- (HAPExponentialBackoffTimer *)initWithMinimumTimeInterval:(double)arg0 maximumTimeInterval:(double)arg1 exponentialFactor:(int)arg2 options:(unsigned int)arg3;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (char)isIncreasing;
- (int)exponentialFactor;
- (double)maximumTimeInterval;
- (double)minimumTimeInterval;

@end
