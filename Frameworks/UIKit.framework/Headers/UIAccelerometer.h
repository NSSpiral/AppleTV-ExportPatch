/* Runtime dump - UIAccelerometer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccelerometer : NSObject
{
    double _updateInterval;
    <UIAccelerometerDelegate> * _delegate;
    struct ? _accelerometerFlags;
    CMMotionManager * _motionManager;
}

@property (nonatomic) double updateInterval;
@property (nonatomic) <UIAccelerometerDelegate> * delegate;

+ (UIAccelerometer *)sharedAccelerometer;

- (void)dealloc;
- (void)setDelegate:(<UIAccelerometerDelegate> *)arg0;
- (UIAccelerometer *)init;
- (<UIAccelerometerDelegate> *)delegate;
- (void)_acceleratedInX:(double)arg0 y:(double)arg1 z:(double)arg2 timestamp:(double)arg3;
- (double)updateInterval;
- (void)setUpdateInterval:(double)arg0;
- (void)_willResume:(SATimerResume *)arg0;
- (void)_didSuspend:(id)arg0;
- (CMMotionManager *)_motionManager;
- (void)_startAccelerometerIfNecessary;
- (void)_stopAccelerometer;

@end
