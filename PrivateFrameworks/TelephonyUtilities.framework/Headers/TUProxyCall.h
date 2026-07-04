/* Runtime dump - TUProxyCall
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUProxyCall : TUCall <NSSecureCoding>
{
    char _conferenced;
    char _outgoing;
    char _voicemail;
    int _status;
    int _callIdentifier;
    NSString * _destinationID;
    int _service;
    NSString * _conferenceIdentifier;
    NSString * _callerNameFromNetwork;
    double _startTime;
}

@property (copy, nonatomic) NSString * destinationID;
@property (nonatomic) int callIdentifier;
@property (copy, nonatomic) NSString * displayName;
@property (nonatomic) int status;
@property (nonatomic) double startTime;
@property (nonatomic) char conferenced;
@property (nonatomic) int service;
@property (nonatomic) char outgoing;
@property (retain, nonatomic) NSString * conferenceIdentifier;
@property (nonatomic) char voicemail;
@property (copy, nonatomic) NSString * callerNameFromNetwork;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (TUProxyCall *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setStartTime:(double)arg0;
- (void)disconnect;
- (double)startTime;
- (int)status;
- (void)setStatus:(int)arg0;
- (NSString *)audioCategory;
- (void)setService:(int)arg0;
- (int)service;
- (int)supportedModelType;
- (NSString *)audioMode;
- (void)answerWithSourceIdentifier:(NSString *)arg0;
- (char)isOutgoing;
- (char)isUplinkMuted;
- (char)setUplinkMuted:(char)arg0;
- (char)isDownlinkMuted;
- (char)setDownlinkMuted:(char)arg0;
- (char)isSendingAudio;
- (void)setIsSendingAudio:(char)arg0;
- (NSString *)destinationID;
- (char)isConferenced;
- (void)joinConference;
- (void)leaveConference;
- (NSString *)callerNameFromNetwork;
- (int)callIdentifier;
- (NSString *)callUUID;
- (char)managesAudioInterruptions;
- (NSData *)localFrequency;
- (NSString *)conferenceIdentifier;
- (NSData *)remoteFrequency;
- (char)isVoicemail;
- (void)setDestinationID:(NSString *)arg0;
- (void)setCallIdentifier:(int)arg0;
- (void)setConferenceIdentifier:(NSString *)arg0;
- (void)setCallerNameFromNetwork:(NSString *)arg0;
- (void)updateWithCall:(id)arg0;
- (TUProxyCall *)initWithDestinationID:(NSString *)arg0 service:(int)arg1 status:(int)arg2 sourceIdentifier:(NSString *)arg3 outgoing:(char)arg4 conferenceIdentifier:(NSString *)arg5 voicemail:(char)arg6 callerNameFromNetwork:(NSString *)arg7;
- (TUProxyCall *)initWithCall:(CTCall *)arg0;
- (void)hold;
- (void)unhold;
- (void)playDTMFToneForKey:(unsigned char)arg0;
- (char)isHostedOnCurrentDevice;
- (char)supportsRelayingCallState;
- (char)supportsRelayingAudioOrVideo;
- (void)setConferenced:(char)arg0;
- (void)setOutgoing:(char)arg0;
- (void)setVoicemail:(char)arg0;
- (double)callDuration;

@end
