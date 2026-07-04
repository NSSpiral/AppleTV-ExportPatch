/* Runtime dump - PTPTCPIPTransport
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPTCPIPTransport : PTPTransport
{
    struct __CFSocket * _socket;
    NSString * _hostName;
    unsigned short _hostPort;
    NSString * _hostGUID;
    NSString * _targetName;
    NSString * _targetAddress;
    unsigned long _targetPort;
    NSString * _targetGUID;
    id _connectionRequestResponse;
    unsigned long _connectionNumber;
    PTPTCPIPConnection * _tempConnection;
    NSMutableData * _tempData;
    PTPTCPIPConnection * _cdConnection;
    PTPTCPIPConnection * _eventConnection;
    NSMutableData * _cdData;
    NSMutableData * _eventData;
    char _delegateNeedsData;
}

- (void)dealloc;
- (NSString *)description;
- (char)sendResponse:(NSURLResponse *)arg0;
- (char)sendEvent:(NSObject *)arg0;
- (void)stop;
- (void)handleData:(NSData *)arg0 from:(NSObject *)arg1;
- (void)didCloseConnection:(NSURLConnection *)arg0 withError:(struct ?)arg1;
- (char)startInitiator;
- (int)waitForCallbackThreadConditionSignalWithTimeoutForConnection:(long)arg0;
- (void)releaseConnections;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg0;
- (void)sendDataPackets:(id)arg0;
- (PTPTCPIPTransport *)initWithHostPort:(unsigned long)arg0 hostName:(NSString *)arg1 hostGUID:(NSString *)arg2 bonjourServiceType:(NSObject *)arg3 bonjourTXTRecords:(NSArray *)arg4 delegate:(NSObject *)arg5;
- (PTPTCPIPTransport *)initForAcceptedSocketWithDelegate:(NSObject *)arg0 andHostGUID:(NSString *)arg1 andHostName:(NSString *)arg2;
- (PTPTCPIPTransport *)initWithTargetAddress:(NSString *)arg0 targetPort:(unsigned long)arg1 targetGUID:(NSString *)arg2 targetName:(NSString *)arg3 hostGUID:(NSString *)arg4 hostName:(NSString *)arg5 delegate:(NSObject *)arg6;
- (NSString *)targetAddress;
- (unsigned long)targetPort;
- (NSString *)targetGUID;
- (char)startResponder;
- (char)waitForConnectionWithTimeout:(double)arg0;
- (char)sendStartData:(NSData *)arg0;
- (char)sendCancel:(id)arg0;
- (NSURLRequest *)sendRequest:(NSURLRequest *)arg0 receiveData:(NSData *)arg1 timeout:(unsigned long)arg2;
- (NSURLRequest *)sendRequest:(NSURLRequest *)arg0 sendData:(NSData *)arg1 timeout:(unsigned long)arg2;
- (void)cancelTransaction:(NSObject *)arg0;
- (void)acceptConnectionFromSocket:(int)arg0;
- (void)sendData:(NSData *)arg0;
- (NSString *)targetName;
- (char)connected;

@end
