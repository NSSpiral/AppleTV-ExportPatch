/* Runtime dump - GKAsyncSocketInternal
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKAsyncSocketInternal : GKAsyncSocket
{
    NSObject<OS_dispatch_source> * _receiveSource;
    NSObject<OS_dispatch_source> * _sendSource;
    char _sendSourceSuspended;
    char _invalidated;
    int _connectionSocket;
    NSMutableData * _dataToSend;
    id _receiveDataHandler;
    id _connectedHandler;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSObject<OS_dispatch_queue> * _targetQueue;
    NSString * _socketName;
}

- (void)dealloc;
- (GKAsyncSocketInternal *)init;
- (void)invalidate;
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setReceiveDataHandler:(id /* block */)arg0;
- (void)sendData:(NSData *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)setConnectedHandler:(id /* block */)arg0;
- (void)setSocketName:(NSString *)arg0;
- (void)tcpConnectSockAddr:(struct sockaddr *)arg0 port:(struct sockaddr)arg1;
- (NSString *)socketName;
- (void)tcpAttachSocketDescriptor:(int)arg0;
- (id /* block */)receiveDataHandler;
- (NSObject<OS_dispatch_queue> *)targetQueue;
- (id /* block */)connectedHandler;
- (void)receiveData;
- (void)sendData;
- (char)setupSourcesWithSocket:(int)arg0 receiveEventHandler:(id /* block */)arg1 sendEventHandler:(/* block */ id)arg2;
- (void)closeConnectionNow;

@end
