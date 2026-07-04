/* Runtime dump - UIViewControllerBuiltinTransitionViewAnimator
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    <UIViewControllerContextTransitioning> * _transitionContext;
    char _removeFromView;
    id _delegate;
    UIView * _toView;
    UIView * _fromView;
    int _transition;
}

@property (nonatomic) id delegate;
@property (nonatomic) UIView * toView;
@property (nonatomic) UIView * fromView;
@property (nonatomic) char removeFromView;
@property (nonatomic) int transition;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (double)transitionDuration:(double)arg0;
- (void)animateTransition:(NSObject *)arg0;
- (double)durationForTransition:(int)arg0;
- (void)transitionViewDidStart:(id)arg0;
- (char)transitionViewShouldUseViewControllerCallbacks;
- (void)transitionViewDidComplete:(id)arg0 fromView:(UIView *)arg1 toView:(UIView *)arg2 removeFromView:(char)arg3;
- (struct CGPoint)transitionView:(UITransitionView *)arg0 endOriginForToView:(struct CGPoint)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint)arg3;
- (struct CGPoint)transitionView:(UITransitionView *)arg0 beginOriginForToView:(struct CGPoint)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint)arg3;
- (struct CGPoint)transitionView:(UITransitionView *)arg0 endOriginForFromView:(NSObject *)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint)arg3;
- (void)transitionView:(UITransitionView *)arg0 startCustomTransitionWithDuration:(double)arg1;
- (UIView *)fromView;
- (UIView *)toView;
- (void)setTransition:(int)arg0;
- (int)transition;
- (UIViewControllerBuiltinTransitionViewAnimator *)initWithTransition:(int)arg0;
- (void)setToView:(UIView *)arg0;
- (void)setFromView:(UIView *)arg0;
- (void)setRemoveFromView:(char)arg0;
- (void)_prepareKeyboardForTransition:(int)arg0 fromView:(UIView *)arg1;
- (struct CGPoint)_adjustOrigin:(struct CGPoint)arg0 givenOtherOrigin:(struct CGPoint)arg1 forTransition:(int)arg2;
- (char)removeFromView;

@end
