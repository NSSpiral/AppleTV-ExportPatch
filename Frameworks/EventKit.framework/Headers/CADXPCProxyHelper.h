/* Runtime dump - CADXPCProxyHelper
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface CADXPCProxyHelper : NSObject
{
    NSXPCConnection * _connection;
    Protocol * _protocol;
}

- (CADXPCProxyHelper *)initWithXPCConnection:(NSURLConnection *)arg0 protocol:(Protocol *)arg1;
- (NSObject *)_copyReplyBlockFromInvocation:(NSObject *)arg0;
- (void)_callReplyHandler:(id /* block */)arg0 ofInvocation:(NSObject *)arg1 withError:(NSError *)arg2;
- (void)dealloc;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;

@end
