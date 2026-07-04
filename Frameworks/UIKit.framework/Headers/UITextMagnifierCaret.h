/* Runtime dump - UITextMagnifierCaret
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextMagnifierCaret : UITextMagnifier
{
    struct CGPoint _offset;
    float _yOffset;
}

@property (nonatomic) struct CGPoint offset;
@property (nonatomic) float yOffset;

+ (UITextMagnifierCaret *)sharedCaretMagnifier;

- (void)dealloc;
- (void)setOffset:(struct CGPoint)arg0;
- (struct CGPoint)offset;
- (void)stopMagnifying:(char)arg0;
- (void)beginMagnifyingTarget:(NSObject *)arg0 text:(NSString *)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(char)arg4;
- (void)setMagnificationPoint:(struct CGPoint)arg0;
- (char)terminalPointPlacedCarefully;
- (void)setAnimationPoint:(struct CGPoint)arg0;
- (void)setAutoscrollDirections:(int)arg0;
- (float)yOffset;
- (UITextMagnifierCaret *)initWithFrame;
- (void)updateFrameAndOffset;
- (void)zoomUpAnimationDidStop:(id)arg0 finished:(id /* block */)arg1;
- (void)zoomDownAnimationDidStop:(id)arg0 finished:(id /* block */)arg1;
- (void)remove;
- (void)zoomUpAnimation;
- (struct CGPoint)animationPoint;
- (void)zoomDownAnimation;
- (void)setYOffset:(float)arg0;

@end
