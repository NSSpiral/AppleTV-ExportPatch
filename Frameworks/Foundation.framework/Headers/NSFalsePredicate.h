/* Runtime dump - NSFalsePredicate
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFalsePredicate : NSPredicate

+ (NSFalsePredicate *)defaultInstance;
+ (char)_allowsEvaluation;
+ (void)initialize;
+ (NSFalsePredicate *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;

- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSString *)predicateFormat;
- (void)_validateForMetadataQueryScopes:(id)arg0;
- (NSFalsePredicate *)retain;
- (void)release;
- (NSFalsePredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSFalsePredicate *)autorelease;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSFalsePredicate *)copyWithZone:(struct _NSZone *)arg0;
- (char)evaluateWithObject:(NSObject *)arg0 substitutionVariables:(NSDictionary *)arg1;

@end
