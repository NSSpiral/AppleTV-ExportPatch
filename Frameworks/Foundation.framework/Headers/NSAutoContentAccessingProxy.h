/* Runtime dump - NSAutoContentAccessingProxy
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAutoContentAccessingProxy : NSProxy
{
    id _target;
}

+ (NSObject *)proxyWithTarget:(NSObject *)arg0;

- (void)dealloc;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)finalize;

@end
