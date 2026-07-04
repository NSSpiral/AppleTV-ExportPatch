/* Runtime dump - GKDiscoveryPeerConnection
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKDiscoveryPeerConnection : NSObject <GKSimpleTimerDelegate>
{
    NSString * _remoteServiceName;
    NSString * _localServiceName;
    id _peer;
    char _connected;
    GKAsyncSocket * _connectionSocket;
    NSMutableData * _dataReceived;
    unsigned int _currentSequenceNumber;
    NSMutableData * _dataToSendHoldingQueue;
    NSMutableArray * _receivedDataHoldingQueue;
    NSMutableArray * _messageReceiptHandlerList;
    NSMutableArray * _messageReceiptHandlerHoldingQueue;
    id _receiveDataHandler;
    id _connectedHandler;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSObject<OS_dispatch_queue> * _targetQueue;
    GKSimpleTimer * _heartbeatTimer;
    GKSimpleTimer * _heartbeatTimeoutTimer;
    GKSimpleTimer * _timeoutTimer;
    double _connectionTimeoutInSeconds;
    double _heartbeatIntervalInSeconds;
}

@property (copy, nonatomic) NSString * remoteServiceName;
@property (copy, nonatomic) id receiveDataHandler;
@property (copy, nonatomic) id connectedHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> * syncQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> * targetQueue;
@property (copy, nonatomic) NSString * localServiceName;

+ (unsigned int)receiveDataLimit;
+ (unsigned int)sendDataLimit;
+ (void)checkConstants;

- (void)dealloc;
- (void)invalidate;
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setReceiveDataHandler:(id /* block */)arg0;
- (void)sendData:(NSData *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)setConnectedHandler:(id /* block */)arg0;
- (void)timeout:(GKSimpleTimer *)arg0;
- (NSObject<OS_dispatch_queue> *)syncQueue;
- (id /* block */)receiveDataHandler;
- (NSString *)localServiceName;
- (GKDiscoveryPeerConnection *)initWithLocalServiceName:(NSString *)arg0;
- (void)connectToSockAddr:(struct sockaddr *)arg0 port:(struct sockaddr)arg1;
- (void)attachSocketDescriptor:(int)arg0;
- (NSObject<OS_dispatch_queue> *)targetQueue;
- (id /* block */)connectedHandler;
- (void)setSyncQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setLocalServiceName:(NSString *)arg0;
- (void)syncSendHello;
- (void)syncReceivedData:(NSData *)arg0 error:(NSError *)arg1;
- (void)syncConnected:(id)arg0;
- (char)syncSetupNewSocket;
- (NSString *)remoteServiceName;
- (void)syncCloseConnectionNow;
- (void)syncSendMessage:(int)arg0 data:(NSData *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setRemoteServiceName:(NSString *)arg0;
- (void)syncSendMessageReceipt:(int)arg0 sequenceNumber:(unsigned int)arg1;
- (char)shouldDecideAboutConnection;
- (void)syncSendAccept;
- (void)syncAcceptedConnection;
- (void)syncProcessMessage:(int)arg0 data:(NSData *)arg1 sequenceNumber:(unsigned int)arg2;

@end
