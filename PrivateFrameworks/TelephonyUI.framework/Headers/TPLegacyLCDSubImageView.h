/* Runtime dump - TPLegacyLCDSubImageView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyLCDSubImageView : UIView
{
    UIImage * _image;
}

@property (retain, nonatomic) UIImage * image;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)image;
- (TPLegacyLCDSubImageView *)initWithDefaultSize;

@end
