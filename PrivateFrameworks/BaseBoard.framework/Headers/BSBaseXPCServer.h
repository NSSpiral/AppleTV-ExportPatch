/* Runtime dump - BSBaseXPCServer
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSBaseXPCServer : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _listenerConnection;
    NSMutableSet * _clients;
    char _connectionResumed;
    char _usesAnonymousConnection;
    NSString * _serviceName;
    int _notifyToken;
}

@property (nonatomic) char usesAnonymousConnection;

- (void)dealloc;
- (void)run;
- (void)_invalidate;
- (BSBaseXPCServer *)initWithServiceName:(NSString *)arg0;
- (NSXPCConnection *)_connection;
- (void)registerServerSuspended;
- (void)resumeServer;
- (void)_addClientConnection:(NSURLConnection *)arg0;
- (NSString *)_notifyTokenName;
- (char)queue_shouldAcceptNewConnection:(NSURLConnection *)arg0;
- (NSURLConnection *)queue_newClientForConnection:(NSURLConnection *)arg0;
- (void)_queue_removeClientConnection:(NSURLConnection *)arg0;
- (NSURLConnection *)_queue_clientForConnection:(NSURLConnection *)arg0;
- (void)queue_handleMessage:(NSString *)arg0;
- (NSString *)_getStringFromMessage:(NSString *)arg0 key:(char *)arg1;
- (NSMutableSet *)_clients;
- (NSObject *)_copyEndpoint;
- (char)usesAnonymousConnection;
- (void)setUsesAnonymousConnection:(char)arg0;
- (BSBaseXPCServer *)initWithServiceName:(NSString *)arg0 onQueue:(/* block */ id)arg1;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)_sendReply:(id /* block */)arg0 messagePacker:(id)arg1;
- (Class)queue_classForNewClientConnection:(NSURLConnection *)arg0;
- (void)queue_clientAdded:(id)arg0;
- (void)queue_clientRemoved:(id)arg0;

@end
