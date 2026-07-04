/* Runtime dump - SAAnswerDictionaryStructuredAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (copy, nonatomic) NSString * category;
@property (copy, nonatomic) NSArray * definitionGroups;
@property (copy, nonatomic) NSString * phoneticPronunciation;
@property (copy, nonatomic) NSURL * sound;
@property (copy, nonatomic) NSArray * syllables;
@property (copy, nonatomic) NSString * word;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAAnswerDictionaryStructuredAnswer *)dictionaryStructuredAnswer;
+ (NSDictionary *)dictionaryStructuredAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setCategory:(NSString *)arg0;
- (NSString *)category;
- (NSURL *)sound;
- (void)setSound:(NSURL *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)definitionGroups;
- (void)setDefinitionGroups:(NSArray *)arg0;
- (NSString *)phoneticPronunciation;
- (void)setPhoneticPronunciation:(NSString *)arg0;
- (NSArray *)syllables;
- (void)setSyllables:(NSArray *)arg0;
- (NSString *)word;
- (void)setWord:(NSString *)arg0;

@end
