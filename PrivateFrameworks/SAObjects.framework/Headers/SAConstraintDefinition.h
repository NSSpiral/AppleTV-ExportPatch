/* Runtime dump - SAConstraintDefinition
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAConstraintDefinition : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * supportedValues;
@property (copy, nonatomic) NSString * type;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)constraintDefinition;
+ (NSDictionary *)constraintDefinitionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)encodedClassName;
- (NSArray *)supportedValues;
- (void)setSupportedValues:(NSArray *)arg0;

@end
