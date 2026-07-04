/* Runtime dump - NSEqualityPredicateOperator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSEqualityPredicateOperator : NSPredicateOperator
{
    char _negate;
    unsigned int _options;
}

+ (char)supportsSecureCoding;

- (char)isNegation;
- (NSEqualityPredicateOperator *)initWithOperatorType:(unsigned int)arg0 modifier:(unsigned int)arg1 negate:(char)arg2 options:(unsigned int)arg3;
- (NSString *)predicateFormat;
- (char)performPrimitiveOperationUsingObject:(NSObject *)arg0 andObject:(NSObject *)arg1;
- (void)_setOptions:(unsigned int)arg0;
- (NSEqualityPredicateOperator *)initWithOperatorType:(unsigned int)arg0 modifier:(unsigned int)arg1 negate:(char)arg2;
- (void)setNegation:(char)arg0;
- (NSEqualityPredicateOperator *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSEqualityPredicateOperator *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)options;

@end
