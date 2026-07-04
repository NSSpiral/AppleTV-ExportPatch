/* Runtime dump - NSVariableExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSVariableExpression : NSExpression
{
    NSString * _variable;
}

+ (char)supportsSecureCoding;

- (id)CKExpressionValue;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (NSExpression *)_expressionWithSubstitutionVariables:(NSDictionary *)arg0;
- (void)dealloc;
- (NSVariableExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSVariableExpression *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)variable;
- (NSVariableExpression *)initWithObject:(NSObject *)arg0;

@end
