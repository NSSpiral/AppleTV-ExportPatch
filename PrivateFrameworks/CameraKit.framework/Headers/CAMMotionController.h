/* Runtime dump - CAMMotionController
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMMotionController : NSObject
{
    int _captureOrientation;
    int _deviceOrientation;
    BKSAccelerometer * __accelerometer;
    int __numberOfDominantPhysicalButtonObservers;
    CMMotionManager * __physicalButtonMotionManager;
    int _dominantPhysicalButton;
}

@property (nonatomic) int captureOrientation;
@property (nonatomic) int deviceOrientation;
@property (retain, nonatomic) BKSAccelerometer * _accelerometer;
@property (nonatomic) int _numberOfDominantPhysicalButtonObservers;
@property (readonly, nonatomic) CMMotionManager * _physicalButtonMotionManager;
@property (nonatomic) int dominantPhysicalButton;

+ (CAMMotionController *)sharedController;

- (void)dealloc;
- (CAMMotionController *)init;
- (int)deviceOrientation;
- (void).cxx_destruct;
- (int)captureOrientation;
- (void)_setCaptureOrientation:(int)arg0;
- (void)_setDeviceOrientation:(int)arg0;
- (BKSAccelerometer *)_accelerometer;
- (void)_setAccelerometer:(UIAccelerometer *)arg0;
- (int)_numberOfDominantPhysicalButtonObservers;
- (void)_setNumberOfDominantPhysicalButtonObservers:(int)arg0;
- (CMMotionManager *)_physicalButtonMotionManager;
- (int)dominantPhysicalButton;
- (void)_setDominantPhysicalButton:(int)arg0;

@end
