/* Runtime dump - SASToken
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASToken : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSNumber * confidenceScore;
@property (copy, nonatomic) NSNumber * endTime;
@property (copy, nonatomic) NSString * originalText;
@property (copy, nonatomic) NSString * recognitionStability;
@property (nonatomic) char removeSpaceAfter;
@property (nonatomic) char removeSpaceBefore;
@property (copy, nonatomic) NSNumber * startTime;
@property (copy, nonatomic) NSString * text;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)token;
+ (NSDictionary *)tokenWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)af_speechToken;
- (NSString *)groupIdentifier;
- (void)setEndTime:(NSNumber *)arg0;
- (void)setStartTime:(NSNumber *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSString *)originalText;
- (NSNumber *)startTime;
- (char)removeSpaceBefore;
- (char)removeSpaceAfter;
- (NSString *)encodedClassName;
- (NSNumber *)confidenceScore;
- (void)setConfidenceScore:(NSNumber *)arg0;
- (void)setOriginalText:(NSString *)arg0;
- (NSString *)recognitionStability;
- (void)setRecognitionStability:(NSString *)arg0;
- (void)setRemoveSpaceAfter:(char)arg0;
- (void)setRemoveSpaceBefore:(char)arg0;
- (NSNumber *)endTime;

@end
