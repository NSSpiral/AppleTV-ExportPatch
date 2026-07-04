/* Runtime dump - CUTPowerMonitor
 * Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTPowerMonitor : NSObject
{
    CUTWeakReference * _iokitDelegate;
    struct __CFRunLoopSource * _batteryRunLoopSource;
    struct IONotificationPort * _batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    unsigned int _pmConnection;
    struct IONotificationPort * _pmPort;
    unsigned int _pmNotifier;
    NSMutableArray * _delegates;
    double _currentLevel;
    char _isExternalPowerConnected;
}

@property (nonatomic) char isExternalPowerConnected;
@property (readonly, nonatomic) double batteryPercentRemaining;
@property (nonatomic) double currentLevel;

+ (CUTPowerMonitor *)sharedInstance;

- (void)addDelegate:(NSObject *)arg0;
- (void)dealloc;
- (CUTPowerMonitor *)init;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)arg0 notificationID:(void *)arg1;
- (void)removeDelegate:(NSObject *)arg0;
- (double)batteryPercentRemaining;
- (void)setCurrentLevel:(double)arg0;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg0;
- (char)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg0;
- (double)currentLevel;
- (void)setExternalPowerConnected:(char)arg0;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg0;
- (char)isExternalPowerConnected;

@end
