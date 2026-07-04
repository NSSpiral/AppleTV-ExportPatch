/* Runtime dump - SBFDeviceBlockTimer
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFDeviceBlockTimer : NSObject
{
    char _enabled;
    id _handler;
    NSString * _titleText;
    NSString * _subtitleText;
    SBFDeviceLockController * _deviceLockController;
    NSTimer * _timer;
    NSString * _cachedLocalizedPlatformName;
}

@property (copy, nonatomic) id handler;
@property (copy, nonatomic) NSString * titleText;
@property (copy, nonatomic) NSString * subtitleText;
@property (retain, nonatomic) SBFDeviceLockController * deviceLockController;
@property (retain, nonatomic) NSTimer * timer;
@property (copy, nonatomic) NSString * cachedLocalizedPlatformName;
@property (nonatomic) char enabled;

- (void)dealloc;
- (void)invalidate;
- (void)setEnabled:(char)arg0;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (char)enabled;
- (void)start;
- (void)setTitleText:(NSString *)arg0;
- (void)setTimer:(NSTimer *)arg0;
- (NSTimer *)timer;
- (NSString *)titleText;
- (void)_clearTimer;
- (void)setDeviceLockController:(SBFDeviceLockController *)arg0;
- (void)_scheduleTimerIfNecessaryAndUpdateState;
- (void)setCachedLocalizedPlatformName:(NSString *)arg0;
- (void)setSubtitleText:(NSString *)arg0;
- (NSString *)_localizedPlatformName;
- (SBFDeviceBlockTimer *)initWithDeviceLockController:(SBFDeviceLockController *)arg0;
- (NSString *)subtitleText;
- (SBFDeviceLockController *)deviceLockController;
- (NSString *)cachedLocalizedPlatformName;

@end
