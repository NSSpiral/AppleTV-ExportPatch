/* Runtime dump - WKInspectorNodeSearchGestureRecognizer
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer
{
    struct RetainPtr<UITouch> _touch;
}

- (struct CGPoint)locationInView:(struct CGPoint)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)reset;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)_processTouches:(NSArray *)arg0 state:(int)arg1;

@end
