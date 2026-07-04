/* Runtime dump - UIPercentDrivenInteractiveTransition
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning>
{
    float _duration;
    char _didCommitAnimations;
    char __transitionInterrupted;
    float _completionSpeed;
    int _completionCurve;
    NSString * __originalFillMode;
    NSUUID * __uuid;
}

@property (readonly) float duration;
@property (readonly) float percentComplete;
@property (nonatomic) float completionSpeed;
@property (nonatomic) int completionCurve;
@property (retain, nonatomic) NSString * _originalFillMode;
@property (retain, nonatomic) NSUUID * _uuid;
@property (nonatomic) char _transitionInterrupted;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (UIPercentDrivenInteractiveTransition *)init;
- (void)_resetInteractionController;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)_stopInteractiveTransition;
- (float)percentComplete;
- (void)startInteractiveTransition:(NSObject *)arg0;
- (void)updateInteractiveTransition:(float)arg0;
- (float)duration;
- (void)setCompletionSpeed:(float)arg0;
- (void)_setDuration:(float)arg0;
- (NSUUID *)_uuid;
- (int)completionCurve;
- (void)setCompletionCurve:(int)arg0;
- (float)completionSpeed;
- (void)_setOriginalFillMode:(id)arg0;
- (void)_setUuid:(id)arg0;
- (char)_isTransitionInterrupted;
- (void)_setTransitionInterrupted:(char)arg0;
- (void)_stopInteractiveTransition:(NSObject *)arg0;
- (void)_updateInteractiveTransition:(NSObject *)arg0 percent:(float)arg1 isFinished:(char)arg2 didComplete:(char)arg3;
- (void)startInteractiveTransition:(NSObject *)arg0 containerViews:(struct __CFDictionary *)arg1 animation:(CAAnimation *)arg2;
- (NSString *)_originalFillMode;

@end
