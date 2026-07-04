/* Runtime dump - PLWallpaperButton
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLWallpaperButton : UIButton <_UIBackdropViewObserver>
{
    UIImageView * _titleMaskImageView;
    _UIBackdropView * _backdropView;
}

@property (retain, nonatomic) UIImageView * titleMaskImageView;
@property (retain, nonatomic) _UIBackdropView * backdropView;

- (PLWallpaperButton *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setEnabled:(char)arg0;
- (void)setHighlighted:(char)arg0;
- (PLWallpaperButton *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (void)setSelected:(char)arg0;
- (void)setBackdropView:(_UIBackdropView *)arg0;
- (_UIBackdropView *)backdropView;
- (void)backdropViewDidChange:(_UIBackdropView *)arg0;
- (void)_setupBackdropView;
- (UIImageView *)titleMaskImageView;
- (void)setTitleMaskImageView:(UIImageView *)arg0;

@end
