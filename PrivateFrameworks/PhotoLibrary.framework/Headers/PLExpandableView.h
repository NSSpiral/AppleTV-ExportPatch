/* Runtime dump - PLExpandableView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLExpandableView : UIView
{
    <PLExpandableViewDelegate> * _delegate;
    id _collapsingCompletionHandler;
    id _expansionCompletionHandler;
    struct CGRect _contractedFrame;
    struct CGRect _expandedFrame;
    struct CGPoint _leftTouchLocation;
    struct CGPoint _rightTouchLocation;
    struct CGPoint _previousLeftLocation;
    struct CGPoint _previousRightLocation;
    unsigned int _leftTouchIndex;
    unsigned int _rightTouchIndex;
    float _pinchVelocity;
    double _trackingTimeInterval;
    float _expansionFraction;
    struct ? _expandFlags;
}

@property (nonatomic) struct CGRect contractedFrame;
@property (nonatomic) struct CGRect expandedFrame;
@property (nonatomic) char allowsExpansion;

- (PLExpandableView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<PLExpandableViewDelegate> *)arg0;
- (void)didMoveToWindow;
- (<PLExpandableViewDelegate> *)delegate;
- (int)state;
- (char)isTracking;
- (void)willMoveToWindow:(NSObject *)arg0;
- (int)previousState;
- (void)_setAutorotationDisabled:(char)arg0;
- (void)_notifyWillBeginExpanding;
- (void)_notifyWillCompleteExpandingWithDuration:(double)arg0;
- (void)_notifyWillCancelExpandingWithDuration:(double)arg0;
- (void)_notifyDidCompleteExpanding;
- (void)_notifyWillBeginCollapsing;
- (void)_notifyDidCancelExpanding;
- (void)_notifyWillCancelCollapsingWithDuration:(double)arg0;
- (void)_notifyWillCompleteCollapsingWithDuration:(double)arg0;
- (void)_notifyDidCancelCollapsing;
- (void)_notifyDidCompleteCollapsing;
- (void)stateWillChangeTo:(int)arg0;
- (void)setContractedFrame:(struct CGRect)arg0;
- (void)_transitionFromContracted:(int)arg0 withDuration:(double)arg1;
- (void)_transitionFromExpanding:(int)arg0 withDuration:(double)arg1;
- (void)_transitionFromCompleteExpand:(int)arg0 withDuration:(double)arg1;
- (void)_transitionFromCancelExpand:(int)arg0 withDuration:(double)arg1;
- (void)_transitionFromExpanded:(int)arg0 withDuration:(double)arg1;
- (void)_transitionFromContracting:(int)arg0 withDuration:(double)arg1;
- (void)_transitionFromCancelContract:(int)arg0 withDuration:(double)arg1;
- (void)_transitionFromCompleteContract:(int)arg0 withDuration:(double)arg1;
- (void)stateDidChangeFrom:(int)arg0;
- (void)setExpansionFraction:(float)arg0;
- (char)_canPinch;
- (void)updatePinchState:(NSObject *)arg0;
- (void)setState:(int)arg0 withDuration:(double)arg1;
- (void)beginTrackingPinch:(id)arg0;
- (void)notifyExpansionFraction:(float)arg0 force:(char)arg1;
- (float)continueTrackingPinch:(id)arg0;
- (int)snapState:(char)arg0;
- (float)completeTrackingPinch:(id)arg0 toState:(int)arg1 duration:(double)arg2;
- (void)finishTransitionToState:(int)arg0;
- (char)allowsExpansion;
- (void)startedPinch:(id)arg0;
- (void)continuedPinch:(id)arg0;
- (void)finishedPinch:(id)arg0;
- (void)canceledPinch:(id)arg0;
- (void)finishTransition;
- (struct CGRect)pinchRect:(NSObject *)arg0 inView:(SEL)arg1 insetTouches:(struct CGRect)arg2;
- (void)collapseWithAnimation:(char)arg0 completion:(id /* block */)arg1;
- (void)expandWithAnimation:(char)arg0 completion:(id /* block */)arg1;
- (struct CGRect)contractedFrame;
- (void)setExpandedFrame:(struct CGRect)arg0;
- (struct CGRect)expandedFrame;
- (void)setAllowsExpansion:(char)arg0;
- (float)expansionFraction;
- (char)canCollapse;

@end
