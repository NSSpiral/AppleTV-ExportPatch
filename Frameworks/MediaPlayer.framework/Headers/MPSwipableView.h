/* Runtime dump - MPSwipableView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate>
{
    int _enabledGestureTypes;
    int _simultaneousGestureTypes;
    <MPSwipableViewDelegate> * _swipeDelegate;
    MPTapGestureRecognizer * _tapGestureRecognizer;
    MPSwipeGestureRecognizer * _swipeGestureRecognizer;
    MPActivityGestureRecognizer * _activityGestureRecognizer;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
}

@property (nonatomic) int enabledGestureTypes;
@property (nonatomic) int simultaneousGestureTypes;
@property (weak, nonatomic) <MPSwipableViewDelegate> * swipeDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setEnabledGestureTypes:(int)arg0;
- (void)setSwipeDelegate:(<MPSwipableViewDelegate> *)arg0;
- (void)_updateGestureRecognizersForEnabledTypes;
- (int)simultaneousGestureTypes;
- (void)_swipeGestureRecognized:(id)arg0;
- (void)_pinchGestureRecognized:(id)arg0;
- (void)_activityGestureRecognized:(id)arg0;
- (<MPSwipableViewDelegate> *)swipeDelegate;
- (int)enabledGestureTypes;
- (void)setSimultaneousGestureTypes:(int)arg0;
- (MPSwipableView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)addGestureRecognizer:(NSObject *)arg0;
- (void)removeGestureRecognizer:(NSObject *)arg0;
- (char)gestureRecognizer:(ADTapGestureRecognizer *)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(ADTapGestureRecognizer *)arg1;
- (void)willMoveToWindow:(NSObject *)arg0;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(UIView *)arg0;
- (void).cxx_destruct;
- (void)_tapGestureRecognized:(id)arg0;

@end
