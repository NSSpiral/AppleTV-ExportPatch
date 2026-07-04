/* Runtime dump - NSStringPredicateOperator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSStringPredicateOperator : NSPredicateOperator
{
    unsigned int _flags;
}

+ (char)supportsSecureCoding;

- (NSString *)_modifierString;
- (void)_setOptions:(unsigned int)arg0;
- (NSStringPredicateOperator *)initWithOperatorType:(unsigned int)arg0 modifier:(unsigned int)arg1 variant:(unsigned int)arg2;
- (NSStringPredicateOperator *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSStringPredicateOperator *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)options;
- (unsigned int)flags;

@end
