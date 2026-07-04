/* Runtime dump - SAStartRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic) char clearContext;
@property (nonatomic) char eyesFree;
@property (nonatomic) char handsFree;
@property (copy, nonatomic) NSString * hardwareBuild;
@property (copy, nonatomic) NSNumber * isCarryDevice;
@property (copy, nonatomic) NSString * motionActivity;
@property (copy, nonatomic) NSNumber * motionConfidence;
@property (copy, nonatomic) NSString * origin;
@property (retain, nonatomic) SASStartSpeech * sourceSpeechRequest;
@property (nonatomic) char talkOnly;
@property (copy, nonatomic) NSString * utterance;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSURLRequest *)startRequest;
+ (NSDictionary *)startRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)origin;
- (void)setOrigin:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)clearContext;
- (void)setClearContext:(char)arg0;
- (NSNumber *)isCarryDevice;
- (void)setIsCarryDevice:(NSNumber *)arg0;
- (NSString *)motionActivity;
- (void)setMotionActivity:(NSString *)arg0;
- (NSNumber *)motionConfidence;
- (void)setMotionConfidence:(NSNumber *)arg0;
- (NSString *)utterance;
- (void)setUtterance:(NSString *)arg0;
- (char)eyesFree;
- (void)setEyesFree:(char)arg0;
- (char)handsFree;
- (void)setHandsFree:(char)arg0;
- (char)talkOnly;
- (void)setTalkOnly:(char)arg0;
- (NSString *)hardwareBuild;
- (void)setHardwareBuild:(NSString *)arg0;
- (SASStartSpeech *)sourceSpeechRequest;
- (void)setSourceSpeechRequest:(SASStartSpeech *)arg0;

@end
