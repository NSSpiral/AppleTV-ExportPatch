/* Runtime dump - AFSpeechRequestOptions
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding>
{
    char _useBorealisBuffer;
    char _isEyesFree;
    char _useAutomaticEndpointing;
    char _useStreamingDictation;
    char _isInitialBringUp;
    char _acousticIdEnabled;
    int _activationEvent;
    NSString * _btDeviceAddress;
    NSString * _serverCommandId;
    NSNumber * _homeButtonUpFromBeep;
    int _audioFileType;
    double _activationEventTime;
    double _expectedActivationEventTime;
}

@property (nonatomic) int activationEvent;
@property (nonatomic) char useBorealisBuffer;
@property (copy, nonatomic) NSString * btDeviceAddress;
@property (nonatomic) char isEyesFree;
@property (copy, nonatomic) NSString * serverCommandId;
@property (nonatomic) char useAutomaticEndpointing;
@property (nonatomic) char useStreamingDictation;
@property (nonatomic) double activationEventTime;
@property (nonatomic) double expectedActivationEventTime;
@property (nonatomic) char isInitialBringUp;
@property (copy, nonatomic) NSNumber * homeButtonUpFromBeep;
@property (nonatomic) char acousticIdEnabled;
@property (nonatomic) int audioFileType;

+ (char)supportsSecureCoding;

- (AFSpeechRequestOptions *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (AFSpeechRequestOptions *)initWithActivationEvent:(int)arg0;
- (void)setUseStreamingDictation:(char)arg0;
- (void)setUseAutomaticEndpointing:(char)arg0;
- (NSString *)serverCommandId;
- (int)audioFileType;
- (int)activationEvent;
- (void)setActivationEvent:(int)arg0;
- (char)useBorealisBuffer;
- (void)setUseBorealisBuffer:(char)arg0;
- (NSString *)btDeviceAddress;
- (void)setBtDeviceAddress:(NSString *)arg0;
- (char)isEyesFree;
- (void)setIsEyesFree:(char)arg0;
- (void)setServerCommandId:(NSString *)arg0;
- (char)useAutomaticEndpointing;
- (char)useStreamingDictation;
- (double)activationEventTime;
- (void)setActivationEventTime:(double)arg0;
- (double)expectedActivationEventTime;
- (void)setExpectedActivationEventTime:(double)arg0;
- (char)isInitialBringUp;
- (void)setIsInitialBringUp:(char)arg0;
- (NSNumber *)homeButtonUpFromBeep;
- (void)setHomeButtonUpFromBeep:(NSNumber *)arg0;
- (char)acousticIdEnabled;
- (void)setAcousticIdEnabled:(char)arg0;
- (void)setAudioFileType:(int)arg0;

@end
