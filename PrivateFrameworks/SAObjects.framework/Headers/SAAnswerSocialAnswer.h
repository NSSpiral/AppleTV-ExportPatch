/* Runtime dump - SAAnswerSocialAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSocialAnswer : SAAnswerAbstractSocialPost

@property (copy, nonatomic) NSNumber * selectedAnswer;

+ (SAAnswerSocialAnswer *)socialAnswer;
+ (NSDictionary *)socialAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSNumber *)selectedAnswer;
- (void)setSelectedAnswer:(NSNumber *)arg0;

@end
