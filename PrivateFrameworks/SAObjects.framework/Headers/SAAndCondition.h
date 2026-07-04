/* Runtime dump - SAAndCondition
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAndCondition : AceObject <SASupportCondition>

@property (copy, nonatomic) NSArray * conditions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAAndCondition *)andCondition;
+ (NSDictionary *)andConditionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)conditions;
- (void)setConditions:(NSArray *)arg0;

@end
