/* Runtime dump - NSSymbolicExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSymbolicExpression : NSExpression
{
    NSString * _token;
}

+ (char)supportsSecureCoding;

- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (void)dealloc;
- (NSSymbolicExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSSymbolicExpression *)copyWithZone:(struct _NSZone *)arg0;
- (NSSymbolicExpression *)initWithString:(NSString *)arg0;
- (id)constantValue;

@end
