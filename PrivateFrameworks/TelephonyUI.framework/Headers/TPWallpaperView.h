/* Runtime dump - TPWallpaperView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPWallpaperView : UIView
{
    char _blursBackground;
    char _hidesContactImage;
    char _shouldLockContactImage;
    char _shouldBindBlurringWithPresenceOfContactImage;
    UIImage * _contactImage;
    float _blurProportion;
    UIImageView * _contactImageView;
    _UIBackdropView * _backdropEffectView;
}

@property (retain, nonatomic) UIImage * contactImage;
@property (nonatomic) char blursBackground;
@property (nonatomic) float blurProportion;
@property (nonatomic) char hidesContactImage;
@property char shouldLockContactImage;
@property (nonatomic) char shouldBindBlurringWithPresenceOfContactImage;
@property (retain) UIImageView * contactImageView;
@property (retain) _UIBackdropView * backdropEffectView;

- (UIImageView *)contactImageView;
- (void)setContactImageView:(UIImageView *)arg0;
- (TPWallpaperView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (_UIBackdropView *)backdropEffectView;
- (void)setBackdropEffectView:(_UIBackdropView *)arg0;
- (char)blursBackground;
- (void)setBlursBackground:(char)arg0;
- (char)shouldLockContactImage;
- (void)updateBindBlurringWithPresenceOfContactImage;
- (UIImage *)contactImage;
- (void)setContactImage:(UIImage *)arg0 animated:(char)arg1;
- (char)hidesContactImage;
- (void)setContactImage:(UIImage *)arg0;
- (void)setHidesContactImage:(char)arg0;
- (void)setBlurProportion:(float)arg0;
- (void)setShouldBindBlurringWithPresenceOfContactImage:(char)arg0;
- (float)blurProportion;
- (void)setShouldLockContactImage:(char)arg0;
- (char)shouldBindBlurringWithPresenceOfContactImage;

@end
