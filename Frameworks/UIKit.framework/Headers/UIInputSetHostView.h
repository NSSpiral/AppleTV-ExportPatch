/* Runtime dump - UIInputSetHostView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSetHostView : UIView

+ (char)_retroactivelyRequiresConstraintBasedLayout;
+ (char)_shouldHitTestInputViewFirst;
+ (char)_notifyOnExplicitLayout;

- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutIfNeeded;
- (int)_clipCornersOfView:(NSObject *)arg0;
- (void)_resizeForKeyplaneSize:(struct CGSize)arg0 splitWidthsChanged:(char)arg1;

@end
