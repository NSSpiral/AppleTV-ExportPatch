/* Runtime dump - SAAnswerDefinitionEntry
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerDefinitionEntry : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * definition;
@property (copy, nonatomic) NSArray * examples;
@property (copy, nonatomic) NSArray * variations;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAAnswerDefinitionEntry *)definitionEntry;
+ (NSDictionary *)definitionEntryWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)definition;
- (NSString *)encodedClassName;
- (void)setDefinition:(NSString *)arg0;
- (NSArray *)examples;
- (void)setExamples:(NSArray *)arg0;
- (NSArray *)variations;
- (void)setVariations:(NSArray *)arg0;

@end
