/* Runtime dump - WKSwipeTransitionController
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate>
{
    struct ViewGestureController * _gestureController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> _backTransitionController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> _forwardTransitionController;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSObject *)gestureRecognizerForInteractiveTransition:(NSObject *)arg0 WithTarget:(NSObject *)arg1 action:(SEL)arg2;
- (void)startInteractiveTransition:(NSObject *)arg0;
- (char)interactiveTransition:(char)arg0 gestureRecognizer:(ADTapGestureRecognizer *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(ADTapGestureRecognizer *)arg2;
- (char)shouldBeginInteractiveTransition:(NSObject *)arg0;
- (char)interactiveTransition:(char)arg0 gestureRecognizer:(ADTapGestureRecognizer *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (void)invalidate;
- (void).cxx_construct;
- (void).cxx_destruct;
- (int)directionForTransition:(NSObject *)arg0;
- (WKSwipeTransitionController *)initWithViewGestureController:(struct ViewGestureController *)arg0 gestureRecognizerView:(int)arg1;

@end
