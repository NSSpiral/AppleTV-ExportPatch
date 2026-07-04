/* Runtime dump - SAGKDirectAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKDirectAnswer : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * answer;
@property (retain, nonatomic) SAGKSpeakableAnswer * speakableAnswer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAGKDirectAnswer *)directAnswer;
+ (NSDictionary *)directAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)setAnswer:(NSString *)arg0;
- (SAGKSpeakableAnswer *)speakableAnswer;
- (void)setSpeakableAnswer:(SAGKSpeakableAnswer *)arg0;
- (NSString *)answer;

@end
