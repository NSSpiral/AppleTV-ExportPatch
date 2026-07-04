/* Runtime dump - SASStartSpeechDictation
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartSpeechDictation : SASStartSpeech

@property (copy, nonatomic) NSData * activationToken;
@property (copy, nonatomic) NSString * applicationName;
@property (copy, nonatomic) NSString * applicationVersion;
@property (nonatomic) char censorSpeech;
@property (copy, nonatomic) NSString * fieldId;
@property (copy, nonatomic) NSString * fieldLabel;
@property (copy, nonatomic) NSString * interactionId;
@property (copy, nonatomic) NSString * keyboardReturnKey;
@property (copy, nonatomic) NSString * keyboardType;
@property (copy, nonatomic) NSString * language;
@property (copy, nonatomic) NSString * postfixText;
@property (copy, nonatomic) NSString * prefixText;
@property (copy, nonatomic) NSString * region;
@property (copy, nonatomic) NSString * selectedText;

+ (SASStartSpeechDictation *)startSpeechDictation;
+ (NSDictionary *)startSpeechDictationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)keyboardType;
- (void)setKeyboardType:(NSString *)arg0;
- (NSString *)selectedText;
- (void)setRegion:(NSString *)arg0;
- (NSString *)region;
- (void)setApplicationName:(NSString *)arg0;
- (void)setApplicationVersion:(NSString *)arg0;
- (NSString *)language;
- (NSString *)prefixText;
- (void)setFieldLabel:(NSString *)arg0;
- (void)setPrefixText:(NSString *)arg0;
- (void)setPostfixText:(NSString *)arg0;
- (void)setSelectedText:(NSString *)arg0;
- (NSString *)postfixText;
- (void)setLanguage:(NSString *)arg0;
- (NSString *)applicationVersion;
- (NSString *)fieldId;
- (void)setFieldId:(NSString *)arg0;
- (NSString *)applicationName;
- (NSString *)encodedClassName;
- (NSData *)activationToken;
- (void)setActivationToken:(NSData *)arg0;
- (char)censorSpeech;
- (void)setCensorSpeech:(char)arg0;
- (NSString *)fieldLabel;
- (NSString *)interactionId;
- (void)setInteractionId:(NSString *)arg0;
- (NSString *)keyboardReturnKey;
- (void)setKeyboardReturnKey:(NSString *)arg0;

@end
