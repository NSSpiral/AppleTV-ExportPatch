/* Runtime dump - CDDXPCConnection
 * Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDXPCConnection : NSObject
{
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSObject<OS_dispatch_queue> * _replyQueue;
    char _hasValidConnection;
    long long _sequenceNumber;
    NSString * _serviceName;
    CDDebug * _debug;
}

@property (readonly) NSString * serviceName;
@property (readonly) CDDebug * debug;

- (CDDebug *)debug;
- (char)establishConnection;
- (void)dealloc;
- (void).cxx_destruct;
- (NSObject<OS_xpc_object> *)connection;
- (CDDXPCConnection *)initWithMachServiceName:(NSString *)arg0 dispatchQueue:(struct __shared_weak_count *)arg1;
- (char)sendMessageAsync:(char *)arg0 withReplyHandler:(id /* block */)arg1;
- (NSObject *)makeStashWithId:(unsigned long long)arg0;
- (void)cancelConnection;
- (void)invalidateConnection;
- (void)sendBarrier:(id)arg0;
- (NSString *)serviceName;
- (unsigned long long)sequenceNumber;

@end
