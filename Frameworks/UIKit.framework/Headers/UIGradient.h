/* Runtime dump - UIGradient
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGradient : NSObject
{
    struct ? * _values;
    float _height;
    struct CGShading * _shader;
}

- (void)dealloc;
- (void)fillRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (UIGradient *)initVerticalWithValues:(struct ? *)arg0;
- (void)fillRect:(struct CGRect)arg0;

@end
