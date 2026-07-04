/* Runtime dump - SAAnswerDomainObjectSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerDomainObjectSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut * answerPunchOut;
@property (copy, nonatomic) NSArray * answers;

+ (SAAnswerDomainObjectSnippet *)domainObjectSnippet;
+ (NSDictionary *)domainObjectSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SAUIAppPunchOut *)answerPunchOut;
- (void)setAnswerPunchOut:(SAUIAppPunchOut *)arg0;
- (NSArray *)answers;
- (void)setAnswers:(NSArray *)arg0;

@end
