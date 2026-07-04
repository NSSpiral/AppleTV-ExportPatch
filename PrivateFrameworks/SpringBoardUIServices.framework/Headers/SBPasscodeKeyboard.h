/* Runtime dump - SBPasscodeKeyboard
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBPasscodeKeyboard : UIKeyboard
{
    SBUIPasscodeLockViewWithKeyboard * _lockView;
}

- (char)isActive;
- (char)shouldSaveMinimizationState;
- (char)canDismiss;
- (void)minimize;
- (void)maximize;
- (SBPasscodeKeyboard *)initWithFrame:(struct CGRect)arg0 lockView:(struct CGSize)arg1;

@end
