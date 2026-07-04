/* Runtime dump - VideoConferenceManager
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VideoConferenceManager : NSObject <VideoConferenceDelegate>
{
    id _clientUUID;
    struct _opaque_pthread_mutex_t stateLock;
    struct _opaque_pthread_mutex_t sipLock;
    NSMutableArray * vcList;
    VideoConference * activeConference;
    VideoConference * conferenceWithMic;
    ICEResultWaitQueue * resultQueue;
    struct tagHANDLE * hSIP;
    int sipRefCount;
    GKNATObserver * natObserver;
    char isVTPInitialized;
}

@property VideoConference * activeConference;
@property VideoConference * conferenceWithMic;
@property (readonly) ICEResultWaitQueue * resultQueue;
@property (readonly) NSMutableArray * vcList;

+ (VideoConferenceManager *)defaultVideoConferenceManager;
+ (void)addNSError:(NSError *)arg0 toConferenceXPCArgumentDictionary:(NSDictionary *)arg1;

- (VideoConferenceManager *)init;
- (void)videoConference:(VideoConference *)arg0 didStartSession:(char)arg1 withCallID:(unsigned long)arg2 error:(NSError *)arg3;
- (void)videoConference:(VideoConference *)arg0 didStartSession:(char)arg1 withCallID:(unsigned long)arg2 withUserInfo:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)videoConference:(VideoConference *)arg0 didStopWithCallID:(unsigned long)arg1 error:(NSError *)arg2 callMetadata:(NSDictionary *)arg3;
- (void)videoConference:(VideoConference *)arg0 remoteMediaStalled:(char)arg1 callID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg0 didReceiveFirstRemoteFrameForCallID:(unsigned long)arg1;
- (void)videoConference:(VideoConference *)arg0 didRemoteVideoAttributesChange:(VideoAttributes *)arg1 forCallID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg0 remoteAudioPaused:(char)arg1 callID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg0 remoteVideoPaused:(char)arg1 callID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg0 didRemoteScreenAttributesChange:(VideoAttributes *)arg1 forCallID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg0 updateInputFrequencyLevel:(NSData *)arg1;
- (void)videoConference:(VideoConference *)arg0 updateOutputFrequencyLevel:(NSData *)arg1;
- (void)videoConference:(VideoConference *)arg0 updateInputMeterLevel:(float)arg1;
- (void)videoConference:(VideoConference *)arg0 updateOutputMeterLevel:(float)arg1;
- (void)videoConference:(VideoConference *)arg0 inititiateRelayRequest:(unsigned long)arg1 requestDict:(NSDictionary *)arg2;
- (void)videoConference:(VideoConference *)arg0 sendRelayUpdate:(unsigned long)arg1 updateDict:(NSDictionary *)arg2;
- (void)videoConference:(VideoConference *)arg0 cancelRelayRequest:(unsigned long)arg1 requestDict:(NSDictionary *)arg2;
- (void)videoConference:(VideoConference *)arg0 videoQualityNotificationForCallID:(unsigned long)arg1 isDegraded:(char)arg2 isRemote:(char)arg3;
- (void)videoConference:(VideoConference *)arg0 withCallID:(unsigned long)arg1 networkHint:(char)arg2;
- (void)videoConference:(VideoConference *)arg0 didReceiveData:(NSData *)arg1 forCallID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg0 didChangeLocalVariablesForCallID:(unsigned long)arg1;
- (void)videoConference:(VideoConference *)arg0 remoteAudioEnabled:(char)arg1 forCallID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg0 localAudioEnabled:(char)arg1 forCallID:(unsigned long)arg2 error:(NSError *)arg3;
- (void)videoConference:(VideoConference *)arg0 closeConnectionForCallID:(unsigned long)arg1;
- (void)registerBlocksForConference;
- (void)startSIP;
- (struct tagHANDLE *)SIPHandle;
- (void)stopSIP;
- (ICEResultWaitQueue *)resultQueue;
- (void)addVideoConference:(VideoConference *)arg0;
- (void)setActiveConference:(VideoConference *)arg0;
- (void)removeVideoConference:(VideoConference *)arg0;
- (VideoConference *)conferenceWithMic;
- (void)setConferenceWithMic:(VideoConference *)arg0;
- (void)videoConference:(VideoConference *)arg0 sendIPChangeRequest:(NSData *)arg1 withCallID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg0 receivedNoRemotePacketsForTime:(double)arg1 callID:(unsigned long)arg2;
- (void)videoConference:(VideoConference *)arg0 didReceiveARPLData:(NSData *)arg1 fromCallID:(unsigned long)arg2;
- (void)createSIP;
- (void)cleanupVTP;
- (char)isSIPHandleValid:(struct tagHANDLE *)arg0;
- (NSObject *)conferenceForCallID:(unsigned long)arg0;
- (char)hasVideoConference:(VideoConference *)arg0;
- (NSObject *)conferenceForParticipantID:(NSObject *)arg0;
- (NSObject *)conferenceForIncomingConnectionResult:(struct tagCONNRESULT *)arg0;
- (void)pauseVideoConferences:(char)arg0;
- (void)broadcastCellTechChange:(int)arg0 cellularMaxPktLen:(unsigned short)arg1;
- (void)notifyPrimaryConnChangeToClient:(NSObject *)arg0 newConnResult:(struct tagCONNRESULT *)arg1;
- (void)getClientUUID:(id)arg0;
- (VideoConference *)activeConference;
- (NSMutableArray *)vcList;

@end
