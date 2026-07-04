/* Runtime dump - MSBatteryPowerMonitor
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSBatteryPowerMonitor : NSObject
{
    struct __CFRunLoopSource * _batteryRunLoopSource;
    struct IONotificationPort * _batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    char _isExteralPowerConnected;
    double _currentLevel;
}

@property (nonatomic) char isExternalPowerConnected;
@property (nonatomic) double currentLevel;

+ (MSBatteryPowerMonitor *)defaultMonitor;

- (void)dealloc;
- (MSBatteryPowerMonitor *)init;
- (double)batteryPercentRemaining;
- (void)setCurrentLevel:(double)arg0;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg0;
- (char)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg0;
- (double)currentLevel;
- (void)setExternalPowerConnected:(char)arg0;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg0;
- (char)isExternalPowerConnected;

@end
