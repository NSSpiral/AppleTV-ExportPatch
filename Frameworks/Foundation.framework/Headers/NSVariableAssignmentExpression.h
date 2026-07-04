/* Runtime dump - NSVariableAssignmentExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSVariableAssignmentExpression : NSExpression
{
    NSVariableExpression * _assignmentVariable;
    NSExpression * _subexpression;
}

+ (char)supportsSecureCoding;

- (void)allowEvaluation;
- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (NSExpression *)_expressionWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSVariableAssignmentExpression *)initWithAssignmentVariable:(NSVariableExpression *)arg0 expression:(NSObject *)arg1;
- (NSExpression *)subexpression;
- (NSVariableAssignmentExpression *)initWithAssignmentExpression:(NSObject *)arg0 expression:(NSObject *)arg1;
- (NSVariableExpression *)assignmentVariable;
- (void)dealloc;
- (NSVariableAssignmentExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSVariableAssignmentExpression *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)variable;

@end
