/* Runtime dump - PLCropOverlayWallpaperBottomBar
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCropOverlayWallpaperBottomBar : UIView
{
    char _motionToggleHidden;
    char _shouldOnlyShowLockScreenButton;
    char _shouldOnlyShowHomeScreenButton;
    PLWallpaperButton * _doCancelButton;
    PLWallpaperButton * _doSetButton;
    PLWallpaperButton * _doSetHomeScreenButton;
    PLWallpaperButton * _doSetLockScreenButton;
    PLWallpaperButton * _doSetBothScreenButton;
    PLWallpaperButton * _motionToggle;
    _UILegibilityLabel * _titleLabel;
    UIView * _separatorLine;
    _UIBackdropView * _backdropView;
    float _maxToggleWidth;
}

@property (readonly, nonatomic) PLWallpaperButton * doCancelButton;
@property (readonly, nonatomic) PLWallpaperButton * doSetButton;
@property (readonly, nonatomic) PLWallpaperButton * doSetHomeScreenButton;
@property (readonly, nonatomic) PLWallpaperButton * doSetLockScreenButton;
@property (readonly, nonatomic) PLWallpaperButton * doSetBothScreenButton;
@property (readonly, nonatomic) PLWallpaperButton * motionToggle;
@property (nonatomic) char motionToggleHidden;
@property (nonatomic) char shouldOnlyShowLockScreenButton;
@property (nonatomic) char shouldOnlyShowHomeScreenButton;
@property (retain, nonatomic) _UILegibilityLabel * titleLabel;
@property (retain, nonatomic) UIView * separatorLine;
@property (retain, nonatomic) _UIBackdropView * backdropView;
@property (nonatomic) float maxToggleWidth;

- (PLCropOverlayWallpaperBottomBar *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (PLCropOverlayWallpaperBottomBar *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setText:(NSString *)arg0;
- (_UILegibilityLabel *)titleLabel;
- (void)setTitleLabel:(_UILegibilityLabel *)arg0;
- (void)setBackdropView:(_UIBackdropView *)arg0;
- (_UIBackdropView *)backdropView;
- (void)updateForChangedSettings:(NSDictionary *)arg0;
- (PLWallpaperButton *)doCancelButton;
- (PLWallpaperButton *)doSetHomeScreenButton;
- (PLWallpaperButton *)doSetLockScreenButton;
- (PLWallpaperButton *)doSetBothScreenButton;
- (PLWallpaperButton *)motionToggle;
- (PLWallpaperButton *)doSetButton;
- (void)setShouldOnlyShowHomeScreenButton:(char)arg0;
- (void)setShouldOnlyShowLockScreenButton:(char)arg0;
- (void)setMotionToggleHidden:(char)arg0;
- (char)motionToggleHidden;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
- (float)widthForToggleText;
- (void)setMaxToggleWidth:(float)arg0;
- (void)_commonPLCropOverlayWallpaperBottomBarInitialization;
- (void)_layoutSubviewsPad;
- (void)_layoutSubviewsPhone;
- (UIView *)separatorLine;
- (struct CGSize)_sizeForString:(NSString *)arg0;
- (char)shouldOnlyShowLockScreenButton;
- (char)shouldOnlyShowHomeScreenButton;
- (void)setSeparatorLine:(UIView *)arg0;
- (float)maxToggleWidth;

@end
