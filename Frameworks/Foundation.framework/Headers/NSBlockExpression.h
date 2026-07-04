/* Runtime dump - NSBlockExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBlockExpression : NSExpression
{
    id _block;
    NSArray * _arguments;
}

- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (NSExpression *)_expressionWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSBlockExpression *)initWithType:(unsigned int)arg0 block:(id /* block */)arg1 arguments:(/* block */ id)arg2;
- (id /* block */)expressionBlock;
- (void)dealloc;
- (NSBlockExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSBlockExpression *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)arguments;

@end
