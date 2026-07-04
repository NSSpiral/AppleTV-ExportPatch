/* Runtime dump - ISDelegateProxy
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDelegateProxy : NSObject
{
    id _delegate;
    NSLock * _lock;
    char _shouldMessageMainThread;
}

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (ISDelegateProxy *)init;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)setShouldMessageMainThread:(char)arg0;
- (void)sendInvocationToDelegate:(NSObject *)arg0;

@end
