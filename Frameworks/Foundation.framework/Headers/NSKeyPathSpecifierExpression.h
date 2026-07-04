/* Runtime dump - NSKeyPathSpecifierExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyPathSpecifierExpression : NSExpression
{
    NSString * _value;
}

+ (char)supportsSecureCoding;

- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (void)dealloc;
- (NSKeyPathSpecifierExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSKeyPathSpecifierExpression *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)keyPath;
- (NSKeyPathSpecifierExpression *)initWithObject:(NSObject *)arg0;
- (id)constantValue;

@end
