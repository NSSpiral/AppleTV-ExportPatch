/* Runtime dump - UIInputSwitcherShadowView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSwitcherShadowView : UIView
{
    int m_mode;
    float m_pointerOffset;
    NSArray * m_gradientColors;
    UIKeyboardMenuView * _menu;
    _UIBackdropView * _blurView;
    struct CGRect _keyRect;
}

@property (nonatomic) struct CGRect keyRect;
@property (nonatomic) UIKeyboardMenuView * menu;
@property (nonatomic) int mode;
@property (nonatomic) float pointerOffset;
@property (retain, nonatomic) NSArray * gradientColors;
@property (retain, nonatomic) _UIBackdropView * blurView;

- (UIInputSwitcherShadowView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setMode:(int)arg0;
- (int)mode;
- (void)setGradientColors:(NSArray *)arg0;
- (_UIBackdropView *)blurView;
- (void)setBlurView:(_UIBackdropView *)arg0;
- (UIKeyboardMenuView *)menu;
- (void)setMenu:(UIKeyboardMenuView *)arg0;
- (struct CGRect)keyRect;
- (NSArray *)gradientColors;
- (float)pointerOffset;
- (void)setPointerOffset:(float)arg0;
- (void)setKeyRect:(struct CGRect)arg0;

@end
