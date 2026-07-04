/* Runtime dump - SettingsRemoteLearningView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVMultistateProgressIndicator, BRImageControl, BRTextControl;
@interface SettingsRemoteLearningView : BRControl
{
    BRTextControl * _title;
    BRTextControl * _prompt;
    BRTextControl * _subPrompt;
    BRTextControl * _bottomPrompt;
    BRTextControl * _inactivityMessage;
    BRTextControl * _progressBarText;
    BRImageControl * _buttonImage;
    ATVMultistateProgressIndicator * _progressBar;
    NSTimer * _inactivityTimer;
}

- (void)layoutSubcontrols;
- (double)progressPercentage;
- (BRTextControl *)subPrompt;
- (BRTextControl *)bottomPrompt;
- (void)setSubPrompt:(BRTextControl *)arg0;
- (void)setButtonImage:(BRImageControl *)arg0;
- (void)setBottomPrompt:(BRTextControl *)arg0;
- (void)setInactivityMessage:(BRTextControl *)arg0 timeout:(double)arg1;
- (void)showProgress:(char)arg0;
- (void)_showInactivityMessage;
- (void)_hideInactivityMessage;
- (void)setProgressText:(NSString *)arg0;
- (SettingsRemoteLearningView *)init;
- (void)setTitle:(BRTextControl *)arg0;
- (BRTextControl *)title;
- (BRTextControl *)prompt;
- (void)setPrompt:(BRTextControl *)arg0;
- (void).cxx_destruct;
- (void)setProgressPercentage:(double)arg0;

@end
