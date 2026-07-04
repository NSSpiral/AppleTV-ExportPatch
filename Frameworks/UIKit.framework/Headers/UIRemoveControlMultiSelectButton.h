/* Runtime dump - UIRemoveControlMultiSelectButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton
{
    id _isHighlighted;
    id _isSelected;
}

+ (UIImage *)minusImage;
+ (float)defaultWidth;
+ (UIImage *)plusImage;
+ (UIImage *)minusCenterImage;

- (void)drawRect:(struct CGRect)arg0;
- (char)isRotating;
- (void)setHighlighted:(char)arg0;
- (char)isHighlighted;
- (void)setSelected:(char)arg0;
- (UIRemoveControlMultiSelectButton *)initWithRemoveControl:(NSIndexSet *)arg0;
- (void)setHiding:(char)arg0;
- (char)isHiding;
- (void)toggleRotate:(char)arg0;
- (char)isRotated;
- (void)setSelected:(char)arg0 highlighted:(char)arg1;

@end
