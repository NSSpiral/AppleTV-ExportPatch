/* Runtime dump - AXHARemoteController
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHARemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate>
{
    AXHAPacket * _currentPacket;
    char _didValidateHIID;
    <AXHARemoteControllerDelegate> * _delegate;
    NSNetService * _service;
    NSMutableArray * _outputDataQueue;
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    AXHATimer * _communicationTimer;
    NSMutableData * _inputBuffer;
    NSMutableData * _outputBuffer;
    AXHARemoteMessage * _currentMessageInFlight;
}

@property (nonatomic) <AXHARemoteControllerDelegate> * delegate;
@property (retain, nonatomic) NSNetService * service;
@property (retain, nonatomic) NSMutableArray * outputDataQueue;
@property (retain, nonatomic) NSInputStream * inputStream;
@property (retain, nonatomic) NSOutputStream * outputStream;
@property (nonatomic) char didValidateHIID;
@property (retain, nonatomic) AXHATimer * communicationTimer;
@property (retain, nonatomic) NSMutableData * inputBuffer;
@property (retain, nonatomic) NSMutableData * outputBuffer;
@property (retain, nonatomic) AXHARemoteMessage * currentMessageInFlight;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<AXHARemoteControllerDelegate> *)arg0;
- (AXHARemoteController *)init;
- (NSString *)description;
- (<AXHARemoteControllerDelegate> *)delegate;
- (NSString *)name;
- (void)closeConnectionWithError:(NSError *)arg0;
- (char)sendObject:(NSObject *)arg0 withSendCompletion:(id /* block */)arg1;
- (void)openConnectionIfNecessary;
- (char)isSlave;
- (char)sendObject:(NSObject *)arg0;
- (void)setOutputDataQueue:(NSMutableArray *)arg0;
- (void)setInputBuffer:(NSMutableData *)arg0;
- (void)setOutputBuffer:(NSMutableData *)arg0;
- (void)setCommunicationTimer:(AXHATimer *)arg0;
- (void)setDidValidateHIID:(char)arg0;
- (void)setCurrentMessageInFlight:(AXHARemoteMessage *)arg0;
- (void)setupStream:(NSObject *)arg0;
- (AXHATimer *)communicationTimer;
- (void)setSecuritySettingsForStream:(NSObject *)arg0;
- (NSMutableArray *)outputDataQueue;
- (void)sendDataChunk;
- (void)finishedSending:(id)arg0;
- (NSOperationQueue *)nextMessageInQueue;
- (void)enqueueData:(NSData *)arg0;
- (void)didCommunicate;
- (AXHARemoteMessage *)currentMessageInFlight;
- (NSMutableData *)outputBuffer;
- (char)didValidateHIID;
- (void)messageWasAcked:(id)arg0;
- (void)validatePairedAid;
- (void)clearMessageQueue;
- (void)receivedData:(NSMutableData *)arg0;
- (void)acceptConnection:(int)arg0;
- (NSMutableData *)inputBuffer;
- (void)netServiceWillPublish:(NSNetService *)arg0;
- (void)netServiceDidPublish:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didNotPublish:(NSDictionary *)arg1;
- (void)netServiceWillResolve:(NSNetService *)arg0;
- (void)netServiceDidResolveAddress:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didNotResolve:(NSDictionary *)arg1;
- (void)netServiceDidStop:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didUpdateTXTRecordData:(NSData *)arg1;
- (void)netService:(NSNetService *)arg0 didAcceptConnectionWithInputStream:(NSInputStream *)arg1 outputStream:(NSOutputStream *)arg2;
- (void)setService:(NSNetService *)arg0;
- (NSNetService *)service;
- (NSInputStream *)inputStream;
- (void)setInputStream:(NSInputStream *)arg0;
- (void)setOutputStream:(NSOutputStream *)arg0;
- (void)stream:(NSStream *)arg0 handleEvent:(unsigned int)arg1;
- (void)resetConnection;
- (AXHARemoteController *)initWithService:(NSNetService *)arg0;
- (NSOutputStream *)outputStream;
- (char)isConnecting;
- (char)isConnected;

@end
