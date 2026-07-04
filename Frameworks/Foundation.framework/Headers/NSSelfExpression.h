/* Runtime dump - NSSelfExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSelfExpression : NSExpression

+ (NSSelfExpression *)defaultInstance;
+ (char)_allowsEvaluation;
+ (void)initialize;
+ (NSSelfExpression *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;

- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (NSSelfExpression *)_initPrivate;
- (NSSelfExpression *)retain;
- (void)release;
- (NSSelfExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSSelfExpression *)init;
- (NSSelfExpression *)autorelease;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSSelfExpression *)copyWithZone:(struct _NSZone *)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;

@end
