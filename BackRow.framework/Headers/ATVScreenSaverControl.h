/* Runtime dump - ATVScreenSaverControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVRadioPlayer, BREvent, BRMediaPlayer, BRMediaPlayerEventHandler;
@interface ATVScreenSaverControl : BRControl
{
    BRMediaPlayer * _player;
    BRMediaPlayerEventHandler * _eventHandler;
    char _dismissWithTopMenuEvent;
    <ATVScreenSaverInterstitials> * _screenSaverInterstitials;
    NSTimer * _screenSaverBringBackTimer;
}

@property (nonatomic) char dismissWithTopMenuEvent;
@property (retain, nonatomic) <ATVScreenSaverInterstitials> * screenSaverInterstitials;
@property (retain, nonatomic) NSTimer * screenSaverBringBackTimer;

+ (ATVScreenSaverControl *)screenSaverControlWithPlugin:(id)arg0 screenSaverAutoFired:(char)arg1;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_playerAssetChanged:(NSNotification *)arg0;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_setNewPlayer:(ATVPlayer *)arg0;
- (<ATVScreenSaverInterstitials> *)screenSaverInterstitials;
- (void)_showInterstitials:(char)arg0 animate:(char)arg1;
- (ATVScreenSaverControl *)initWithPlugin:(PLSlideshowPlugin *)arg0 screenSaverAutoFired:(char)arg1;
- (char)_playPauseAction:(NSObject *)arg0;
- (char)_nextTrackAction:(NSObject *)arg0;
- (char)_previousTrackAction:(NSObject *)arg0;
- (NSTimer *)screenSaverBringBackTimer;
- (void)setScreenSaverBringBackTimer:(NSTimer *)arg0;
- (CALayer *)_screenSaverInterstitialsForPlayer:(id)arg0;
- (void)setScreenSaverInterstitials:(<ATVScreenSaverInterstitials> *)arg0;
- (void)_screenSaverBringBackTimerHandler:(id /* block */)arg0;
- (char)_isRadioPlayer:(ATVRadioPlayer *)arg0;
- (char)dismissWithTopMenuEvent;
- (void)setDismissWithTopMenuEvent:(char)arg0;
- (void)dealloc;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;

@end
