/* Runtime dump - TPLegacyLCDBar
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyLCDBar : UIImageView
{
    UIImage * _barBackground;
    UIImageView * _shadowView;
}

@property (retain, nonatomic) UIImage * barBackground;
@property (readonly) UIImageView * shadowView;

+ (float)defaultHeight;
+ (UIImage *)backgroundImage;
+ (UIImage *)shadowImage;
+ (float)defaultHeightForOrientation:(int)arg0;

- (TPLegacyLCDBar *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UIImageView *)shadowView;
- (TPLegacyLCDBar *)initWithDefaultSize;
- (void)setOrientation:(int)arg0;
- (TPLegacyLCDBar *)initWithDefaultSizeForOrientation:(int)arg0;
- (void)setOrientation:(int)arg0 updateFrame:(char)arg1;
- (void)setBarBackground:(UIImage *)arg0;
- (struct CGRect)contentStretchRect;
- (UIImage *)barBackground;

@end
