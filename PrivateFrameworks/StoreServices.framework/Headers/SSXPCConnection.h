/* Runtime dump - SSXPCConnection
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSXPCConnection : NSObject
{
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id _disconnectBlock;
    NSObject<OS_dispatch_queue> * _replyQueue;
    id _messageBlock;
}

@property (copy) id disconnectBlock;
@property (copy) id messageBlock;

- (void)dealloc;
- (SSXPCConnection *)init;
- (SSXPCConnection *)initWithServiceName:(NSString *)arg0;
- (void)sendMessage:(NSString *)arg0;
- (void)sendMessage:(NSString *)arg0 withReply:(id /* block */)arg1;
- (void)setDisconnectBlock:(id /* block */)arg0;
- (void)setMessageBlock:(id /* block */)arg0;
- (id /* block */)messageBlock;
- (NSObject *)createXPCEndpoint;
- (id /* block */)disconnectBlock;
- (void)sendSynchronousMessage:(NSString *)arg0 withReply:(id /* block */)arg1;
- (SSXPCConnection *)initWithXPCConnection:(NSURLConnection *)arg0;
- (NSURLConnection *)_initSSXPCConnection;
- (void)_reloadEventHandler;
- (NSOperationQueue *)copyReplyQueue;
- (void)setReplyQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
