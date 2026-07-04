/* Runtime dump - SAAnswerDirectAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerDirectAnswer : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * answer;
@property (retain, nonatomic) SAAnswerSpeakableAnswer * speakableAnswer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAGKDirectAnswer *)directAnswer;
+ (NSDictionary *)directAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)setAnswer:(NSString *)arg0;
- (SAAnswerSpeakableAnswer *)speakableAnswer;
- (void)setSpeakableAnswer:(SAAnswerSpeakableAnswer *)arg0;
- (NSString *)answer;

@end
