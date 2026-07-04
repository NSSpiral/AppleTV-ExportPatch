/* Runtime dump - UIShadowView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIShadowView : UIView
{
    UIImage * _image;
}

+ (UIImage *)topShadowImage;
+ (UIImage *)bottomShadowImage;

- (UIShadowView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setShadowImage:(UIImage *)arg0 forEdge:(unsigned int)arg1 inside:(char)arg2;

@end
