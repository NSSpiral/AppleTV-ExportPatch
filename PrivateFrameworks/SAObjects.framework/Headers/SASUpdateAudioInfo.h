/* Runtime dump - SASUpdateAudioInfo
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASUpdateAudioInfo : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * audioSource;
@property (nonatomic) int codec;
@property (copy, nonatomic) NSString * deviceIdentifier;
@property (copy, nonatomic) NSString * deviceModel;
@property (copy, nonatomic) NSString * dspStatus;
@property (copy, nonatomic) NSString * headsetAddress;
@property (copy, nonatomic) NSString * headsetId;
@property (copy, nonatomic) NSString * headsetName;
@property (copy, nonatomic) NSNumber * noiseReductionLevel;
@property (copy, nonatomic) NSString * origin;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSDictionary *)updateAudioInfo;
+ (NSDictionary *)updateAudioInfoWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)origin;
- (void)setOrigin:(NSString *)arg0;
- (NSString *)deviceIdentifier;
- (void)setDeviceIdentifier:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)audioSource;
- (void)setAudioSource:(NSString *)arg0;
- (int)codec;
- (void)setCodec:(int)arg0;
- (NSString *)deviceModel;
- (void)setDeviceModel:(NSString *)arg0;
- (NSString *)dspStatus;
- (void)setDspStatus:(NSString *)arg0;
- (NSString *)headsetAddress;
- (void)setHeadsetAddress:(NSString *)arg0;
- (NSString *)headsetId;
- (void)setHeadsetId:(NSString *)arg0;
- (NSString *)headsetName;
- (void)setHeadsetName:(NSString *)arg0;
- (NSNumber *)noiseReductionLevel;
- (void)setNoiseReductionLevel:(NSNumber *)arg0;

@end
