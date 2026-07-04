/* Runtime dump - CAStateControllerTransition
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateControllerTransition : NSObject
{
    CAStateController * _controller;
    CALayer * _layer;
    CAStateTransition * _transition;
    double _beginTime;
    double _duration;
    float _speed;
    NSString * _masterKey;
    NSMutableArray * _animations;
}

@property (readonly, nonatomic) CALayer * layer;
@property (readonly, nonatomic) CAStateTransition * transition;
@property (readonly, nonatomic) double beginTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float speed;

- (void)removeAnimationFromLayer:(id)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (CALayer *)layer;
- (CAStateControllerTransition *)init;
- (double)duration;
- (void)invalidate;
- (void)addAnimation:(CAAnimation *)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (double)beginTime;
- (float)speed;
- (CAStateTransition *)transition;

@end
