/* Runtime dump - ATVPowerManagementObserver
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class BRWindow, LTThermalNoticeController;
@interface ATVPowerManagementObserver : BRSingleton
{
    char _playbackPreventsIdleSleep;
    NSArray * _usageKeysArray;
    BRWindow * _window;
    NSTimer * _sleepActivityTimer;
    NSTimer * _serverDisconnectIdleTimer;
    LTThermalNoticeController * _thermalNoteController;
}

@property (retain, nonatomic) NSArray * usageKeysArray;
@property (retain, nonatomic) BRWindow * window;
@property (retain, nonatomic) NSTimer * sleepActivityTimer;
@property (retain, nonatomic) NSTimer * serverDisconnectIdleTimer;
@property (nonatomic) char playbackPreventsIdleSleep;
@property (retain, nonatomic) LTThermalNoticeController * thermalNoteController;

+ (ATVPowerManagementObserver *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_deviceWillSleep:(id)arg0;
- (void)_deviceWillWake:(id)arg0;
- (void)_serverPlaybackRequestReceived:(id)arg0;
- (void)_sleepActivityTimerFired:(id)arg0;
- (void)_turnAirPlayBackOn;
- (char)playbackPreventsIdleSleep;
- (void)_disconnectFromServers:(id)arg0;
- (NSArray *)_usageKeys;
- (void)setPlaybackPreventsIdleSleep:(char)arg0;
- (NSArray *)usageKeysArray;
- (void)setUsageKeysArray:(NSArray *)arg0;
- (NSTimer *)sleepActivityTimer;
- (void)setSleepActivityTimer:(NSTimer *)arg0;
- (NSTimer *)serverDisconnectIdleTimer;
- (void)setServerDisconnectIdleTimer:(NSTimer *)arg0;
- (LTThermalNoticeController *)thermalNoteController;
- (void)setThermalNoteController:(LTThermalNoticeController *)arg0;
- (BRWindow *)window;
- (ATVPowerManagementObserver *)init;
- (void)setWindow:(BRWindow *)arg0;
- (void).cxx_destruct;
- (void)wakeDevice;
- (void)_thermalNotification:(NSNotification *)arg0;

@end
