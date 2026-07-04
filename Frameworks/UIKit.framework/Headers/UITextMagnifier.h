/* Runtime dump - UITextMagnifier
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextMagnifier : UIView
{
    UIView * _target;
    struct CGPoint _magnificationPoint;
    struct CGPoint _animationPoint;
    struct CGPoint _terminalPoint;
    char _terminalPointPlacedCarefully;
    UIResponder<UITextInput> * _text;
    UITextMagnifierTimeWeightedPoint * _weightedPoint;
    UIView * _magnifierRenderer;
    UIView * _autoscrollRenderer;
    int _autoscrollDirections;
}

@property (retain, nonatomic) UIView * target;
@property (retain, nonatomic) UIResponder<UITextInput> * text;
@property (nonatomic) struct CGPoint magnificationPoint;
@property (nonatomic) struct CGPoint animationPoint;
@property (readonly, nonatomic) struct CGPoint terminalPoint;
@property (readonly, nonatomic) char terminalPointPlacedCarefully;

+ (UIColor *)getLoupeBackgroundColor:(UIColor *)arg0;

- (UITextMagnifier *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)setFrame:(struct CGRect)arg0;
- (void)setTarget:(UIView *)arg0;
- (UIResponder<UITextInput> *)text;
- (void)setText:(UIResponder<UITextInput> *)arg0;
- (UIView *)target;
- (void)autoscrollWillNotStart;
- (void)postAutoscrollPoint:(struct CGPoint)arg0;
- (void)stopMagnifying:(char)arg0;
- (void)beginMagnifyingTarget:(NSObject *)arg0 text:(UIResponder<UITextInput> *)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(char)arg4;
- (void)setMagnificationPoint:(struct CGPoint)arg0;
- (struct CGPoint)terminalPoint;
- (char)terminalPointPlacedCarefully;
- (void)setAnimationPoint:(struct CGPoint)arg0;
- (void)setAutoscrollDirections:(int)arg0;
- (void)animateToMagnifierRenderer;
- (void)animateToAutoscrollRenderer;
- (void)zoomUpAnimationDidStop:(id)arg0 finished:(id /* block */)arg1;
- (void)zoomDownAnimationDidStop:(id)arg0 finished:(id /* block */)arg1;
- (void)remove;
- (struct CGPoint)magnificationPoint;
- (void)detectLostTouches:(NSArray *)arg0;
- (void)setToMagnifierRenderer;
- (void)zoomUpAnimation;
- (void)windowWillRotate:(id)arg0;
- (struct CGPoint)animationPoint;
- (void)zoomDownAnimation;

@end
