/* Runtime dump - InvocationTrampoline
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface InvocationTrampoline : NSObject
{
    id _target;
}

@property (retain) id target;

- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)setTarget:(NSObject *)arg0;
- (NSObject *)target;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)performInvocation:(NSObject *)arg0;

@end
