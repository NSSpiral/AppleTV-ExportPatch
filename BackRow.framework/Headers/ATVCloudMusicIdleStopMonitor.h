/* Runtime dump - ATVCloudMusicIdleStopMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVCloudMusicIdleStopMonitor : NSObject
{
    NSTimer * _playerStopTimer;
}

+ (ATVCloudMusicIdleStopMonitor *)sharedInstance;

- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_cancelPlayerStopTimer;
- (void)_playerStopTimerHandler:(id /* block */)arg0;
- (void)_userActivityHandler:(id /* block */)arg0;
- (ATVCloudMusicIdleStopMonitor *)init;
- (void).cxx_destruct;

@end
