/* Runtime dump - VCClientRelay
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCClientRelay : NSObject
{
    int _vtpSocket;
    int _idsSocket;
    NSObject<OS_dispatch_source> * _idsReadSource;
    NSObject<OS_dispatch_queue> * _idsReadQueue;
    char _isConnectionResultSet;
    struct tagCONNRESULT _connectionResult;
    struct sockaddr_storage _vtpDestination;
    unsigned int _vtpDestinationLength;
    struct OpaqueFigThread * _vtpReceiveTID;
    char _stopVTPReceiveThread;
}

@property (readonly) char stopVTPReceiveThread;

- (void)dealloc;
- (void)setConnectionResult:(struct tagCONNRESULT *)arg0;
- (long)stopRelay;
- (long)startRelay;
- (VCClientRelay *)initWithIDSSocket:(int)arg0;
- (long)setupVTPSocket;
- (char)relayIDSPacket;
- (char)relayVTPPacket;
- (char)stopVTPReceiveThread;

@end
