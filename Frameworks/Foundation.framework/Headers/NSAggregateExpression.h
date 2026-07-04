/* Runtime dump - NSAggregateExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAggregateExpression : NSExpression
{
    id _collection;
}

+ (char)supportsSecureCoding;

- (void)allowEvaluation;
- (CoreDAVItemWithNoChildren *)collection;
- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSString *)predicateFormat;
- (NSExpression *)_expressionWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSAggregateExpression *)initWithCollection:(RadioArtworkCollection *)arg0;
- (void)dealloc;
- (NSAggregateExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSAggregateExpression *)copyWithZone:(struct _NSZone *)arg0;
- (id)constantValue;

@end
