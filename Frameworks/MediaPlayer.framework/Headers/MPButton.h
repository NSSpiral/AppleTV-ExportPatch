/* Runtime dump - MPButton
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPButton : UIButton
{
    struct UIEdgeInsets _hitRectInsets;
    double _holdDelayInterval;
    id _holding;
    struct UIEdgeInsets _alignmentRectInsets;
}

@property (nonatomic) struct UIEdgeInsets alignmentRectInsets;
@property (nonatomic) struct UIEdgeInsets hitRectInsets;
@property (nonatomic) double holdDelayInterval;

+ (NSObject *)easyTouchButtonWithType:(int)arg0;
+ (struct UIEdgeInsets)easyTouchDefaultHitRectInsets;
+ (float)easyTouchDefaultCharge;

- (void)setHitRectInsets:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)hitRectInsets;
- (void)_handleTouchDown;
- (void)_handleTouchCancel;
- (void)_handleTouchUp;
- (void)_delayedTriggerHold;
- (double)holdDelayInterval;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets)arg0;
- (void)setHoldDelayInterval:(double)arg0;
- (MPButton *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGRect)hitRect;
- (void)cancelTrackingWithEvent:(NSObject *)arg0;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;

@end
