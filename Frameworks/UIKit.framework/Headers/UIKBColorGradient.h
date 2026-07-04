/* Runtime dump - UIKBColorGradient
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBColorGradient : UIKBGradient
{
    UIColor * _color;
}

+ (UIColor *)gradientWithUIColor:(UIColor *)arg0;

- (void)dealloc;
- (UIKBColorGradient *)initWithUIColor:(UIColor *)arg0;
- (struct CGGradient *)CGGradient;

@end
