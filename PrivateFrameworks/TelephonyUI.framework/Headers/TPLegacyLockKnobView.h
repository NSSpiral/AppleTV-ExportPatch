/* Runtime dump - TPLegacyLockKnobView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyLockKnobView : UIImageView
{
    TPLegacyBottomLockBar * _track;
    UIAlphaAnimation * _animation;
    float _centerDelta;
    char _tracking;
}

- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (TPLegacyLockKnobView *)initWithImage:(UIImage *)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (char)isTracking;
- (char)shouldBeginTracking:(id)arg0;
- (void)beginTracking:(id)arg0;
- (void)setLockView:(SBUIPasscodeLockViewWithKeyboard *)arg0;

@end
