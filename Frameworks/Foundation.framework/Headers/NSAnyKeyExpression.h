/* Runtime dump - NSAnyKeyExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAnyKeyExpression : NSExpression

+ (NSAnyKeyExpression *)defaultInstance;
+ (char)_allowsEvaluation;
+ (void)initialize;
+ (NSAnyKeyExpression *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;

- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (NSAnyKeyExpression *)_initPrivate;
- (NSAnyKeyExpression *)retain;
- (void)release;
- (NSAnyKeyExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSAnyKeyExpression *)init;
- (NSAnyKeyExpression *)autorelease;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSAnyKeyExpression *)copyWithZone:(struct _NSZone *)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;

@end
