/* Runtime dump - NSCompoundPredicateOperator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCompoundPredicateOperator : NSPredicateOperator

+ (NSCompoundPredicateOperator *)notPredicateOperator;
+ (NSCompoundPredicateOperator *)andPredicateOperator;
+ (NSCompoundPredicateOperator *)orPredicateOperator;

- (NSString *)minimalFormInContext:(NSObject *)arg0 ofPredicates:(id)arg1;
- (NSString *)predicateFormat;
- (char)evaluatePredicates:(id)arg0 withObject:(NSObject *)arg1 substitutionVariables:(NSDictionary *)arg2;
- (char)evaluatePredicates:(id)arg0 withObject:(NSObject *)arg1;
- (NSCompoundPredicateOperator *)copyWithZone:(struct _NSZone *)arg0;
- (UIImageView *)symbol;

@end
