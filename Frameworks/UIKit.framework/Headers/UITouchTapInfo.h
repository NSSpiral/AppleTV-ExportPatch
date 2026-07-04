/* Runtime dump - UITouchTapInfo
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITouchTapInfo : NSObject
{
    unsigned int _tapCount;
    float _multiTapDelay;
    float _rejectAsTapThrehold;
    float _viewTouchPauseThreshold;
    struct CGPoint _startPosition;
    double _startTime;
}

- (char)cancelTouchTracking;
- (char)_touchLocationConsideredMovement:(id)arg0;
- (void)clearTapState;
- (void)releaseAndClearWeakRefs;
- (void)touchBegan:(id)arg0 withEvent:(Event *)arg1;
- (void)touchMoved:(id)arg0 withEvent:(Event *)arg1;
- (void)touchEnded:(id)arg0 withEvent:(Event *)arg1;

@end
