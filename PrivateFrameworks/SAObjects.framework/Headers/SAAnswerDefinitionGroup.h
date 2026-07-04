/* Runtime dump - SAAnswerDefinitionGroup
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * definitionEntries;
@property (copy, nonatomic) NSString * origin;
@property (copy, nonatomic) NSString * partOfSpeech;
@property (copy, nonatomic) NSArray * synonyms;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)definitionGroup;
+ (NSDictionary *)definitionGroupWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)origin;
- (void)setOrigin:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)definitionEntries;
- (void)setDefinitionEntries:(NSArray *)arg0;
- (NSString *)partOfSpeech;
- (void)setPartOfSpeech:(NSString *)arg0;
- (NSArray *)synonyms;
- (void)setSynonyms:(NSArray *)arg0;

@end
