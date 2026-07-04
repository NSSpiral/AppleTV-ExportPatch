/* Runtime dump - NSSubstringPredicateOperator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSubstringPredicateOperator : NSStringPredicateOperator
{
    unsigned int _position;
}

+ (char)supportsSecureCoding;

- (char)performPrimitiveOperationUsingObject:(NSObject *)arg0 andObject:(NSObject *)arg1;
- (NSSubstringPredicateOperator *)initWithOperatorType:(unsigned int)arg0 modifier:(unsigned int)arg1 variant:(unsigned int)arg2 position:(unsigned int)arg3;
- (NSSubstringPredicateOperator *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (SEL)selector;
- (unsigned int)position;
- (UIImageView *)symbol;

@end
