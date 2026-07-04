/* Runtime dump - FudXPCConnection
 * Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

@interface FudXPCConnection : NSObject <FudConnection>
{
    NSString * clientIdentifier;
    NSObject<OS_xpc_object> * connection;
    NSObject<OS_dispatch_queue> * connectionQueue;
    NSObject<OS_dispatch_queue> * sessionQueue;
    NSObject<OS_dispatch_queue> * replyQueue;
    id messageHandler;
    int notifyToken;
    char didStop;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)createConnection;
- (void)dealloc;
- (void)stop;
- (char)registerForBSDNotifications;
- (char)createSession;
- (void)sendMessageToFud:(id)arg0;
- (void)sendMessageToFud:(id)arg0 reply:(id /* block */)arg1;
- (FudXPCConnection *)initWithClientName:(NSString *)arg0 replyHandlerQueue:(NSObject *)arg1 messageHandler:(NSObject<MBConnectionHandler> *)arg2;

@end
