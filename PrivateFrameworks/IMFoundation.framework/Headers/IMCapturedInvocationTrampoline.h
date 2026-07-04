/* Runtime dump - IMCapturedInvocationTrampoline
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMCapturedInvocationTrampoline : IMInvocationTrampoline
{
    id * _outInvocation;
}

- (void)forwardInvocation:(NSInvocation *)arg0;
- (IMCapturedInvocationTrampoline *)initWithTarget:(NSObject *)arg0 outInvocation:(id *)arg1;

@end
