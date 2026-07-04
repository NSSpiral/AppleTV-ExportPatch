/* Runtime dump - ATVRadioMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVRadioMonitor : NSObject
{
    char _disableiAdEngineSelectorScheduled;
    char _radioAppActive;
    char _displayingStillListeningDialog;
    NSTimer * _playbackPausedTimer;
    NSTimer * _stillListeningPresentationTimer;
    NSTimer * _stillListeningDismissalTimer;
    NSTimer * _holdOffScreenSaverTimer;
    NSDate * _lastUserActionDate;
}

@property (nonatomic) char radioAppActive;
@property (weak, nonatomic) NSTimer * playbackPausedTimer;
@property (weak, nonatomic) NSTimer * stillListeningPresentationTimer;
@property (weak, nonatomic) NSTimer * stillListeningDismissalTimer;
@property (weak, nonatomic) NSTimer * holdOffScreenSaverTimer;
@property (retain, nonatomic) NSDate * lastUserActionDate;
@property (nonatomic) char displayingStillListeningDialog;

+ (ATVRadioMonitor *)sharedInstance;

- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)setRadioAppActive:(char)arg0;
- (void)_playerMediaCued:(id)arg0;
- (void)_deviceWillSleep:(id)arg0;
- (void)startingPlaybackOperation:(NSObject *)arg0;
- (void)_deviceWillWakeup:(id)arg0;
- (void)_assetPlayedToEnd:(id)arg0;
- (void)_userActionOccurred:(id)arg0;
- (void)_enableIAdEngineImmediate:(id)arg0;
- (void)_disableIAdEngineWithDelay:(double)arg0;
- (void)setLastUserActionDate:(NSDate *)arg0;
- (char)radioAppActive;
- (void)_playerStateDidChangeToState:(int)arg0;
- (void)_disableIAdEngineImmediate:(id)arg0;
- (NSTimer *)playbackPausedTimer;
- (void)setPlaybackPausedTimer:(NSTimer *)arg0;
- (void)_playbackPausedTimerFired:(id)arg0;
- (NSTimer *)stillListeningPresentationTimer;
- (void)setStillListeningPresentationTimer:(NSTimer *)arg0;
- (void)_dismissStillListeningDialog;
- (void)_scheduleStillListeningPresentationTimerIfNeeded;
- (char)isDisplayingStillListeningDialog;
- (void)_dismissScreenSaver;
- (NSTimer *)stillListeningDismissalTimer;
- (void)_stillListeningDismissalTimerFired:(id)arg0;
- (void)setStillListeningDismissalTimer:(NSTimer *)arg0;
- (void)_presentStillListeningDialog;
- (void)_holdOffScreenSaver;
- (NSTimer *)holdOffScreenSaverTimer;
- (void)setHoldOffScreenSaverTimer:(NSTimer *)arg0;
- (void)_holdOffTimerFired:(id)arg0;
- (NSDate *)lastUserActionDate;
- (void)_stillListeningPresentationTimerFired:(id)arg0;
- (void)setDisplayingStillListeningDialog:(char)arg0;
- (void)_resumePlayback;
- (void)dealloc;
- (ATVRadioMonitor *)init;
- (void)_stopPlayback;
- (void).cxx_destruct;
- (CALayer *)player;

@end
