/* Runtime dump - CapturedInvocationTrampoline
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CapturedInvocationTrampoline : InvocationTrampoline
{
    id * _outInvocation;
}

- (void)forwardInvocation:(NSInvocation *)arg0;
- (CapturedInvocationTrampoline *)initWithTarget:(NSObject *)arg0 outInvocation:(id *)arg1;

@end
