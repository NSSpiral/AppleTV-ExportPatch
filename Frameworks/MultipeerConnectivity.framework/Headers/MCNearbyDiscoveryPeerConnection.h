/* Runtime dump - MCNearbyDiscoveryPeerConnection
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate>
{
    NSString * _remoteServiceName;
    NSString * _localServiceName;
    char _connected;
    NSMutableData * _dataReceived;
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    char _shouldSendHello;
    char _readyToWrite;
    NSMutableData * _dataToSend;
    unsigned int _currentSequenceNumber;
    NSMutableData * _dataToSendHoldingQueue;
    NSMutableArray * _receivedDataHoldingQueue;
    NSMutableArray * _messageReceiptHandlerList;
    NSMutableArray * _messageReceiptHandlerHoldingQueue;
    id _receiveDataHandler;
    id _connectedHandler;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (copy, nonatomic) NSString * remoteServiceName;
@property (copy, nonatomic) id receiveDataHandler;
@property (copy, nonatomic) id connectedHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> * syncQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> * targetQueue;
@property (copy, nonatomic) NSString * localServiceName;
@property (retain, nonatomic) NSInputStream * inputStream;
@property (retain, nonatomic) NSOutputStream * outputStream;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (unsigned int)receiveDataLimit;
+ (unsigned int)sendDataLimit;
+ (void)checkConstants;

- (void)syncSendData;
- (void)setupInputStream:(NSObject *)arg0 outputStream:(NSOutputStream *)arg1;
- (void)syncAppendDataToSend:(id)arg0;
- (void)syncReadFromInputStream;
- (NSString *)stringForStreamEventCode:(unsigned int)arg0;
- (void)syncHandleInputStreamEvent:(unsigned int)arg0;
- (void)syncHandleOutputStreamEvent:(unsigned int)arg0;
- (void)connectToNetService:(NSObject *)arg0;
- (void)attachInputStream:(NSObject *)arg0 outputStream:(NSOutputStream *)arg1;
- (void)dealloc;
- (void)invalidate;
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSInputStream *)inputStream;
- (void)setInputStream:(NSInputStream *)arg0;
- (void)setOutputStream:(NSOutputStream *)arg0;
- (void)stream:(NSStream *)arg0 handleEvent:(unsigned int)arg1;
- (void)setReceiveDataHandler:(id /* block */)arg0;
- (void)sendData:(NSData *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)setConnectedHandler:(id /* block */)arg0;
- (NSObject<OS_dispatch_queue> *)syncQueue;
- (id /* block */)receiveDataHandler;
- (NSString *)localServiceName;
- (MCNearbyDiscoveryPeerConnection *)initWithLocalServiceName:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)targetQueue;
- (id /* block */)connectedHandler;
- (void)setSyncQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setLocalServiceName:(NSString *)arg0;
- (void)syncSendHello;
- (void)syncReceivedData:(NSData *)arg0 error:(NSError *)arg1;
- (NSString *)remoteServiceName;
- (void)syncCloseConnectionNow;
- (void)syncSendMessage:(int)arg0 data:(NSData *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setRemoteServiceName:(NSString *)arg0;
- (void)syncSendMessageReceipt:(int)arg0 sequenceNumber:(unsigned int)arg1;
- (char)shouldDecideAboutConnection;
- (void)syncSendAccept;
- (void)syncAcceptedConnection;
- (void)syncProcessMessage:(int)arg0 data:(NSData *)arg1 sequenceNumber:(unsigned int)arg2;
- (NSOutputStream *)outputStream;

@end
