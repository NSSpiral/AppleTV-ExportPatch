/* Runtime dump - QLPreviewTransitionAnimator
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    char showing;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property <UIViewControllerContextTransitioning> * transitionContext;
@property char showing;
@property (readonly) QLPreviewController * previewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (int)_transitionStateForAnimationEnding:(char)arg0;
- (void)willTransitionWithAnimationEnding:(char)arg0;
- (void)didTransitionWithAnimationEnding:(char)arg0;
- (void)updateStatusBarWithDuration:(double)arg0;
- (char)showing;
- (void)setTransitionContext:(<UIViewControllerContextTransitioning> *)arg0;
- (double)transitionDuration:(double)arg0;
- (void)animateTransition:(NSObject *)arg0;
- (<UIViewControllerContextTransitioning> *)transitionContext;
- (void)startInteractiveTransition:(NSObject *)arg0;
- (void)setShowing:(char)arg0;
- (QLPreviewController *)previewController;

@end
