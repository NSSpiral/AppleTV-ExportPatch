/* Runtime dump - SACreateAssistant
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSData * activationToken;
@property (copy, nonatomic) NSString * connectionMode;
@property (copy, nonatomic) NSString * connectionType;
@property (copy, nonatomic) NSString * language;
@property (copy, nonatomic) NSString * linkedAssistantId;
@property (copy, nonatomic) NSString * linkedSpeechId;
@property (copy, nonatomic) NSData * linkedValidationData;
@property (copy, nonatomic) NSString * speechId;
@property (copy, nonatomic) NSData * validationData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SACreateAssistant *)createAssistant;
+ (NSDictionary *)createAssistantWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (NSString *)connectionMode;
- (NSString *)connectionType;
- (void)setConnectionType:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSData *)activationToken;
- (void)setActivationToken:(NSData *)arg0;
- (NSString *)speechId;
- (void)setSpeechId:(NSString *)arg0;
- (void)setConnectionMode:(NSString *)arg0;
- (NSString *)linkedAssistantId;
- (void)setLinkedAssistantId:(NSString *)arg0;
- (NSString *)linkedSpeechId;
- (void)setLinkedSpeechId:(NSString *)arg0;
- (NSData *)linkedValidationData;
- (void)setLinkedValidationData:(NSData *)arg0;
- (NSData *)validationData;
- (void)setValidationData:(NSData *)arg0;

@end
