/* Runtime dump - UIAnimator
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAnimator : NSObject
{
    NSMutableArray * _animations;
    double _lastUpdateTime;
    id _heartbeat;
    id _heartbeatClientCount;
}

+ (void)disableAnimation;
+ (void)enableAnimation;
+ (UIAnimator *)sharedAnimator;

- (void)dealloc;
- (void)removeAnimationsForTarget:(NSObject *)arg0 ofKind:(Class)arg1;
- (void)addAnimation:(CAAnimation *)arg0 withDuration:(double)arg1 start:(char)arg2;
- (void)stopAnimation:(NSObject *)arg0;
- (void)_addAnimation:(NSObject *)arg0 withDuration:(double)arg1 start:(char)arg2 startTime:(double)arg3;
- (void)_startAnimation:(NSObject *)arg0 withStartTime:(double)arg1;
- (void)addAnimations:(ATVAnimations *)arg0 withDuration:(double)arg1 start:(char)arg2;
- (void)removeAnimationsForTarget:(NSObject *)arg0;
- (void)startAnimation:(NSObject *)arg0;
- (float)fractionForAnimation:(NSObject *)arg0;
- (void)_advanceAnimationsOfType:(int)arg0 withTimestamp:(double)arg1;
- (void)_TimerHeartbeatCallback:(id /* block */)arg0;
- (void)_TVHeartbeatCallback:(id /* block */)arg0;
- (void)_LCDHeartbeatCallback:(id /* block */)arg0;
- (char)_isRunningAnimation:(NSObject *)arg0;

@end
