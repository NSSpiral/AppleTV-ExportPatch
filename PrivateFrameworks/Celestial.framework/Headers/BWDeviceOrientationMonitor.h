/* Runtime dump - BWDeviceOrientationMonitor
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDeviceOrientationMonitor : NSObject
{
    int _orientationDispatchToken;
    NSObject<OS_dispatch_queue> * _orientationNotificationDispatchQueue;
    unsigned int _mostRecentPortraitLandscapeOrientation;
    unsigned int _currentOrientation;
    <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> * _portraitLandscapeUpdateDelegate;
    struct OpaqueFigSimpleMutex * _stateMutex;
}

@property (readonly, nonatomic) unsigned int mostRecentPortraitLandscapeOrientation;
@property (nonatomic) <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> * portraitLandscapeUpdateDelegate;

+ (void)initialize;

- (void)dealloc;
- (BWDeviceOrientationMonitor *)init;
- (char)stop;
- (char)start;
- (void)_doStart;
- (void)_doStop;
- (void)_orientationChanged;
- (<BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> *)portraitLandscapeUpdateDelegate;
- (void)setPortraitLandscapeUpdateDelegate:(<BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> *)arg0;
- (unsigned int)mostRecentPortraitLandscapeOrientation;

@end
