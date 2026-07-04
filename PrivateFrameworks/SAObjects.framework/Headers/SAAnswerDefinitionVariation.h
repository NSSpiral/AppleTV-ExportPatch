/* Runtime dump - SAAnswerDefinitionVariation
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerDefinitionVariation : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * examples;
@property (copy, nonatomic) NSString * variation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAAnswerDefinitionVariation *)definitionVariation;
+ (NSDictionary *)definitionVariationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)examples;
- (void)setExamples:(NSArray *)arg0;
- (NSString *)variation;
- (void)setVariation:(NSString *)arg0;

@end
