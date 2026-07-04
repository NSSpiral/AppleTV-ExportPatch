/* Runtime dump - ABClippingImageView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABClippingImageView : UIView
{
    UIImage * _clippingImage;
    UIImage * _image;
    NSArray * _labelLines;
    <ABStyleProvider> * _styleProvider;
}

@property (retain, nonatomic) <ABStyleProvider> * styleProvider;
@property (retain, nonatomic) UIImage * image;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (void)setClippingImage:(UIImage *)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setImage:(UIImage *)arg0;
- (ABClippingImageView *)initWithImage:(UIImage *)arg0;
- (UIImage *)image;
- (char)_canDrawContent;
- (void)setLabel:(NSString *)arg0;

@end
