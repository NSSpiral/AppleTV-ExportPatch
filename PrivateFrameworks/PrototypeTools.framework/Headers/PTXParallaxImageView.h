/* Runtime dump - PTXParallaxImageView
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxImageView : PTXParallaxView
{
    UIImageView * _imageView;
}

@property (retain, nonatomic) UIImage * image;

- (void)setImage:(UIImage *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (UIImage *)image;
- (void).cxx_destruct;
- (PTXParallaxImageView *)initWithImage:(UIImage *)arg0 parallaxController:(PTXParallaxController *)arg1 settings:(NSDictionary *)arg2;

@end
