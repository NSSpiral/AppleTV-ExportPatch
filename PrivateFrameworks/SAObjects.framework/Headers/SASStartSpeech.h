/* Runtime dump - SASStartSpeech
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * audioSource;
@property (nonatomic) char clearContext;
@property (nonatomic) int codec;
@property (copy, nonatomic) NSString * deviceIdentifier;
@property (copy, nonatomic) NSString * deviceModel;
@property (nonatomic) char disableAutoEndpointing;
@property (copy, nonatomic) NSString * dspStatus;
@property (nonatomic) char enablePartialResults;
@property (copy, nonatomic) NSString * headsetAddress;
@property (copy, nonatomic) NSString * headsetId;
@property (copy, nonatomic) NSString * headsetName;
@property (copy, nonatomic) NSNumber * isCarryDevice;
@property (copy, nonatomic) NSString * motionActivity;
@property (copy, nonatomic) NSNumber * motionConfidence;
@property (copy, nonatomic) NSNumber * noiseReductionLevel;
@property (copy, nonatomic) NSString * origin;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SASStartSpeech *)startSpeech;
+ (NSDictionary *)startSpeechWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)origin;
- (void)setOrigin:(NSString *)arg0;
- (NSString *)deviceIdentifier;
- (void)setDeviceIdentifier:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)audioSource;
- (void)setAudioSource:(NSString *)arg0;
- (char)clearContext;
- (void)setClearContext:(char)arg0;
- (int)codec;
- (void)setCodec:(int)arg0;
- (NSString *)deviceModel;
- (void)setDeviceModel:(NSString *)arg0;
- (char)disableAutoEndpointing;
- (void)setDisableAutoEndpointing:(char)arg0;
- (NSString *)dspStatus;
- (void)setDspStatus:(NSString *)arg0;
- (char)enablePartialResults;
- (void)setEnablePartialResults:(char)arg0;
- (NSString *)headsetAddress;
- (void)setHeadsetAddress:(NSString *)arg0;
- (NSString *)headsetId;
- (void)setHeadsetId:(NSString *)arg0;
- (NSString *)headsetName;
- (void)setHeadsetName:(NSString *)arg0;
- (NSNumber *)isCarryDevice;
- (void)setIsCarryDevice:(NSNumber *)arg0;
- (NSString *)motionActivity;
- (void)setMotionActivity:(NSString *)arg0;
- (NSNumber *)motionConfidence;
- (void)setMotionConfidence:(NSNumber *)arg0;
- (NSNumber *)noiseReductionLevel;
- (void)setNoiseReductionLevel:(NSNumber *)arg0;

@end
