/* Runtime dump - SBFButton
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFButton : UIButton

- (void)_updateSelected:(char)arg0 highlighted:(char)arg1;
- (char)_drawingAsSelected;
- (SBFButton *)initWithFrame:(struct CGRect)arg0;
- (void)setHighlighted:(char)arg0;
- (void)setSelected:(char)arg0;
- (void)_touchUpInside;
- (void)_updateForStateChange;

@end
