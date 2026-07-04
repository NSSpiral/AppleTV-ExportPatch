/* Runtime dump - GKVoiceChatService
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKVoiceChatService : NSObject
{
    id _voiceChatService;
}

@property <GKVoiceChatClient> * client;
@property (nonatomic) char microphoneMuted;
@property (nonatomic) float remoteParticipantVolume;
@property (nonatomic) char outputMeteringEnabled;
@property (nonatomic) char inputMeteringEnabled;
@property (readonly) float outputMeterLevel;
@property (readonly) float inputMeterLevel;

+ (void)initialize;
+ (char)isVoIPAllowed;
+ (GKVoiceChatService *)defaultVoiceChatService;

- (void)dealloc;
- (void)receivedRealTimeData:(NSData *)arg0 fromParticipantID:(NSObject *)arg1;
- (char)isOutputMeteringEnabled;
- (void)setOutputMeteringEnabled:(char)arg0;
- (char)isInputMeteringEnabled;
- (void)setInputMeteringEnabled:(char)arg0;
- (float)outputMeterLevel;
- (float)inputMeterLevel;
- (void)setMicrophoneMuted:(char)arg0;
- (char)isMicrophoneMuted;
- (char)startVoiceChatWithParticipantID:(NSString *)arg0 error:(id *)arg1;
- (char)acceptCallID:(int)arg0 error:(id *)arg1;
- (void)denyCallID:(int)arg0;
- (void)receivedData:(NSMutableData *)arg0 fromParticipantID:(NSObject *)arg1;
- (void)stopVoiceChatWithParticipantID:(NSString *)arg0;
- (float)remoteParticipantVolume;
- (void)setRemoteParticipantVolume:(float)arg0;
- (void)setClient:(<GKVoiceChatClient> *)arg0;
- (<GKVoiceChatClient> *)client;

@end
