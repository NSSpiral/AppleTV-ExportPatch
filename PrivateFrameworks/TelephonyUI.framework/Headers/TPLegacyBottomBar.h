/* Runtime dump - TPLegacyBottomBar
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyBottomBar : UIView
{
    int _orientation;
    int _style;
    char _suppressDrawingBackground;
    UIImageView * _shadowView;
}

@property (nonatomic) char suppressDrawingBackground;
@property (readonly) UIImageView * shadowView;

+ (float)defaultHeight;
+ (float)defaultHeightForStyle:(int)arg0;
+ (UIImage *)_backgroundImage;
+ (float)defaultHeightForOrientation:(int)arg0;
+ (float)defaultHeightForStyle:(int)arg0 orientation:(int)arg1;
+ (int)fullscreenStyle;
+ (int)overlayStyle;
+ (UIImage *)upsideDownShadowImage;

- (TPLegacyBottomBar *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (TPLegacyBottomBar *)init;
- (void)layoutSubviews;
- (int)orientation;
- (TPLegacyBottomBar *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (UIImageView *)shadowView;
- (TPLegacyBottomBar *)initWithDefaultSize;
- (void)setOrientation:(int)arg0;
- (TPLegacyBottomBar *)initWithDefaultSizeForOrientation:(int)arg0;
- (void)setOrientation:(int)arg0 updateFrame:(char)arg1;
- (void)setSuppressDrawingBackground:(char)arg0;
- (void)setWellAlpha:(float)arg0;
- (char)suppressDrawingBackground;

@end
