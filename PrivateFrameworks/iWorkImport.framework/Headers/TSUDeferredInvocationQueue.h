/* Runtime dump - TSUDeferredInvocationQueue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDeferredInvocationQueue : NSObject
{
    NSMutableArray * _invocations;
    id _target;
}

- (void)dealloc;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (NSObject *)prepareWithInvocationTarget:(NSObject *)arg0;
- (void)performInvocations;

@end
