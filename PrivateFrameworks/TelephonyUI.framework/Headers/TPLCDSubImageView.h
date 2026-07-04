/* Runtime dump - TPLCDSubImageView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLCDSubImageView : UIView
{
    UIImage * _image;
}

@property (retain, nonatomic) UIImage * image;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)image;
- (TPLCDSubImageView *)initWithDefaultSize;

@end
