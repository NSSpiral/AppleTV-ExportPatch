/* Runtime dump - UITextMagnifierRenderer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextMagnifierRenderer : UIView
{
    int m_autoscrollDirections;
    int m_magnifierMethod;
}

@property (nonatomic) int autoscrollDirections;
@property (nonatomic) int magnifierMethod;

- (UITextMagnifierRenderer *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (void)setAutoscrollDirections:(int)arg0;
- (void)drawMagnifier:(struct CGRect)arg0;
- (int)autoscrollDirections;
- (void)drawAutoscroller:(struct CGRect)arg0;
- (int)magnifierMethod;
- (void)setMagnifierMethod:(int)arg0;

@end
