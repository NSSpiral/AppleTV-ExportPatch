/* Runtime dump - SAAnswerSocialQuestion
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSocialQuestion : SAAnswerAbstractSocialPost

@property (copy, nonatomic) NSArray * socialAnswers;

+ (SAAnswerSocialQuestion *)socialQuestion;
+ (NSDictionary *)socialQuestionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)socialAnswers;
- (void)setSocialAnswers:(NSArray *)arg0;

@end
