/* Runtime dump - WebMainThreadInvoker
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebMainThreadInvoker : NSProxy
{
    id target;
    id exception;
}

- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (WebMainThreadInvoker *)initWithTarget:(NSObject *)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)handleException:(NSException *)arg0;

@end
