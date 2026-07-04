/* Runtime dump - OperationQueueInvocationTrampoline
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface OperationQueueInvocationTrampoline : InvocationTrampoline
{
    NSOperationQueue * _queue;
    int _priority;
}

- (void)dealloc;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (OperationQueueInvocationTrampoline *)initWithTarget:(NSObject *)arg0 operationQueue:(NSObject *)arg1 priority:(int)arg2;

@end
