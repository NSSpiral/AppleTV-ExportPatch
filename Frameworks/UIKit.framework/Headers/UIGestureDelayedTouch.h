/* Runtime dump - UIGestureDelayedTouch
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGestureDelayedTouch : NSObject <NSCopying>
{
    UITouch * _touch;
    UITouch * _stateWhenDelayed;
    UITouch * _stateWhenDelivered;
    UIEvent * _event;
    int _delayCount;
    char _cloneForSecondDelivery;
}

@property (retain) UITouch * touch;
@property (retain) UITouch * stateWhenDelayed;
@property (retain) UITouch * stateWhenDelivered;
@property (retain) UIEvent * event;
@property char cloneForSecondDelivery;

- (void)dealloc;
- (UIGestureDelayedTouch *)init;
- (NSString *)description;
- (UIGestureDelayedTouch *)copyWithZone:(struct _NSZone *)arg0;
- (UITouch *)touch;
- (void)setTouch:(UITouch *)arg0;
- (void)setEvent:(UIEvent *)arg0;
- (void)setStateWhenDelayed:(UITouch *)arg0;
- (char)cloneForSecondDelivery;
- (int)decrementDelayCount;
- (void)incrementDelayCount;
- (int)delayCount;
- (void)saveCurrentTouchState;
- (int)phaseForDelivery;
- (double)timestampForDelivery;
- (UITouch *)stateWhenDelayed;
- (UITouch *)stateWhenDelivered;
- (void)setStateWhenDelivered:(UITouch *)arg0;
- (UIEvent *)event;
- (void)setCloneForSecondDelivery:(char)arg0;

@end
