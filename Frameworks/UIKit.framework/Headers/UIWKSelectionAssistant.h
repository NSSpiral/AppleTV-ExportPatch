/* Runtime dump - UIWKSelectionAssistant
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWKSelectionAssistant : UIWebSelectionAssistant
{
    _UITextServiceSession * _definitionSession;
    _UITextServiceSession * _learnSession;
}

@property (readonly, nonatomic) UILongPressGestureRecognizer * selectionLongPressRecognizer;

- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (char)gestureRecognizer:(ADTapGestureRecognizer *)arg0 shouldReceiveTouch:(UITouch *)arg1;
- (void)selectionChanged;
- (UIWKSelectionAssistant *)initWithView:(WKContentView *)arg0;
- (struct CGRect)selectionFrame;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg0 withGesture:(int)arg1 withState:(int)arg2 withFlags:(int)arg3;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg0 withSelectionTouch:(int)arg1 withFlags:(int)arg2;
- (void)blockSelectionChangedWithTouch:(int)arg0 withFlags:(int)arg1 growThreshold:(float)arg2 shrinkThreshold:(float)arg3;
- (UILongPressGestureRecognizer *)selectionLongPressRecognizer;
- (char)shouldHandleSingleTapAtPoint:(struct CGPoint)arg0;
- (void)showDictionaryFor:(id)arg0 fromRect:(struct CGRect)arg1;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg0 withGesture:(int)arg1 withState:(int)arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg0 withSelectionTouch:(int)arg1;
- (void)showTextServiceFor:(id)arg0 fromRect:(struct CGRect)arg1;

@end
