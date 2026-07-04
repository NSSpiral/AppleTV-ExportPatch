/* Runtime dump - TUFaceTimeCall
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUFaceTimeCall : TUCall
{
    IMAVChat * _chat;
}

@property (retain, nonatomic) IMAVChat * chat;

+ (NSNumber *)sourceAccount:(char)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (void)disconnect;
- (double)startTime;
- (char)isBlocked;
- (IMAVChat *)chat;
- (void)answerWithSourceIdentifier:(NSString *)arg0;
- (char)isOutgoing;
- (int)endedError;
- (char)wasDeclined;
- (char)shouldPlayHoldMusic;
- (void)resetWantsHoldMusic;
- (char)isUplinkMuted;
- (char)setUplinkMuted:(char)arg0;
- (char)isDownlinkMuted;
- (char)setDownlinkMuted:(char)arg0;
- (char)isSendingAudio;
- (void)setIsSendingAudio:(char)arg0;
- (NSString *)destinationID;
- (TUFaceTimeCall *)initWithChat:(IMAVChat *)arg0;
- (void)inviteWithCallIdentifier:(int)arg0;
- (void)updateForDisconnection;
- (char)isStatusFinal;
- (char)shouldPlayDTMFTone;
- (char)isConferenced;
- (void)joinConference;
- (void)leaveConference;
- (IMAVChatParticipant *)remoteParticipant;
- (NSString *)callerNameFromNetwork;
- (char)isAlerting;
- (int)callIdentifier;
- (NSString *)callUUID;
- (NSString *)callHistoryIdentifier;
- (id)totalDataUsed;
- (int)faceTimeIDStatus;
- (char)managesAudioInterruptions;
- (char)needsManualInCallSounds;
- (char)playsConnectedSound;
- (char)isTTY;
- (float)localVolume;
- (NSData *)localFrequency;
- (char)managesAudioRelay;
- (NSString *)conferenceIdentifier;
- (NSData *)remoteFrequency;
- (NSDictionary *)conferenceInviteDictionary;
- (NSDictionary *)remoteUnavailableUserInfo;
- (void)setChat:(IMAVChat *)arg0;
- (unsigned int)endedReason;
- (double)callDuration;

@end
