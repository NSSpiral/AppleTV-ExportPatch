/* Runtime dump - WAKResponder
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WAKResponder : NSObject

- (WAKView *)nextResponder;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (void)handleEvent:(NSObject *)arg0;
- (void)insertText:(NSString *)arg0;
- (void)scrollWheel:(id)arg0;
- (void)mouseDown:(struct ?)arg0;
- (void)mouseUp:(struct ?)arg0;
- (void)deleteBackward:(id)arg0;
- (void)moveRight:(id)arg0;
- (void)moveLeft:(id)arg0;
- (void)moveUp:(id)arg0;
- (void)moveDown:(id)arg0;
- (char)acceptsFirstResponder;
- (void)_forwardEvent:(NSObject *)arg0;
- (void)mouseEntered:(id)arg0;
- (void)mouseExited:(id)arg0;
- (void)mouseMoved:(struct ?)arg0;
- (void)keyDown:(char)arg0;
- (void)keyUp:(id)arg0;
- (void)touch:(UITouch *)arg0;
- (void)deleteForward:(id)arg0;
- (void)insertParagraphSeparator:(id)arg0;
- (void)moveDownAndModifySelection:(id)arg0;
- (void)moveLeftAndModifySelection:(id)arg0;
- (void)moveRightAndModifySelection:(id)arg0;
- (void)moveUpAndModifySelection:(id)arg0;
- (char)tryToPerform:(SEL)arg0 with:(id)arg1;

@end
