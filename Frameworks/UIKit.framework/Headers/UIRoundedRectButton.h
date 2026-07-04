/* Runtime dump - UIRoundedRectButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRoundedRectButton : UIButton
{
    UIBezierPath * _fillPath;
    UIColor * _fillColor;
    UIGroupTableViewCellBackground * _tableViewStyleBackground;
    UIView * _shadowView;
}

- (UIRoundedRectButton *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)_populateArchivedSubviews:(NSMutableArray *)arg0;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (UIView *)_backgroundView;
- (char)_canDrawContent;
- (void)setTintColor:(UIColor *)arg0;
- (void)setHighlighted:(char)arg0;
- (void)_updateState;
- (UIColor *)_contentBackgroundColor;
- (int)buttonType;
- (UIRoundedRectButton *)initWithFrame:(struct CGRect)arg0 fillColor:(struct CGSize)arg1;
- (void)_commonRoundedRectButtonInit;
- (char)_wantsTableViewStyleBackground;
- (NSObject *)_setupBackgroundView;
- (void)_invalidatePaths;
- (void)_invalidateBackingViews;

@end
