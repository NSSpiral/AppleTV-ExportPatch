/* Runtime dump - VKAnimation
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnimation : NSObject
{
    id _stepHandler;
    id _completionHandler;
    id _timingFunction;
    double _duration;
    double _startTimestamp;
    double _lastTimestamp;
    NSString * _name;
    int _priority;
    <VKAnimationRunner> * _runner;
    struct ? _flags;
}

@property (nonatomic) double duration;
@property (copy, nonatomic) id timingFunction;
@property (copy, nonatomic) id stepHandler;
@property (copy, nonatomic) id completionHandler;
@property (readonly, nonatomic) char running;
@property (nonatomic) char runsForever;
@property (readonly, nonatomic) int priority;

+ (void)setDragCoefficientGetter:(id)arg0;

- (void)dealloc;
- (VKAnimation *)init;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)stop;
- (void)setTimingFunction:(CAMediaTimingFunction *)arg0;
- (CAMediaTimingFunction *)timingFunction;
- (id /* block */)completionHandler;
- (void)resume;
- (void).cxx_construct;
- (int)priority;
- (void)setCompletionHandler:(id /* block */)arg0;
- (VKAnimation *)initWithPriority:(int)arg0;
- (VKAnimation *)initWithName:(NSString *)arg0;
- (void)pause;
- (VKAnimation *)initWithDuration:(double)arg0;
- (void)setStepHandler:(id /* block */)arg0;
- (void)onTimerFired:(double)arg0;
- (VKAnimation *)initWithDuration:(double)arg0 name:(NSString *)arg1;
- (void)_stopAnimation:(char)arg0;
- (char)running;
- (void)setRunsForever:(char)arg0;
- (char)runsForever;
- (VKAnimation *)initWithDuration:(double)arg0 priority:(int)arg1 name:(NSString *)arg2;
- (VKAnimation *)initWithPriority:(int)arg0 name:(NSString *)arg1;
- (void)startWithRunner:(<VKAnimationRunner> *)arg0;
- (void)transferToRunner:(id)arg0;
- (id /* block */)stepHandler;

@end
