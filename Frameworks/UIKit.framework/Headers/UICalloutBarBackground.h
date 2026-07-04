/* Runtime dump - UICalloutBarBackground
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICalloutBarBackground : _UIBackdropView
{
    id m_dividerOffsets;
    UIImageView * _blurMaskView;
    UIImageView * _tintMaskView;
    _UIBackdropView * _separatorView;
    struct CGRect _highlightRect;
}

@property (retain, nonatomic) UIImageView * blurMaskView;
@property (retain, nonatomic) UIImageView * tintMaskView;
@property (retain, nonatomic) _UIBackdropView * separatorView;
@property (nonatomic) struct CGRect highlightRect;

- (void)dealloc;
- (UICalloutBarBackground *)init;
- (void)layoutSubviews;
- (_UIBackdropView *)separatorView;
- (void)setSeparatorView:(_UIBackdropView *)arg0;
- (struct CGRect)highlightRect;
- (void)setHighlightRect:(struct CGRect)arg0;
- (void)setDividerOffsets:(float *)arg0;
- (void)setHighlighted:(char)arg0 forFrame:(struct CGRect)arg1;
- (void)setBlurDisabled:(char)arg0;
- (UIImageView *)blurMaskView;
- (void)setBlurMaskView:(UIImageView *)arg0;
- (UIImageView *)tintMaskView;
- (void)setTintMaskView:(UIImageView *)arg0;

@end
