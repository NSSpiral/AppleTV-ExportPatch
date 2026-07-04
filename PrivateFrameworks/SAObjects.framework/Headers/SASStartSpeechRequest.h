/* Runtime dump - SASStartSpeechRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartSpeechRequest : SASStartSpeech

@property (nonatomic) char eyesFree;
@property (nonatomic) char handsFree;
@property (nonatomic) char talkOnly;
@property (copy, nonatomic) NSDictionary * voiceTriggerEventInfo;
@property (copy, nonatomic) NSArray * voiceTriggerPhrases;

+ (NSURLRequest *)startSpeechRequest;
+ (NSDictionary *)startSpeechRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)eyesFree;
- (void)setEyesFree:(char)arg0;
- (char)handsFree;
- (void)setHandsFree:(char)arg0;
- (char)talkOnly;
- (void)setTalkOnly:(char)arg0;
- (NSDictionary *)voiceTriggerEventInfo;
- (void)setVoiceTriggerEventInfo:(NSDictionary *)arg0;
- (NSArray *)voiceTriggerPhrases;
- (void)setVoiceTriggerPhrases:(NSArray *)arg0;

@end
