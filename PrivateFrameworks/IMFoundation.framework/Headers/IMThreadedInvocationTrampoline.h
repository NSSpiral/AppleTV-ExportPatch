/* Runtime dump - IMThreadedInvocationTrampoline
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline
{
    NSThread * _thread;
    char _immediateForMatchingThread;
}

- (void)dealloc;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (IMThreadedInvocationTrampoline *)initWithTarget:(NSObject *)arg0 thread:(NSThread *)arg1 immediateForMatchingThread:(char)arg2;

@end
