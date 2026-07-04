/* Runtime dump - NSInPredicateOperator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSInPredicateOperator : NSPredicateOperator
{
    unsigned int _flags;
    NSSubstringPredicateOperator * _stringVersion;
}

+ (char)supportsSecureCoding;

- (NSString *)minimalFormInContext:(NSObject *)arg0 ofPredicate:(NSPredicate *)arg1;
- (NSInPredicateOperator *)initWithOperatorType:(unsigned int)arg0 modifier:(unsigned int)arg1 options:(unsigned int)arg2;
- (char)performPrimitiveOperationUsingObject:(NSObject *)arg0 andObject:(NSObject *)arg1;
- (void)_setOptions:(unsigned int)arg0;
- (NSSubstringPredicateOperator *)stringVersion;
- (void)dealloc;
- (NSInPredicateOperator *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSInPredicateOperator *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)options;
- (UIImageView *)symbol;
- (unsigned int)flags;

@end
