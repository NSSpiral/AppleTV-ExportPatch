/* Runtime dump - UIInputSwitcherSelectionExtraView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSwitcherSelectionExtraView : UIView
{
    float m_pointerOffset;
    int _roundedCorners;
    UIKeyboardMenuView * _menu;
    struct CGRect _keyRect;
}

@property (nonatomic) float pointerOffset;
@property (nonatomic) struct CGRect keyRect;
@property (nonatomic) int roundedCorners;
@property (nonatomic) UIKeyboardMenuView * menu;

- (UIInputSwitcherSelectionExtraView *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (UIKeyboardMenuView *)menu;
- (void)setMenu:(UIKeyboardMenuView *)arg0;
- (struct CGRect)keyRect;
- (float)pointerOffset;
- (void)setPointerOffset:(float)arg0;
- (void)setKeyRect:(struct CGRect)arg0;
- (int)roundedCorners;
- (void)setRoundedCorners:(int)arg0;

@end
