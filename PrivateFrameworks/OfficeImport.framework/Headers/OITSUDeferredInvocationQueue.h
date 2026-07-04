/* Runtime dump - OITSUDeferredInvocationQueue
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDeferredInvocationQueue : NSObject
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
