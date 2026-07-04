/* Runtime dump - NSFunctionExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFunctionExpression : NSExpression
{
    NSExpression * _operand;
    SEL _selector;
    NSArray * _arguments;
}

+ (char)supportsSecureCoding;

- (NSString *)minimalFormInContext:(NSObject *)arg0;
- (NSString *)_mapKVCOperatorsToFunctionsInContext:(NSObject *)arg0;
- (void)allowEvaluation;
- (NSExpression *)operand;
- (NSFunctionExpression *)initWithExpressionType:(unsigned int)arg0 operand:(NSExpression *)arg1 selector:(SEL)arg2 argumentArray:(NSMutableArray *)arg3;
- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (NSExpression *)_expressionWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSFunctionExpression *)initWithTarget:(NSObject *)arg0 selectorName:(NSString *)arg1 arguments:(NSArray *)arg2;
- (NSFunctionExpression *)initWithSelector:(SEL)arg0 argumentArray:(NSMutableArray *)arg1;
- (char)_shouldUseParensWithDescription;
- (NSString *)binaryOperatorForSelector;
- (void)dealloc;
- (NSFunctionExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSFunctionExpression *)copyWithZone:(struct _NSZone *)arg0;
- (SEL)selector;
- (CAValueFunction *)function;
- (NSArray *)arguments;

@end
