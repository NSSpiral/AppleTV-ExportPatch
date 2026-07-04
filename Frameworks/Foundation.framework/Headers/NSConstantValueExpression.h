/* Runtime dump - NSConstantValueExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConstantValueExpression : NSExpression
{
    id constantValue;
}

+ (char)supportsSecureCoding;

- (id)CKExpressionValue;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0;
- (void)dealloc;
- (NSConstantValueExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSConstantValueExpression *)copyWithZone:(struct _NSZone *)arg0;
- (NSConstantValueExpression *)initWithObject:(NSObject *)arg0;
- (id)constantValue;

@end
