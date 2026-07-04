/* Runtime dump - GKVoiceChatSessionInternal
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatSessionInternal : NSObject <GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate, InterfaceListenerDelegate>
{
    NSString * _sessionName;
    unsigned int _conferenceID;
    char activeSession;
    float sessionVolume;
    char focusCallbacks;
    GKSessionInternal * _gkSession;
    NSString * _peerID;
    NSMutableArray * _connectedPeers;
    NSMutableArray * _focusPausedPeers;
    NSMutableArray * _connectedVoicePeers;
    NSMutableArray * _connectedFocusPeers;
    NSMutableArray * _mutedPeers;
    NSMutableArray * _myPausedList;
    NSMutableDictionary * _peerChannelQuality;
    char needsRecalculateGoodChannels;
    int goodChannels;
    unsigned int talkingPeersLimit;
    char isUsingSuppression;
    unsigned int _sessionState;
    GKRWLock * _rwLock;
    GKVoiceChatServiceFocus * _vcService;
    VoiceChatSessionRoster * _roster;
    NSObject<OS_dispatch_queue> * _sendQueue;
    <GKVoiceChatSessionDelegate> * delegate;
    unsigned int congestionState;
    id _publicWrapper;
    GKInterfaceListener * _wifiListener;
    char _currentWifiState;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property <GKVoiceChatSessionDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * sessionName;
@property (readonly, nonatomic) unsigned int conferenceID;
@property (readonly) NSArray * peerList;
@property char activeSession;
@property float sessionVolume;
@property unsigned int talkingPeersLimit;
@property char isUsingSuppression;

+ (void)brokenHash:(id)arg0 response:(char *)arg1;

- (void)dealloc;
- (void)setDelegate:(<GKVoiceChatSessionDelegate> *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (<GKVoiceChatSessionDelegate> *)delegate;
- (void)cleanup;
- (NSString *)participantID;
- (void)interfaceStateDidChangeWithWifiUp:(char)arg0 cellUp:(char)arg1;
- (void)networkStateDidChange;
- (void)lossRate:(float)arg0 forParticipantID:(NSObject *)arg1;
- (void)setIsUsingSuppression:(char)arg0;
- (void)didStartSpeaking:(NSString *)arg0;
- (void)didStopSpeaking:(NSString *)arg0;
- (void)updatedConnectedPeers:(id)arg0;
- (char)isUsingSuppression;
- (unsigned int)talkingPeersLimit;
- (void)setTalkingPeersLimit:(unsigned int)arg0;
- (void)cleanupProc:(id)arg0;
- (void)session:(GKSession *)arg0 peer:(NSString *)arg1 didChangeState:(int)arg2;
- (void)voiceChatService:(GKVoiceChatService *)arg0 sendData:(NSData *)arg1 toParticipantID:(NSString *)arg2;
- (void)informClientVoiceChatDidStart:(id)arg0;
- (void)informClientVoiceChatDidStop:(id)arg0;
- (void)voiceChatService:(GKVoiceChatService *)arg0 didReceiveInvitationFromParticipantID:(NSString *)arg1 callID:(unsigned long)arg2;
- (void)voiceChatService:(GKVoiceChatService *)arg0 didStartWithParticipantID:(NSString *)arg1;
- (void)voiceChatService:(GKVoiceChatService *)arg0 didNotStartWithParticipantID:(NSString *)arg1 error:(NSError *)arg2;
- (void)voiceChatService:(GKVoiceChatService *)arg0 didStopWithParticipantID:(NSString *)arg1 error:(NSError *)arg2;
- (GKVoiceChatSessionInternal *)initWithGKSession:(NSObject *)arg0 publicWrapper:(NSObject *)arg1 sessionName:(NSString *)arg2;
- (void)startSession;
- (void)stopSession;
- (void)setMute:(char)arg0 forPeer:(NSObject *)arg1;
- (char)getMuteStateForPeer:(NSObject *)arg0;
- (NSArray *)peerList;
- (char)isActiveSession;
- (void)setActiveSession:(char)arg0;
- (float)sessionVolume;
- (void)setSessionVolume:(float)arg0;
- (void)startSessionInternal;
- (void)stopSessionInternal;
- (void)calculateConferenceID;
- (NSObject *)encodePeerID:(NSObject *)arg0;
- (void)updatedMutedPeers:(id)arg0 forPeer:(NSObject *)arg1;
- (void)sendMutedPeers;
- (void)updatedSubscribedBeaconList:(NSArray *)arg0;
- (unsigned int)conferenceID;
- (void)sendConnectedPeers;
- (void)informClientVoiceChatConnecting:(id)arg0;
- (void)handlePeerDisconnected:(id)arg0;
- (void)unPauseAll;
- (void)updatedFocusPeers:(id)arg0;
- (void)informClientVoiceChatFocusChange:(NSDictionary *)arg0;
- (void)addPeerToFocusPausedList:(NSArray *)arg0;
- (int)goodChannels;
- (NSObject *)decodePeerID:(NSObject *)arg0;
- (void)updatedFocusID:(unsigned int)arg0;
- (void)parseMutedPeers:(id)arg0 forPeer:(NSObject *)arg1;
- (void)pauseAll;
- (void)pruneBadLinks;
- (void)removeFromFocusPausedList:(NSArray *)arg0;
- (void)parseConnectedPeers:(id)arg0;
- (unsigned int)peerCount;
- (void)session:(NSObject *)arg0 didReceiveAudioPacket:(NSData *)arg1 fromPeerID:(NSString *)arg2;
- (void)session:(NSObject *)arg0 didReceiveOOBAudioPacket:(NSData *)arg1 fromPeerID:(NSString *)arg2;
- (void)informClientVoiceChatCouldNotConnect:(id)arg0;
- (void)informClientVoiceChatSpeaking:(id)arg0;
- (void)informClientVoiceChatSilent:(id)arg0;
- (int)calculateChannelQualities;
- (NSString *)sessionName;

@end
