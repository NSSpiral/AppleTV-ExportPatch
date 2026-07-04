/* Runtime dump - NSTernaryExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTernaryExpression : NSExpression
{
    NSPredicate * _predicate;
    NSExpression * _trueExpression;
    NSExpression * _falseExpression;
}

+ (char)supportsSecureCoding;

- (void)allowEvaluation;
- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (NSExpression *)_expressionWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSExpression *)trueExpression;
- (NSExpression *)falseExpression;
- (NSTernaryExpression *)initWithPredicate:(NSPredicate *)arg0 trueExpression:(NSExpression *)arg1 falseExpression:(NSExpression *)arg2;
- (void)dealloc;
- (NSTernaryExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSTernaryExpression *)copyWithZone:(struct _NSZone *)arg0;
- (NSPredicate *)predicate;

@end
