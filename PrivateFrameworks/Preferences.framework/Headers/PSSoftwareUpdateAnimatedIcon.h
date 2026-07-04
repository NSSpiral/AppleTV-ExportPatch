/* Runtime dump - PSSoftwareUpdateAnimatedIcon
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateAnimatedIcon : UIView
{
    UIImageView * _innerGearView;
    UIImageView * _outerGearShadowView;
    UIImageView * _outerGearView;
    char _animating;
}

@property (readonly, nonatomic) UIImageView * innerGearView;
@property (readonly, nonatomic) UIImageView * outerGearShadowView;
@property (readonly, nonatomic) UIImageView * outerGearView;

- (PSSoftwareUpdateAnimatedIcon *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setAnimating:(char)arg0;
- (UIImageView *)innerGearView;
- (UIImageView *)outerGearShadowView;
- (UIImageView *)outerGearView;

@end
