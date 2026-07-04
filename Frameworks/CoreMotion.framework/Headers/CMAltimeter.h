/* Runtime dump - CMAltimeter
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAltimeter : NSObject
{
    id _internal;
}

+ (void)dummySelector:(NSString *)arg0;
+ (char)isRelativeAltitudeAvailable;
+ (void)initialize;

- (CMAltimeter *)initPrivate;
- (void)deallocPrivate;
- (void)onFilteredPressure:(struct Sample *)arg0;
- (void)stopRelativeAltitudeUpdatesPrivate;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)startRelativeAltitudeUpdatesToQueue:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)stopRelativeAltitudeUpdates;
- (void)dealloc;
- (CMAltimeter *)init;

@end
