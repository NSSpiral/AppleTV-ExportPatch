/* Runtime dump - NSPredicateOperator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _operatorType;
    unsigned int _modifier;
}

+ (NSObject *)operatorWithType:(unsigned int)arg0 modifier:(unsigned int)arg1 options:(unsigned int)arg2;
+ (NSObject *)_newOperatorWithType:(unsigned int)arg0 modifier:(unsigned int)arg1 options:(unsigned int)arg2;
+ (SEL)_getSelectorForType:(unsigned int)arg0;
+ (NSObject *)_getSymbolForType:(unsigned int)arg0;
+ (NSString *)operatorWithCustomSelector:(SEL)arg0 modifier:(unsigned int)arg1;
+ (char)supportsSecureCoding;

- (unsigned int)operatorType;
- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (unsigned int)modifier;
- (NSPredicateOperator *)initWithOperatorType:(unsigned int)arg0 modifier:(unsigned int)arg1 options:(unsigned int)arg2;
- (NSString *)predicateFormat;
- (char)performPrimitiveOperationUsingObject:(NSObject *)arg0 andObject:(NSObject *)arg1;
- (char)performOperationUsingObject:(NSObject *)arg0 andObject:(NSObject *)arg1;
- (NSPredicateOperator *)initWithOperatorType:(unsigned int)arg0 modifier:(unsigned int)arg1;
- (void)_setOptions:(unsigned int)arg0;
- (NSPredicateOperator *)initWithOperatorType:(unsigned int)arg0;
- (void)_setModifier:(unsigned int)arg0;
- (NSPredicateOperator *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSPredicateOperator *)copyWithZone:(struct _NSZone *)arg0;
- (SEL)selector;
- (unsigned int)options;
- (UIImageView *)symbol;

@end
