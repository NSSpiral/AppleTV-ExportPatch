/* Runtime dump - UIKeyboardAutomatic
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardAutomatic : UIKeyboard
{
    char showsCandidateBar;
    char showsCandidateInline;
    char receivedCandidatesInCurrentInputMode;
    char caretBlinks;
}

@property (nonatomic) char showsCandidateBar;
@property (nonatomic) char receivedCandidatesInCurrentInputMode;
@property (nonatomic) char showsCandidateInline;
@property (nonatomic) char caretBlinks;

- (UIKeyboardAutomatic *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (char)isActive;
- (void)setCaretBlinks:(char)arg0;
- (void)activate;
- (char)showsCandidateBar;
- (char)showsCandidateInline;
- (void)setShowsCandidateBar:(char)arg0;
- (char)caretBlinks;
- (void)setShowsCandidateInline:(char)arg0;
- (char)receivedCandidatesInCurrentInputMode;
- (void)setReceivedCandidatesInCurrentInputMode:(char)arg0;
- (void)minimize;
- (void)maximize;
- (void)prepareForImplBoundsHeightChange:(float)arg0 suppressNotification:(char)arg1;
- (void)implBoundsHeightChangeDone:(float)arg0 suppressNotification:(char)arg1;
- (char)_isAutomaticKeyboard;
- (void)willResume:(SATimerResume *)arg0;
- (void)didSuspend:(id)arg0;
- (struct UIPeripheralAnimationGeometry)geometryForHeightDelta:(struct CGSize)arg0;

@end
