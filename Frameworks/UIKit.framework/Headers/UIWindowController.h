/* Runtime dump - UIWindowController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWindowController : NSObject
{
    UITransitionView * _transitionView;
    UIWindow * _window;
    int _currentTransition;
    id _target;
    SEL _didEndSelector;
    UIViewController * _fromViewController;
    UIViewController * _toViewController;
    struct CGPoint _beginOriginForToView;
    struct CGPoint _endOriginForToView;
    char _presenting;
    int _toModalStyle;
    char _needsDidAppear;
    char _needsDidDisappear;
    char __interactiveTransition;
    <UIViewControllerAnimatedTransitioning> * _transitionController;
    <UIViewControllerInteractiveTransitioning> * _interactionController;
}

@property (nonatomic) UIWindow * window;
@property (readonly, nonatomic) UITransitionView * transitionView;
@property (nonatomic) char presenting;
@property (retain, nonatomic) <UIViewControllerAnimatedTransitioning> * _transitionController;
@property (retain, nonatomic) <UIViewControllerInteractiveTransitioning> * _interactionController;
@property (nonatomic) char _interactiveTransition;

+ (void)windowWillBeDeallocated:(id)arg0;
+ (UIWindowController *)windowControllerForWindow:(NSObject *)arg0;

- (void)dealloc;
- (UIWindow *)window;
- (<UIViewControllerInteractiveTransitioning> *)_interactionController;
- (void)setWindow:(UIWindow *)arg0;
- (double)durationForTransition:(int)arg0;
- (void)transitionViewDidStart:(id)arg0;
- (char)transitionViewShouldUseViewControllerCallbacks;
- (void)transitionViewDidComplete:(id)arg0 fromView:(UIView *)arg1 toView:(UIView *)arg2 removeFromView:(char)arg3;
- (struct CGPoint)transitionView:(UITransitionView *)arg0 endOriginForToView:(struct CGPoint)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint)arg3;
- (struct CGPoint)transitionView:(UITransitionView *)arg0 beginOriginForToView:(struct CGPoint)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint)arg3;
- (struct CGPoint)transitionView:(UITransitionView *)arg0 endOriginForFromView:(NSObject *)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint)arg3;
- (void)transitionView:(UITransitionView *)arg0 startCustomTransitionWithDuration:(double)arg1;
- (char)presenting;
- (void)_transplantView:(NSObject *)arg0 toSuperview:(id)arg1 atIndex:(unsigned int)arg2;
- (struct CGSize)_flipSize:(struct CGSize)arg0;
- (<UIViewControllerAnimatedTransitioning> *)_transitionController;
- (void)setPresenting:(char)arg0;
- (void)_setTransitionController:(BRController *)arg0;
- (void)_setInteractionController:(BRController *)arg0;
- (void)transition:(int)arg0 fromViewController:(UIViewController *)arg1 toViewController:(UIViewController *)arg2 target:(NSObject *)arg3 didEndSelector:(SEL)arg4 animation:(CAAnimation *)arg5;
- (UITransitionView *)transitionView;
- (struct CGPoint)_originForViewController:(BRController *)arg0 orientation:(int)arg1 actualStatusBarHeight:(float)arg2 fullScreenLayout:(char)arg3 inWindow:(NSObject *)arg4;
- (struct CGRect)_boundsForViewController:(BRController *)arg0 transition:(SEL)arg1 orientation:(CMDeviceOrientation *)arg2 fullScreenLayout:(int)arg3 inWindow:(int)arg4;
- (void)_setInteractiveTransition:(char)arg0;
- (void)transitionViewDidCancel:(id)arg0 fromView:(UIView *)arg1 toView:(UIView *)arg2;
- (void)_prepareKeyboardForTransition:(int)arg0 fromView:(UIView *)arg1;
- (char)_isInteractiveTransition;
- (struct CGPoint)_adjustOrigin:(struct CGPoint)arg0 givenOtherOrigin:(struct CGPoint)arg1 forTransition:(int)arg2;
- (void)transition:(int)arg0 fromViewController:(UIViewController *)arg1 toViewController:(UIViewController *)arg2 target:(NSObject *)arg3 didEndSelector:(SEL)arg4;

@end
