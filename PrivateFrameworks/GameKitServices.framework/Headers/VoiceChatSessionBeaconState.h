/* Runtime dump - VoiceChatSessionBeaconState
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface VoiceChatSessionBeaconState : NSObject
{
    struct tagVoiceChatBeacon * lastReceivedBeacon;
    unsigned int sentState;
    unsigned int receivedState;
    char needsSend;
    unsigned int typeToSend;
}

@property (nonatomic) unsigned int sentState;
@property (nonatomic) unsigned int receivedState;
@property (nonatomic) char needsSend;
@property (nonatomic) unsigned int typeToSend;

- (void)dealloc;
- (VoiceChatSessionBeaconState *)init;
- (struct tagVoiceChatBeacon *)lastReceivedBeacon;
- (void)setLastReceivedBeacon:(struct tagVoiceChatBeacon *)arg0;
- (unsigned int)sentState;
- (void)setSentState:(unsigned int)arg0;
- (unsigned int)receivedState;
- (void)setReceivedState:(unsigned int)arg0;
- (char)needsSend;
- (void)setNeedsSend:(char)arg0;
- (unsigned int)typeToSend;
- (void)setTypeToSend:(unsigned int)arg0;

@end
