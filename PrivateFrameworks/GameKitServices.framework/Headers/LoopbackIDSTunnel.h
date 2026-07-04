/* Runtime dump - LoopbackIDSTunnel
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface LoopbackIDSTunnel : NSObject <VideoConferenceRealTimeChannel>
{
    int _socket;
    int _packetSendFailureCount;
    id _dataHandler;
    id _terminationHandler;
    struct OpaqueFigThread * _idsReceiveTID;
    char _stopIDSReceiveThread;
}

@property (copy) id receiveHandler;
@property (copy) id terminationHandler;
@property (readonly) char stopIDSReceiveThread;

- (void)dealloc;
- (void)cleanup;
- (void)setTerminationHandler:(id /* block */)arg0;
- (id /* block */)terminationHandler;
- (void)setReceiveHandler:(id /* block */)arg0;
- (id /* block */)receiveHandler;
- (char)processSocketRead;
- (void)vcArg:(id)arg0 sendRealTimeData:(NSData *)arg1 toParticipantID:(NSString *)arg2;
- (LoopbackIDSTunnel *)initWithSocket:(int)arg0 error:(id *)arg1;
- (void)callTerminationHandlerWithError:(NSError *)arg0;
- (char)stopIDSReceiveThread;

@end
