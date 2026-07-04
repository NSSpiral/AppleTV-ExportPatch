/* Runtime dump - KNASVDelayedAnimation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNASVDelayedAnimation : NSObject
{
    double _startTime;
    double _remainingDelay;
    id _target;
    SEL _selector;
    id _object;
    double _delay;
}

@property (retain, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) double delay;
@property (retain, nonatomic) id object;

- (KNASVDelayedAnimation *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1 object:(NSObject *)arg2 delay:(double)arg3;
- (void)dealloc;
- (void)setDelay:(double)arg0;
- (void)setTarget:(NSObject *)arg0;
- (void)setSelector:(SEL)arg0;
- (double)delay;
- (NSObject *)target;
- (SEL)selector;
- (NSObject *)object;
- (void)run;
- (void)resume;
- (void)setObject:(NSObject *)arg0;
- (void)pause;

@end
