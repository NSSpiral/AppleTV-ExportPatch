/* Runtime dump - BSBaseXPCClient
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSBaseXPCClient : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _connection;
    BSSignal * _invalidationSignal;
    NSObject<OS_xpc_object> * _serverEndpoint;
    NSString * _serviceName;
    char _suspended;
    char _clientInvalidated;
    int _notifyToken;
}

@property (readonly, nonatomic) char suspended;

- (BSBaseXPCClient *)initWithEndpoint:(NSString *)arg0;
- (void)_setEndpoint:(NSObject *)arg0;
- (char)isSuspended;
- (void)dealloc;
- (void)invalidate;
- (BSBaseXPCClient *)initWithServiceName:(NSString *)arg0;
- (NSXPCConnection *)_connection;
- (NSString *)_notifyTokenName;
- (void)queue_handleMessage:(NSString *)arg0;
- (NSString *)_getStringFromMessage:(NSString *)arg0 key:(char *)arg1;
- (BSBaseXPCClient *)initWithServiceName:(NSString *)arg0 endpoint:(NSObject *)arg1;
- (void)queue_invalidate;
- (char)queue_isSuspended;
- (void)queue_registerWithServerIfNecessary;
- (void)queue_suspendConnection;
- (void)queue_resumeConnection;
- (void)_sendMessage:(NSString *)arg0 withReplyHandler:(/* block */ id)arg1 waitForReply:(id /* block */)arg2 waitDuration:(/* block */ id)arg3;
- (void)queue_connectionWasResumed;
- (void)queue_connectionWasSuspended;
- (id)_connectionInstanceUUID;
- (void)queue_connectionWasInterrupted;
- (void)queue_reregister;
- (void)queue_connectionWasInvalidated;
- (void)queue_reconnectToResumedServerIfNecessary;
- (void)queue_connectionWasCreated;
- (void)reconnectIfNecessary;
- (void)queue_connectionWasDestroyed;
- (void)suspendConnection;
- (void)resumeConnection;
- (id)_errorFromMessageIfAny:(id)arg0;
- (void)_sendMessage:(NSString *)arg0;
- (NSURLConnection *)queue_connection;
- (void)_sendReply:(id /* block */)arg0 messagePacker:(id)arg1;

@end
