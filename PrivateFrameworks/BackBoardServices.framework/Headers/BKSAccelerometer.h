/* Runtime dump - BKSAccelerometer
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSAccelerometer : NSObject
{
    <BKSAccelerometerDelegate> * _delegate;
    struct __CFRunLoopSource * _accelerometerEventsSource;
    struct __CFRunLoop * _accelerometerEventsRunLoop;
    double _interval;
    NSLock * _lock;
    int _orientationCheckToken;
    int _orientationNotificationsToken;
    NSThread * _orientationEventsThread;
    unsigned int _orientationPort;
    char _passiveOrientationEvents;
    char _orientationEventsEnabled;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
    double _updateInterval;
}

@property (nonatomic) char accelerometerEventsEnabled;
@property (nonatomic) double updateInterval;
@property (nonatomic) float xThreshold;
@property (nonatomic) float yThreshold;
@property (nonatomic) float zThreshold;
@property (nonatomic) char passiveOrientationEvents;
@property (nonatomic) char orientationEventsEnabled;
@property (nonatomic) <BKSAccelerometerDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<BKSAccelerometerDelegate> *)arg0;
- (BKSAccelerometer *)init;
- (<BKSAccelerometerDelegate> *)delegate;
- (void)setAccelerometerEventsEnabled:(char)arg0;
- (char)accelerometerEventsEnabled;
- (double)updateInterval;
- (void)setUpdateInterval:(double)arg0;
- (void)setXThreshold:(float)arg0;
- (void)setYThreshold:(float)arg0;
- (void)setZThreshold:(float)arg0;
- (void)_checkIn;
- (void)_checkOut;
- (void)_updateOrientationServer;
- (void)_orientationDidChange;
- (void)_serverWasRestarted;
- (void)setPassiveOrientationEvents:(char)arg0;
- (NSThread *)_orientationEventsThread;
- (char)passiveOrientationEvents;
- (void)setOrientationEventsEnabled:(char)arg0;
- (int)currentDeviceOrientation;
- (float)xThreshold;
- (float)yThreshold;
- (float)zThreshold;
- (char)orientationEventsEnabled;

@end
