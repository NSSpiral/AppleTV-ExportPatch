/* Runtime dump - UIClientRotationContext
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIClientRotationContext : NSObject
{
    UIView * _headerView;
    UIView * _footerView;
    UIView * _contentView;
    UIView * _snapshotTargetView;
    UIView * _rotatingSnapshotView;
    UIView * _footerStartSnapshotView;
    UIView * _footerEndSnapshotView;
    char _headerWasHidden;
    char _footerWasHidden;
    char _contentWasHidden;
    char _snapshotTargetWasHidden;
    char _orderKeyboardInAfterRotating;
    char _skipFooterRotation;
    char _skipHeaderRotation;
    int _fromOrientation;
    int _toOrientation;
    double _duration;
    UISnapshotView * _headerSnapshotViewStart;
    UISnapshotView * _footerSnapshotViewStart;
    UISnapshotView * _contentSnapshotViewStart;
    float _contentTopAdjustmentStart;
    id _rotatingClient;
    struct ? _rotationSettings;
    float contentBottomInset;
    UIWindow * _window;
    char _skipClientRotationCallbacks;
    NSArray * _backdropViews;
}

@property (readonly, nonatomic) id rotatingClient;
@property (readonly, nonatomic) UIView * contentView;
@property (readonly, nonatomic) double duration;
@property (nonatomic) char skipClientRotationCallbacks;
@property (readonly, nonatomic) int fromOrientation;
@property (readonly, nonatomic) int toOrientation;

- (void)dealloc;
- (double)duration;
- (void)_positionHeaderView:(NSObject *)arg0 andFooterView:(NSObject *)arg1 outsideContentViewForInterfaceOrientation:(int)arg2;
- (void)_slideHeaderView:(NSObject *)arg0 andFooterView:(NSObject *)arg1 offScreen:(char)arg2 forInterfaceOrientation:(int)arg3;
- (UIClientRotationContext *)initWithClient:(NSObject *)arg0 toOrientation:(int)arg1 duration:(double)arg2 andWindow:(NSObject *)arg3;
- (UIView *)contentView;
- (NSObject *)rotatingClient;
- (void)setSkipClientRotationCallbacks:(char)arg0;
- (void)slideHeaderViewAndFooterViewOffScreen:(char)arg0 forInterfaceOrientation:(int)arg1;
- (void)setupRotationOrderingKeyboardInAfterRotation:(char)arg0;
- (void)disableBackdropViewUpdates:(char)arg0;
- (void)rotateSnapshots;
- (int)toOrientation;
- (void)finishFirstHalfRotation;
- (int)fromOrientation;
- (char)skipClientRotationCallbacks;
- (void)finishFullRotateUsingOnePartAnimation:(char)arg0;
- (char)_isHeaderTranslucent;
- (char)_isFooterTranslucent;
- (void)_slideFooterWithStartSnapshot:(NSObject *)arg0 endSnapshot:(NSObject *)arg1 duration:(double)arg2;

@end
