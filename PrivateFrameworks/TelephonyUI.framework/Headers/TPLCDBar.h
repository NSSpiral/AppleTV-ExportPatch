/* Runtime dump - TPLCDBar
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLCDBar : UIView
{
    UIImageView * _shadowView;
}

@property (readonly) UIImageView * shadowView;

+ (float)defaultHeight;
+ (UIImage *)backgroundImage;
+ (float)defaultHeightForOrientation:(int)arg0;

- (TPLCDBar *)initWithFrame:(struct CGRect)arg0;
- (UIImageView *)shadowView;
- (TPLCDBar *)initWithDefaultSize;
- (void)setOrientation:(int)arg0;
- (TPLCDBar *)initWithDefaultSizeForOrientation:(int)arg0;
- (void)setOrientation:(int)arg0 updateFrame:(char)arg1;

@end
