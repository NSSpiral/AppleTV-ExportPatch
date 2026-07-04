/* Runtime dump - NSComparisonPredicateOperator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSComparisonPredicateOperator : NSPredicateOperator
{
    unsigned int _variant;
    unsigned int _options;
}

+ (char)supportsSecureCoding;

- (NSString *)minimalFormInContext:(NSObject *)arg0 ofPredicate:(NSPredicate *)arg1;
- (NSString *)predicateFormat;
- (char)performPrimitiveOperationUsingObject:(NSObject *)arg0 andObject:(NSObject *)arg1;
- (NSComparisonPredicateOperator *)initWithOperatorType:(unsigned int)arg0 modifier:(unsigned int)arg1 variant:(unsigned int)arg2;
- (NSComparisonPredicateOperator *)initWithOperatorType:(unsigned int)arg0 modifier:(unsigned int)arg1 variant:(unsigned int)arg2 options:(unsigned int)arg3;
- (NSComparisonPredicateOperator *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSComparisonPredicateOperator *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)options;
- (unsigned int)variant;

@end
