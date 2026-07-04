/* Runtime dump - NSInvocationOperation
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSInvocationOperation : NSOperation
{
    id _inv;
    id _exception;
    void * _reserved2;
}

@property (readonly, retain) NSInvocation * invocation;
@property (readonly, retain) id result;

- (void)dealloc;
- (NSInvocationOperation *)init;
- (NSInvocationOperation *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1 object:(NSObject *)arg2;
- (void)main;
- (CKDPResponseOperationResult *)result;
- (NSInvocation *)invocation;
- (NSInvocationOperation *)initWithInvocation:(NSInvocation *)arg0;

@end
