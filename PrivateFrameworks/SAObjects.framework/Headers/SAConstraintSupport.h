/* Runtime dump - SAConstraintSupport
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAConstraintSupport : AceObject <SAAceSerializable>

@property (retain, nonatomic) <SASupportCondition> * condition;
@property (copy, nonatomic) NSString * property;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAConstraintSupport *)constraintSupport;
+ (NSDictionary *)constraintSupportWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (<SASupportCondition> *)condition;
- (void)setCondition:(<SASupportCondition> *)arg0;
- (NSString *)property;
- (void)setProperty:(NSString *)arg0;
- (NSString *)encodedClassName;

@end
