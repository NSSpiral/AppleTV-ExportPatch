/* Runtime dump - TCPTunnelClient
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface TCPTunnelClient : NSObject <VideoConferenceRealTimeChannel>
{
    int _connectState;
    int _connectedFD;
    int _isChannelBound;
    id _handler;
    id _allocationResponseHandler;
    id _terminationHandler;
    id _bindingResponseHandler;
    id _destroyHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _readSource;
    NSObject<OS_dispatch_source> * _writeSource;
    unsigned char _writeSourceSuspended;
    NSObject<OS_dispatch_source> * _timer;
    float _fTimeout;
    NSString * _participantID;
    unsigned short _channelNumber;
    NSMutableDictionary * _reqRespDict;
    NSDictionary * _relayUpdateDict;
    struct tagIPPORT _serverIPPort;
    NSData * _allocateReq;
    NSData * _channelBReq;
    double _allocationTimestamp;
    NSMutableData * _currentlyReadingMessage;
    int _currentlyReadingDataGoalLength;
    unsigned short _currentMsgType;
    int _currentPadding;
    char * _writeBuf;
    int _head;
    int _tail;
    TCPBufferPool * _bufferPool;
}

@property (copy) id receiveHandler;
@property (copy) id allocationResponseHandler;
@property (copy) id terminationHandler;
@property (copy) id bindingResponseHandler;
@property (copy) id destroyHandler;
@property (copy) NSString * participantID;

- (void)dealloc;
- (void)setTerminationHandler:(id /* block */)arg0;
- (id /* block */)terminationHandler;
- (NSString *)participantID;
- (void)setParticipantID:(NSString *)arg0;
- (void)setReceiveHandler:(id /* block */)arg0;
- (void)setAllocationResponseHandler:(id /* block */)arg0;
- (void)setBindingResponseHandler:(id /* block */)arg0;
- (void)setDestroyHandler:(id /* block */)arg0;
- (void)destroyDispatchTimer;
- (void)reportErrorAndTerminate:(int)arg0 detail:(int)arg1 returnCode:(int)arg2 description:(NSString *)arg3 reason:(NSString *)arg4;
- (id /* block */)receiveHandler;
- (void)receivedControlData:(NSData *)arg0;
- (void)sendTCPData:(void *)arg0 bufSize:(void)arg1;
- (void)createDispatchTimer:(float)arg0 withDetailedError:(int)arg1;
- (id /* block */)allocationResponseHandler;
- (void)vcArg:(id)arg0 sendControlData:(NSData *)arg1 isTypeSSL:(char)arg2 withTimeout:(float)arg3 withDetail:(int)arg4;
- (id /* block */)bindingResponseHandler;
- (char)sendRefreshMsg:(unsigned int)arg0 error:(id *)arg1;
- (id /* block */)destroyHandler;
- (char)sendChannelBindingMsgWithDict:(id)arg0 error:(id *)arg1;
- (void)receivedSSLConnectionData:(NSData *)arg0 recordType:(unsigned short)arg1;
- (void)processSocketWrite:(unsigned char)arg0;
- (void)processSocketRead;
- (void)processSocketReadSSL;
- (void)resetConnection;
- (void)vcArg:(id)arg0 sendRealTimeData:(NSData *)arg1 toParticipantID:(NSString *)arg2;
- (TCPTunnelClient *)initWithRelayRequestDictionary:(NSDictionary *)arg0 withCallID:(unsigned long)arg1 relayType:(unsigned char)arg2 errorCode:(int *)arg3;
- (unsigned int)connectionType;
- (char)sendAllocateMsg:(id *)arg0;
- (void)unbindChannel;
- (void)closeTunnelSocket;
- (char)isTunnelSocketClosed;
- (void)finalize;

@end
