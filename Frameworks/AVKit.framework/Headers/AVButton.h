/* Runtime dump - AVButton
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVButton : UIButton

- (void)_updateSelected:(char)arg0 highlighted:(char)arg1;
- (char)_drawingAsSelected;
- (void)_updateForStateChangeAnimated:(char)arg0;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (struct CGRect)hitRect;
- (void)didMoveToSuperview;
- (void)setHighlighted:(char)arg0;
- (void)setSelected:(char)arg0;

@end
