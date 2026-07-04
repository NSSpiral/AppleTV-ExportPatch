/* Runtime dump - SKXPCConnection
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKXPCConnection : NSObject
{
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id _disconnectBlock;
    id _messageBlock;
}

@property (copy) id disconnectBlock;
@property (copy) id messageBlock;

- (NSURLConnection *)_initSKXPCConnection;
- (void)dealloc;
- (SKXPCConnection *)init;
- (SKXPCConnection *)initWithServiceName:(NSString *)arg0;
- (void)sendMessage:(NSString *)arg0;
- (void)sendMessage:(NSString *)arg0 withReply:(id /* block */)arg1;
- (void)setDisconnectBlock:(id /* block */)arg0;
- (void)setMessageBlock:(id /* block */)arg0;
- (id /* block */)messageBlock;
- (NSObject *)createXPCEndpoint;
- (id /* block */)disconnectBlock;
- (void)sendSynchronousMessage:(NSString *)arg0 withReply:(id /* block */)arg1;
- (SKXPCConnection *)initWithXPCConnection:(NSURLConnection *)arg0;
- (void)_reloadEventHandler;

@end
