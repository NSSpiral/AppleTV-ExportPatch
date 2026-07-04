/* Runtime dump - GKVoiceChatServiceFocus
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatServiceFocus : GKVoiceChatServicePrivate
{
    NSMutableArray * outgoingCallDictList;
    NSMutableArray * incomingCallDictList;
    int incomingUID;
    NSString * currentFocus;
    int packetsPerBundle;
    char hasMic;
}

@property (copy, nonatomic) NSString * currentFocus;
@property int packetsPerBundle;
@property char hasMic;

+ (GKVoiceChatServiceFocus *)defaultVoiceChatService;

- (void)dealloc;
- (GKVoiceChatServiceFocus *)init;
- (void)setRemoteVideoLayer:(void *)arg0;
- (void *)remoteVideoLayer;
- (void)videoConference:(VideoConference *)arg0 didStartSession:(char)arg1 withCallID:(unsigned long)arg2 error:(NSError *)arg3;
- (void)videoConference:(VideoConference *)arg0 didStopWithCallID:(unsigned long)arg1 error:(NSError *)arg2;
- (int)packetsPerBundle;
- (void)setQualityDelegate:(NSObject<VideoConferenceChannelQualityDelegate> *)arg0;
- (void)setPacketsPerBundle:(int)arg0;
- (void)setShouldTimeoutPackets:(char)arg0;
- (void)setIsUsingSuppression:(char)arg0;
- (void)setChatMode:(int)arg0;
- (void)setCurrentFocus:(NSString *)arg0;
- (void)updatedMutedPeers:(id)arg0 forParticipantID:(NSObject *)arg1;
- (void)updatedConnectedPeers:(id)arg0;
- (void)setHasMic:(char)arg0;
- (char)hasMic;
- (NSString *)currentFocus;
- (void)setSpeakingDelegate:(NSObject<VideoConferenceSpeakingDelegate> *)arg0;
- (void)setTalkingPeersLimit:(unsigned int)arg0;
- (void)setFocus:(char)arg0;
- (void)remoteCancelledProc:(id)arg0;
- (void)stopVoiceChatProc:(id)arg0 participantDidCancel:(char)arg1;
- (NSObject *)openOutgoingDictionaryForParticipantID:(NSObject *)arg0;
- (NSObject *)dictionaryForCallID:(unsigned long)arg0 isIncomingDictonary:(char)arg1;
- (char)processInviteDictionary:(NSDictionary *)arg0 fromParticipantID:(NSObject *)arg1;
- (char)processReplyDict:(id)arg0;
- (char)processCancelDict:(id)arg0;
- (char)processFocusDict:(id)arg0 fromParticipantID:(NSObject *)arg1;
- (char)processInviteDictionaryForTie:(id)arg0 fromParticipantID:(NSObject *)arg1;
- (NSObject *)dictionaryForParticipantID:(NSObject *)arg0 isIncomingDictonary:(char)arg1;
- (NSDictionary *)dictionaryForNonce:(int)arg0 participantID:(NSString *)arg1 isIncomingDictonary:(char)arg2;
- (NSObject *)incomingDictionaryMatchingOriginalCallID:(unsigned long)arg0 participantID:(NSString *)arg1;
- (char)processFocusChange:(NSDictionary *)arg0 fromParticipantID:(NSObject *)arg1;
- (char)startVoiceChatWithParticipantID:(NSString *)arg0 error:(id *)arg1;
- (void)remoteCancelled:(id)arg0;
- (void)stopVoiceChatProc:(id)arg0;
- (char)acceptCallID:(unsigned long)arg0 error:(id *)arg1;
- (void)denyCallID:(unsigned long)arg0;
- (void)receivedData:(NSMutableData *)arg0 fromParticipantID:(NSObject *)arg1;
- (void)sendFocusChange:(char)arg0;
- (void)setLocalVideoLayer:(void *)arg0;
- (void *)localVideoLayer;
- (double)localFramerate;
- (double)localBitrate;
- (double)remoteFramerate;
- (double)remoteBitrate;
- (NSObject *)localDisplayNameForCallID:(unsigned long)arg0;
- (NSObject *)remoteDisplayNameForCallID:(unsigned long)arg0;
- (char)isAudioPausedToParticipantID:(NSObject *)arg0;
- (void)pauseAudio:(char)arg0 toParticipantID:(NSString *)arg1;

@end
