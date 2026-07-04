/* Runtime dump - GKVoiceChatSession
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatSession : NSObject
{
    id opaqueSession;
}

@property <GKVoiceChatSessionDelegate> * delegate;
@property (readonly) NSString * sessionName;
@property (readonly) NSArray * peerList;
@property char activeSession;
@property (readonly) float inputMeter;
@property float sessionVolume;

- (void)dealloc;
- (void)setDelegate:(<GKVoiceChatSessionDelegate> *)arg0;
- (<GKVoiceChatSessionDelegate> *)delegate;
- (float)inputMeter;
- (void)startSession;
- (void)stopSession;
- (void)setMute:(char)arg0 forPeer:(NSObject *)arg1;
- (char)getMuteStateForPeer:(NSObject *)arg0;
- (NSArray *)peerList;
- (char)isActiveSession;
- (void)setActiveSession:(char)arg0;
- (float)sessionVolume;
- (void)setSessionVolume:(float)arg0;
- (GKVoiceChatSession *)initWithGKSession:(NSObject *)arg0 sessionName:(NSString *)arg1;
- (float)outputMeterForPeer:(NSObject *)arg0;
- (NSString *)sessionName;

@end
