/* Runtime dump - NSSetExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSetExpression : NSExpression
{
    NSExpression * _left;
    NSExpression * _right;
}

+ (char)supportsSecureCoding;

- (NSString *)minimalFormInContext:(NSObject *)arg0;
- (void)allowEvaluation;
- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (NSExpression *)_expressionWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSSetExpression *)initWithType:(unsigned int)arg0 leftExpression:(NSExpression *)arg1 rightExpression:(NSExpression *)arg2;
- (void)dealloc;
- (NSSetExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSSetExpression *)copyWithZone:(struct _NSZone *)arg0;
- (NSExpression *)leftExpression;
- (NSExpression *)rightExpression;

@end
