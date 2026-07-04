/* Runtime dump - NSTruePredicate
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTruePredicate : NSPredicate

+ (NSTruePredicate *)defaultInstance;
+ (char)_allowsEvaluation;
+ (void)initialize;
+ (NSTruePredicate *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;

- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSString *)predicateFormat;
- (void)_validateForMetadataQueryScopes:(id)arg0;
- (NSTruePredicate *)retain;
- (void)release;
- (NSTruePredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSTruePredicate *)autorelease;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSTruePredicate *)copyWithZone:(struct _NSZone *)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (char)evaluateWithObject:(NSObject *)arg0 substitutionVariables:(NSDictionary *)arg1;

@end
