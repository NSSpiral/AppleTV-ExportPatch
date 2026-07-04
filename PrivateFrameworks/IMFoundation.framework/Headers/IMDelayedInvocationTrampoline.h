/* Runtime dump - IMDelayedInvocationTrampoline
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline
{
    NSArray * _modes;
    double _delay;
}

- (void)dealloc;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (IMDelayedInvocationTrampoline *)initWithTarget:(NSObject *)arg0 delay:(double)arg1 modes:(NSArray *)arg2;

@end
