/* Runtime dump - SBSAccelerometer
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate>
{
    <SBSAccelerometerDelegate> * _delegate;
    BKSAccelerometer * _bksMirror;
}

@property (nonatomic) char accelerometerEventsEnabled;
@property (nonatomic) double updateInterval;
@property (nonatomic) float xThreshold;
@property (nonatomic) float yThreshold;
@property (nonatomic) float zThreshold;
@property (nonatomic) char orientationEventsEnabled;
@property (nonatomic) <SBSAccelerometerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<SBSAccelerometerDelegate> *)arg0;
- (SBSAccelerometer *)init;
- (<SBSAccelerometerDelegate> *)delegate;
- (void)setAccelerometerEventsEnabled:(char)arg0;
- (char)accelerometerEventsEnabled;
- (double)updateInterval;
- (void)setUpdateInterval:(double)arg0;
- (void)setXThreshold:(float)arg0;
- (void)setYThreshold:(float)arg0;
- (void)setZThreshold:(float)arg0;
- (void)accelerometer:(BKSAccelerometer *)arg0 didAccelerateWithTimeStamp:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 eventType:(int)arg5;
- (void)setOrientationEventsEnabled:(char)arg0;
- (int)currentDeviceOrientation;
- (void)accelerometer:(BKSAccelerometer *)arg0 didChangeDeviceOrientation:(int)arg1;
- (float)xThreshold;
- (float)yThreshold;
- (float)zThreshold;
- (char)orientationEventsEnabled;

@end
