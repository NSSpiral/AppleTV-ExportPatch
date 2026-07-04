/* Runtime dump - DelayedInvocationTrampoline
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface DelayedInvocationTrampoline : InvocationTrampoline
{
    double _delay;
}

- (void)forwardInvocation:(NSInvocation *)arg0;
- (DelayedInvocationTrampoline *)initWithTarget:(NSObject *)arg0 delay:(double)arg1;

@end
