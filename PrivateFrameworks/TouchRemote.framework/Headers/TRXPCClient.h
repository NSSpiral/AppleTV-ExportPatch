/* Runtime dump - TRXPCClient
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRXPCClient : NSObject <NSXPCConnectionDelegate>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSXPCConnection * _connection;
}

@property (readonly, nonatomic) <TRXPCDaemonExportedInterface> * remoteDaemonProxy;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TRXPCClient *)sharedClient;

- (void)dealloc;
- (TRXPCClient *)init;
- (TRXPCClient *)_init;
- (void).cxx_destruct;
- (void)connection:(NSXPCConnection *)arg0 handleInvocation:(NSObject *)arg1 isReply:(char)arg2;
- (<TRXPCDaemonExportedInterface> *)remoteDaemonProxy;
- (id)remoteDaemonProxyWithErrorHandler:(SSErrorHandler *)arg0;

@end
