/* Runtime dump - XPCNSClientConnection
 * Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCNSClientConnection : NSObject <XPCClientConnectionDelegate>
{
    XPCClientConnection * _clientConnection;
    <XPCNSClientConnectionDelegate> * _delegate;
}

@property (readonly, nonatomic) <XPCNSClientConnectionDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<XPCNSClientConnectionDelegate> *)delegate;
- (void).cxx_destruct;
- (void)shutDownCompletionBlock:(id /* block */)arg0;
- (XPCNSClientConnection *)initWithServiceName:(NSString *)arg0 delegate:(<XPCNSClientConnectionDelegate> *)arg1;
- (void)sendMessageReliably:(id)arg0 data:(NSData *)arg1 maxRetryCount:(int)arg2 withHandler:(id /* block */)arg3;
- (void)sendMessage:(NSString *)arg0 data:(NSData *)arg1 withHandler:(id /* block */)arg2;
- (void)XPCClientConnection:(NSURLConnection *)arg0 didReceiveRequest:(NSURLRequest *)arg1;

@end
