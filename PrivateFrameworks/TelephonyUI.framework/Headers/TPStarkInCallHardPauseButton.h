/* Runtime dump - TPStarkInCallHardPauseButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkInCallHardPauseButton : UIButton
{
    <TPStarkHardPauseButtonDelegate> * _delegate;
}

@property <TPStarkHardPauseButtonDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<TPStarkHardPauseButtonDelegate> *)arg0;
- (void)setHidden:(char)arg0;
- (TPStarkInCallHardPauseButton *)init;
- (<TPStarkHardPauseButtonDelegate> *)delegate;
- (void)setHighlighted:(char)arg0;
- (void)updateHardPauseButtonState;
- (void)hardPausePressed;
- (void)hardPauseControllerChangedNotification:(NSNotification *)arg0;

@end
