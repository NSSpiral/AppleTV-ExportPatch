/* Runtime dump - ATVAirPlayCRDModeAutostartController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BREvent, BRTextControl, BRWaitPromptControl;
@interface ATVAirPlayCRDModeAutostartController : BRController
{
    BRWaitPromptControl * _prompt;
    BRTextControl * _subtext;
    NSTimer * _countdownTimer;
}

@property (retain, nonatomic) BRWaitPromptControl * prompt;
@property (retain, nonatomic) BRTextControl * subtext;
@property (retain, nonatomic) NSTimer * countdownTimer;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)setSubtext:(BRTextControl *)arg0;
- (BRTextControl *)subtext;
- (void)_stopCountdown;
- (void)_startCountdown;
- (NSTimer *)countdownTimer;
- (void)setCountdownTimer:(NSTimer *)arg0;
- (void)_enterCRDMode;
- (void)dealloc;
- (ATVAirPlayCRDModeAutostartController *)init;
- (NSString *)accessibilityLabel;
- (BRWaitPromptControl *)prompt;
- (void)setPrompt:(BRWaitPromptControl *)arg0;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
