/* Runtime dump - UITextMagnifierRanged
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextMagnifierRanged : UITextMagnifier
{
    float _touchOffsetFromMagnificationPoint;
    float _magnifierOffsetFromTouch;
    char _isHorizontal;
    char _isAnimating;
    int _delayedAnimationType;
}

@property (nonatomic) char isHorizontal;

+ (UITextMagnifierRanged *)sharedRangedMagnifier;

- (void)dealloc;
- (void)stopMagnifying:(char)arg0;
- (void)beginMagnifyingTarget:(NSObject *)arg0 text:(NSString *)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(char)arg4;
- (void)setMagnificationPoint:(struct CGPoint)arg0;
- (void)setIsHorizontal:(char)arg0;
- (char)terminalPointPlacedCarefully;
- (int)horizontalMovement;
- (void)setAutoscrollDirections:(int)arg0;
- (UITextMagnifierRanged *)initWithFrame;
- (void)zoomUpAnimationDidStop:(id)arg0 finished:(id /* block */)arg1;
- (void)zoomDownAnimationDidStop:(id)arg0 finished:(id /* block */)arg1;
- (void)remove;
- (void)zoomUpAnimation;
- (void)zoomDownAnimation;
- (char)isHorizontal;
- (struct CGRect)caretRectClosestToPoint:(NSObject *)arg0;
- (float)offsetFromMagnificationPoint;
- (struct CGPoint)snappedPoint:(struct CGPoint)arg0;
- (void)updateFrame;
- (struct CGPoint)clipPoint:(struct CGPoint)arg0 inRect:(struct CGRect)arg1;
- (int)horizontalMovementAtTime:(double)arg0;
- (char)wasPlacedCarefullyAtTime:(double)arg0;

@end
