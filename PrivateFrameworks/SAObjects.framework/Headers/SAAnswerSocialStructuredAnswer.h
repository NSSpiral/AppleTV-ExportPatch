/* Runtime dump - SAAnswerSocialStructuredAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSocialStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (copy, nonatomic) NSString * category;
@property (copy, nonatomic) NSArray * socialQuestions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAAnswerSocialStructuredAnswer *)socialStructuredAnswer;
+ (NSDictionary *)socialStructuredAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setCategory:(NSString *)arg0;
- (NSString *)category;
- (NSString *)encodedClassName;
- (NSArray *)socialQuestions;
- (void)setSocialQuestions:(NSArray *)arg0;

@end
