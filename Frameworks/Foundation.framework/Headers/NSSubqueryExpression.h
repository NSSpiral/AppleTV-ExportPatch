/* Runtime dump - NSSubqueryExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSubqueryExpression : NSExpression
{
    NSExpression * _collection;
    NSExpression * _variableExpression;
    NSPredicate * _subpredicate;
}

+ (char)supportsSecureCoding;

- (NSString *)minimalFormInContext:(NSObject *)arg0;
- (void)allowEvaluation;
- (NSExpression *)collection;
- (NSExpression *)variableExpression;
- (NSSubqueryExpression *)initWithExpression:(NSObject *)arg0 usingIteratorExpression:(NSObject *)arg1 predicate:(NSPredicate *)arg2;
- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (NSExpression *)_expressionWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSSubqueryExpression *)initWithExpression:(NSObject *)arg0 usingIteratorVariable:(id)arg1 predicate:(NSPredicate *)arg2;
- (char)_shouldUseParensWithDescription;
- (void)dealloc;
- (NSSubqueryExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSSubqueryExpression *)copyWithZone:(struct _NSZone *)arg0;
- (NSPredicate *)predicate;
- (NSString *)variable;

@end
