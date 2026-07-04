/* Runtime dump - NSCustomPredicateOperator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCustomPredicateOperator : NSPredicateOperator
{
    SEL _selector;
}

+ (char)supportsSecureCoding;

- (char)performPrimitiveOperationUsingObject:(NSObject *)arg0 andObject:(NSObject *)arg1;
- (NSCustomPredicateOperator *)initWithCustomSelector:(SEL)arg0 modifier:(unsigned int)arg1;
- (NSCustomPredicateOperator *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSCustomPredicateOperator *)copyWithZone:(struct _NSZone *)arg0;
- (SEL)selector;
- (UIImageView *)symbol;

@end
