/* Runtime dump - SAAnswerSpeakableAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSpeakableAnswer : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSDictionary * parameters;
@property (copy, nonatomic) NSString * templateName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAGKSpeakableAnswer *)speakableAnswer;
+ (NSDictionary *)speakableAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSDictionary *)parameters;
- (void)setParameters:(NSDictionary *)arg0;
- (NSString *)encodedClassName;
- (NSString *)templateName;
- (void)setTemplateName:(NSString *)arg0;

@end
