/* Runtime dump - UIDragger
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDragger : NSObject
{
    /* block */ id * _interpolator;
    UIView * _target;
    id _delegate;
    SEL _action;
    struct CGPoint _startLocation;
    struct CGPoint _stopLocation;
    double _duration;
    char _showFinger;
    unsigned int _port;
    NSArray * _modes;
    unsigned long long _startTimestamp;
    unsigned long long _stopTimestamp;
    unsigned long long _lastTimestamp;
    char _waitingForSmoothScrolling;
    UIImageView * _fingerView;
}

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (UIDragger *)init;
- (void)setDuration:(double)arg0;
- (void)setTarget:(UIView *)arg0;
- (void)setAction:(SEL)arg0;
- (void)setStartLocation:(struct CGPoint)arg0;
- (void)run;
- (void)dragDidEnd;
- (void)_postMouseEvent:(int)arg0 timestamp:(unsigned long long)arg1 location:(struct CGPoint)arg2;
- (void)_continueDrag:(id)arg0;
- (double)_delayUntilNextEvent;
- (void)_stopDrag:(id)arg0;
- (void)setInterpolation:(/* block */ id *)arg0;
- (void)setStopLocation:(struct CGPoint)arg0;
- (void)showFinger;
- (void)_smoothScrollingWillStart:(id)arg0;
- (void)_smoothScrollingDidEnd:(id)arg0;

@end
