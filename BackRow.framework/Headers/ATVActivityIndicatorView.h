/* Runtime dump - ATVActivityIndicatorView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRWaitPromptControl;
@interface ATVActivityIndicatorView : BRControl
{
    BRWaitPromptControl * _waitPromptView;
    NSTimer * _initialDelayTimer;
}

@property (retain, nonatomic) BRWaitPromptControl * waitPromptView;
@property (weak, nonatomic) NSTimer * initialDelayTimer;

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_initialDelayTimerFired:(id)arg0;
- (void)setInitialDelayTimer:(NSTimer *)arg0;
- (NSTimer *)initialDelayTimer;
- (BRWaitPromptControl *)waitPromptView;
- (void)setWaitPrompt:(BRWaitPromptControl *)arg0;
- (void)setWaitPromptView:(BRWaitPromptControl *)arg0;
- (void).cxx_destruct;

@end
