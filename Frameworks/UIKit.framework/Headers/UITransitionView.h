/* Runtime dump - UITransitionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITransitionView : UIView <NSCoding>
{
    UIView * _fromView;
    UIView * _toView;
    NSMutableArray * _frozenSubviews;
    UIResponder * _firstResponderToRemember;
    id _delegate;
    UIWindow * _originalWindow;
    struct ? _transitionViewFlags;
    float _curlUpRevealedHeight;
    char _ignoreDirectTouchEvents;
    int _animationTimingCurve;
}

@property (nonatomic) char shouldNotifyDidCompleteImmediately;
@property (nonatomic) int animationTimingCurve;
@property (nonatomic) char ignoreDirectTouchEvents;

+ (double)defaultDurationForTransition:(int)arg0;

- (UITransitionView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UITransitionView *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (NSObject *)delegate;
- (void)setIgnoresInteractionEvents:(char)arg0;
- (char)ignoresInteractionEvents;
- (void)setAnimationTimingCurve:(int)arg0;
- (double)durationForTransition:(int)arg0;
- (char)shouldNotifyDidCompleteImmediately;
- (void)notifyDidCompleteTransition:(NSObject *)arg0;
- (char)transition:(int)arg0 fromView:(UIView *)arg1 toView:(UIView *)arg2;
- (char)transition:(int)arg0 fromView:(UIView *)arg1 toView:(UIView *)arg2 removeFromView:(char)arg3;
- (void)_didStartTransition;
- (char)rasterizesOnTransition;
- (void)_startTransition:(int)arg0 withDuration:(double)arg1;
- (void)_didCompleteTransition:(char)arg0;
- (char)isTransitioning;
- (void)_transitionDidStop:(id)arg0 finished:(id /* block */)arg1;
- (void)setShouldNotifyDidCompleteImmediately:(char)arg0;
- (char)transition:(int)arg0 toView:(UIView *)arg1;
- (UIView *)fromView;
- (UIView *)toView;
- (char)_isTransitioningFromFromView:(NSObject *)arg0;
- (void)setRasterizesOnTransition:(char)arg0;
- (int)animationTimingCurve;
- (char)ignoreDirectTouchEvents;
- (void)setIgnoreDirectTouchEvents:(char)arg0;
- (float)_curlUpRevealedHeight;

@end
