/* Runtime dump - TUTelephonyCall
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUTelephonyCall : TUCall
{
    struct __CTCall * _call;
}

+ (void)playDTMFToneForKey:(unsigned char)arg0;
+ (int)callStatusForCTCallStatusType:(int)arg0;
+ (void)stopPlayingDTMFTone;

- (struct __CTCall *)call;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (void)disconnect;
- (double)startTime;
- (NSString *)audioCategory;
- (int)service;
- (char)isBlocked;
- (int)callStatus;
- (int)supportedModelType;
- (NSString *)audioMode;
- (void)answerWithSourceIdentifier:(NSString *)arg0;
- (char)isOutgoing;
- (char)isUplinkMuted;
- (char)setUplinkMuted:(char)arg0;
- (char)isDownlinkMuted;
- (char)setDownlinkMuted:(char)arg0;
- (NSString *)destinationID;
- (void)updateForDisconnection;
- (char)isConferenced;
- (void)joinConference;
- (void)leaveConference;
- (NSString *)callerNameFromNetwork;
- (char)isAlerting;
- (int)callIdentifier;
- (NSString *)callUUID;
- (int)faceTimeIDStatus;
- (char)managesAudioInterruptions;
- (char)isTTY;
- (char)isVoicemail;
- (TUTelephonyCall *)initWithCall:(struct __CTCall *)arg0;
- (void)hold;
- (void)unhold;
- (void)playDTMFToneForKey:(unsigned char)arg0;
- (char)hasSupport:(int)arg0;
- (char)isEmergencyCall;
- (long)causeCode;
- (char)allowsTTYSettingChanges;
- (void)emergencyCallStatusChangedNotification:(NSNotification *)arg0;
- (void)_refreshFaceTimeIDSStatus;
- (char)isWiFiCall;
- (double)callDuration;

@end
