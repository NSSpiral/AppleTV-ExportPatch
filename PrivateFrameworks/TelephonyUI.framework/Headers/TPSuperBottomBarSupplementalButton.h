/* Runtime dump - TPSuperBottomBarSupplementalButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPSuperBottomBarSupplementalButton : UIButton

- (void)setEnabled:(char)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setHighlighted:(char)arg0;
- (struct CGRect)titleRectForContentRect:(NSObject *)arg0;
- (struct CGRect)imageRectForContentRect:(NSObject *)arg0;
- (TPSuperBottomBarSupplementalButton *)initWithAction:(int)arg0;
- (TPSuperBottomBarSupplementalButton *)initWithText:(NSString *)arg0 image:(UIImage *)arg1;

@end
