/* Runtime dump - UIKeyboardKeyplaneTransition
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardKeyplaneTransition : NSObject
{
    float _currentProgress;
    float _liftOffProgress;
    float _finishProgress;
    float _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink * _displayLink;
    UIKBTree * _start;
    UIKBTree * _end;
    UIView * _startView;
    UIView * _endView;
    id _completionBlock;
    <UIKeyboardKeyplaneTransitionDelegate> * _transitionDelegate;
    char _initiallyAtEnd;
}

@property (copy) id completionBlock;
@property (nonatomic) <UIKeyboardKeyplaneTransitionDelegate> * transitionDelegate;
@property (nonatomic) char initiallyAtEnd;
@property (readonly, nonatomic) float startHeight;
@property (readonly, nonatomic) float endHeight;

- (void)dealloc;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)removeAllAnimations;
- (<UIKeyboardKeyplaneTransitionDelegate> *)transitionDelegate;
- (float)startHeight;
- (float)endHeight;
- (void)finalizeTransition;
- (void)updateWithProgress:(float)arg0;
- (void)transitionToFinalState:(NSObject *)arg0;
- (void)rebuildWithStartKeyplane:(UIKBTree *)arg0 startView:(UIView *)arg1 endKeyplane:(id)arg2 endView:(UIView *)arg3;
- (void)commitTransitionRebuild;
- (void)finishWithProgress:(float)arg0 completionBlock:(id /* block */)arg1;
- (char)canDisplayTransitionFromKeyplane:(id)arg0 toKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (void)setTransitionDelegate:(<UIKeyboardKeyplaneTransitionDelegate> *)arg0;
- (char)initiallyAtEnd;
- (void)setInitiallyAtEnd:(char)arg0;

@end
