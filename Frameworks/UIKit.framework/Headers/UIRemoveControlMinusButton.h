/* Runtime dump - UIRemoveControlMinusButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoveControlMinusButton : UIControl
{
    id _rotated;
    id _rotating;
    id _hiding;
    id _showAsPlus;
    id _reserved;
    float _verticalOffset;
}

+ (UIImage *)minusImage;
+ (float)defaultWidth;
+ (UIImage *)plusImage;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (char)isRotating;
- (void)animator:(UIDynamicAnimator *)arg0 stopAnimation:(NSObject *)arg1;
- (void)_toggleRotateAnimationDidStop:(id)arg0 finished:(char)arg1;
- (UIRemoveControlMinusButton *)initWithRemoveControl:(NSIndexSet *)arg0;
- (void)setHiding:(char)arg0;
- (char)isHiding;
- (void)toggleRotate:(char)arg0;
- (char)isRotated;

@end
