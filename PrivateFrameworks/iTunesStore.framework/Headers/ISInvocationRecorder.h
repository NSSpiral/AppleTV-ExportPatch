/* Runtime dump - ISInvocationRecorder
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISInvocationRecorder : NSObject
{
    id _target;
}

- (void)dealloc;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (ISInvocationRecorder *)initWithTarget:(NSObject *)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (NSString *)adjustedTargetForSelector:(SEL)arg0;
- (void)invokeInvocation:(NSObject *)arg0;

@end
