/* Runtime dump - SAValueCondition
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAValueCondition : AceObject <SASupportCondition>

@property (copy, nonatomic) NSArray * legalValues;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAValueCondition *)valueCondition;
+ (NSDictionary *)valueConditionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)legalValues;
- (void)setLegalValues:(NSArray *)arg0;

@end
