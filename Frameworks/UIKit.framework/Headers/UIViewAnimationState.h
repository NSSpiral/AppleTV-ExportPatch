/* Runtime dump - UIViewAnimationState
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewAnimationState : NSObject
{
    UIViewAnimationState * _nextState;
    NSString * _animationID;
    void * _context;
    id _delegate;
    double _duration;
    double _delay;
    double _frameInterval;
    double _start;
    int _curve;
    float _repeatCount;
    int _transition;
    UIView * _transitionView;
    int _filter;
    UIView * _filterView;
    float _filterValue;
    SEL _willStartSelector;
    SEL _didEndSelector;
    int _didEndCount;
    struct CGPoint _position;
    id _willStartSent;
    id _useCurrentLayerState;
    id _cacheTransition;
    id _autoreverses;
    id _roundsToInteger;
    id _preventsAdditive;
    id _layoutSubviews;
    NSMutableArray * _trackedAnimations;
    NSUUID * _uuid;
    <_UIBasicAnimationFactory> * _animationFactory;
    CAMediaTimingFunction * _customCurve;
    char _animationFactoryMakesPerAnimationCustomCurves;
    id _alongsideAnimations;
    NSMutableArray * _addedCompletions;
    char _animationDidStopSent;
    char _allowUserInteractionToCutOffEndOfAnimation;
    char _retainedSelf;
}

@property (readonly, nonatomic) char _allowsUserInteraction;

+ (void)pushViewAnimationState:(NSObject *)arg0 context:(void *)arg1;
+ (void)popAnimationState;

- (void)dealloc;
- (UIViewAnimationState *)init;
- (void)_acceptEarlyAnimationCutoff:(id)arg0;
- (void)_runAlongsideAnimations;
- (void)_trackAnimation:(NSObject *)arg0 withAnimationKey:(NSString *)arg1 forKeyPath:(NSString *)arg2 inLayer:(CALayer *)arg3;
- (void)_setAlongsideAnimations:(id)arg0;
- (void)_addAnimationStateForTracking:(id)arg0;
- (void)pop;
- (void)sendDelegateAnimationDidStop:(id)arg0 finished:(char)arg1;
- (char)_shouldAnimateAdditivelyForKey:(NSString *)arg0 onLayer:(CALayer *)arg1;
- (char)_shouldStartFromCurrentStateForLayer:(id)arg0 key:(NSString *)arg1;
- (NSString *)_defaultAnimationForKey:(NSString *)arg0;
- (void)configureAnimation:(NSObject *)arg0 forLayer:(CALayer *)arg1 forKey:(NSString *)arg2;
- (void)setAnimationAttributes:(NSDictionary *)arg0 correctZeroDuration:(char)arg1 skipDelegateAssignment:(char)arg2 customCurve:(CAMediaTimingFunction *)arg3;
- (CALayer *)animationForLayer:(id)arg0 forKey:(NSString *)arg1 forView:(NSObject *)arg2;
- (void)setupCustomTimingCurve;
- (void)setAnimationAttributes:(NSDictionary *)arg0 correctZeroDuration:(char)arg1 skipDelegateAssignment:(char)arg2;
- (void)setAnimationAttributes:(NSDictionary *)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)_removeAnimationStateFromTrackingMap:(char)arg0 disableTrackingIfNeeded:(char)arg1;
- (char)_allowsUserInteraction;
- (char)_allowsUserInteractionToCutOffEndOfAnimation;
- (NSMutableArray *)_trackedAnimations;
- (CALayer *)actionForLayer:(CALayer *)arg0 forKey:(NSString *)arg1 forView:(NSObject *)arg2;
- (void)setupWithDuration:(double)arg0 delay:(double)arg1 view:(NSObject *)arg2 options:(unsigned int)arg3 factory:(NSObject *)arg4 parentState:(NSObject *)arg5 start:(double)arg6 completion:(/* block */ id)arg7;
- (void)animationDidStart:(CAAnimation *)arg0;
- (void)_removeAnimationStateFromTrackingMap:(char)arg0;

@end
