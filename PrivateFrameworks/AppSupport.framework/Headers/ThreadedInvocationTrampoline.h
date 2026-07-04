/* Runtime dump - ThreadedInvocationTrampoline
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface ThreadedInvocationTrampoline : InvocationTrampoline
{
    NSThread * _thread;
    char _immediateForMatchingThread;
}

- (void)dealloc;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (ThreadedInvocationTrampoline *)initWithTarget:(NSObject *)arg0 thread:(NSThread *)arg1 immediateForMatchingThread:(char)arg2;

@end
