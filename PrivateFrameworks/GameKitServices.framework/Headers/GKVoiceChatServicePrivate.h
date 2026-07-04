/* Runtime dump - GKVoiceChatServicePrivate
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate, VideoConferenceRealTimeChannel>
{
    <GKVoiceChatClient> * client;
    char outputMeteringEnabled;
    char inputMeteringEnabled;
    char microphoneMuted;
    unsigned long curCallID;
    int state;
    GKVoiceChatDictionary * incomingCallDict;
    GKVoiceChatDictionary * outgoingCallDict;
    NSString * sdp;
    struct tagCONNRESULT currentConnResult;
    LoopbackSocketTunnel * tunnel;
    NSRecursiveLock * stateLock;
    NSLock * clientLock;
    GKVoiceChatService * wrapperService;
    int didUseICE;
    int bundle;
    char forceNoICE;
    VideoConference * conf;
    char clientHasRTChannel;
    int chatMode;
    char focus;
}

@property int state;
@property int chatMode;
@property GKVoiceChatService * wrapperService;
@property (nonatomic) id client;
@property char microphoneMuted;
@property float remoteParticipantVolume;
@property char outputMeteringEnabled;
@property char inputMeteringEnabled;
@property (readonly, nonatomic) float outputMeterLevel;
@property (readonly, nonatomic) float inputMeterLevel;
@property char focus;
@property (nonatomic) void * localVideoLayer;
@property (nonatomic) void * remoteVideoLayer;
@property (readonly) double localFramerate;
@property (readonly) double localBitrate;
@property (readonly) double remoteFramerate;
@property (readonly) double remoteBitrate;

+ (GKVoiceChatServicePrivate *)defaultVoiceChatService;

- (void)dealloc;
- (GKVoiceChatServicePrivate *)init;
- (int)state;
- (void)setState:(int)arg0;
- (void)cleanup;
- (void)setRemoteVideoLayer:(void *)arg0;
- (void)receivedRealTimeData:(NSData *)arg0 fromParticipantID:(NSObject *)arg1;
- (char)isOutputMeteringEnabled;
- (void)setOutputMeteringEnabled:(char)arg0;
- (char)isInputMeteringEnabled;
- (void)setInputMeteringEnabled:(char)arg0;
- (float)outputMeterLevel;
- (float)inputMeterLevel;
- (void)setMicrophoneMuted:(char)arg0;
- (char)isMicrophoneMuted;
- (void *)remoteVideoLayer;
- (void)videoConference:(VideoConference *)arg0 didStartSession:(char)arg1 withCallID:(unsigned long)arg2 error:(NSError *)arg3;
- (void)videoConference:(VideoConference *)arg0 didStopWithCallID:(unsigned long)arg1 error:(NSError *)arg2;
- (void)vcArg:(id)arg0 sendRealTimeData:(NSData *)arg1 toParticipantID:(NSString *)arg2;
- (void)setChatMode:(int)arg0;
- (void)forceNoICE:(char)arg0;
- (int)chatMode;
- (char)isFocus;
- (void)setFocus:(char)arg0;
- (void)getNSError:(id *)arg0 code:(int)arg1 description:(NSString *)arg2 reason:(NSString *)arg3;
- (id)createInvite:(id *)arg0 toParticipant:(EKParticipant *)arg1 callID:(unsigned int *)arg2;
- (NSDictionary *)createReplyUsingDictionary:(NSDictionary *)arg0 replyCode:(unsigned int)arg1 error:(id *)arg2;
- (int)startICEConnectionCheck:(id)arg0 isCaller:(char)arg1 withCallID:(unsigned long)arg2;
- (void)informClientVoiceChatDidNotStart:(id)arg0;
- (void)informClientOfInviteFromParticipant:(id)arg0;
- (void)informClientVoiceChatDidStart:(id)arg0;
- (void)informClientVoiceChatDidStop:(id)arg0;
- (char)startVoiceChatWithParticipantID:(NSString *)arg0 error:(id *)arg1;
- (void)stopVoiceChatProc:(id)arg0;
- (char)acceptCallID:(unsigned long)arg0 error:(id *)arg1;
- (void)denyCallID:(unsigned long)arg0;
- (void)receivedData:(NSMutableData *)arg0 fromParticipantID:(NSObject *)arg1;
- (void)setLocalVideoLayer:(void *)arg0;
- (void *)localVideoLayer;
- (double)localFramerate;
- (double)localBitrate;
- (double)remoteFramerate;
- (double)remoteBitrate;
- (NSObject *)localDisplayNameForCallID:(unsigned long)arg0;
- (NSObject *)remoteDisplayNameForCallID:(unsigned long)arg0;
- (int)startICEConnectionCheck:(id)arg0 isCaller:(char)arg1;
- (void)informClientVoiceChatDidStartMainSelector:(NSString *)arg0;
- (void)informClientVoiceChatDidNotStartMainSelector:(NSString *)arg0;
- (char)inviteIsValid:(id)arg0;
- (void)stopVoiceChatWithParticipantID:(NSString *)arg0;
- (void)getNSError:(id *)arg0 code:(int)arg1 description:(NSString *)arg2 hResult:(long)arg3;
- (float)remoteParticipantVolume;
- (void)setRemoteParticipantVolume:(float)arg0;
- (GKVoiceChatService *)wrapperService;
- (void)setWrapperService:(GKVoiceChatService *)arg0;
- (void)setClient:(<GKVoiceChatClient> *)arg0;
- (<GKVoiceChatClient> *)client;
- (void)resetState;

@end
