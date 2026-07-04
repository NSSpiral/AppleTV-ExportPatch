/* Runtime dump - CMPedometer
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometer : NSObject
{
    CMPedometerProxy * _pedometerProxy;
}

@property (readonly, nonatomic) CMPedometerProxy * pedometerProxy;

+ (char)isStepCountingAvailable;
+ (char)isDistanceAvailable;
+ (char)isFloorCountingAvailable;
+ (char)isPaceEstimationAvailable;

- (CMPedometerProxy *)pedometerProxy;
- (void)queryPedometerDataFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1 withHandler:(id /* block */)arg2;
- (void)startPedometerUpdatesFromDate:(NSDate *)arg0 withHandler:(id /* block */)arg1;
- (void)stopPedometerUpdates;
- (void)queryPedometerDataSinceRecord:(int)arg0 withHandler:(id /* block */)arg1;
- (void)queryPedometerDataSinceDataRecord:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)dealloc;
- (CMPedometer *)init;

@end
