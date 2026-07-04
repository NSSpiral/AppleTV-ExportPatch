/* Runtime dump - PLWeakTimerTarget
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLWeakTimerTarget : NSObject
{
    id _target;
    SEL _selector;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;

- (PLWeakTimerTarget *)init;
- (void)setTarget:(NSObject *)arg0;
- (void)setSelector:(SEL)arg0;
- (NSObject *)target;
- (SEL)selector;
- (void).cxx_destruct;
- (void)timerDidFire:(HAPTimer *)arg0;
- (PLWeakTimerTarget *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1;

@end
