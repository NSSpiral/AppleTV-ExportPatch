/* Runtime dump - NSComparisonPredicate
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSComparisonPredicate : NSPredicate
{
    void * _reserved2;
    NSPredicateOperator * _predicateOperator;
    NSExpression * _lhs;
    NSExpression * _rhs;
}

@property (readonly) unsigned int predicateOperatorType;
@property (readonly) unsigned int comparisonPredicateModifier;
@property (readonly, retain) NSExpression * leftExpression;
@property (readonly, retain) NSExpression * rightExpression;
@property (readonly) SEL customSelector;
@property (readonly) unsigned int options;

+ (NSObject *)predicateWithLeftExpression:(NSExpression *)arg0 rightExpression:(NSExpression *)arg1 customSelector:(SEL)arg2;
+ (NSComparisonPredicate *)predicateWithPredicateOperator:(NSPredicateOperator *)arg0 leftKeyPath:(NSString *)arg1 rightValue:(id)arg2;
+ (NSComparisonPredicate *)predicateWithPredicateOperator:(NSPredicateOperator *)arg0 leftKeyPath:(NSString *)arg1 rightKeyPath:(NSString *)arg2;
+ (NSComparisonPredicate *)predicateWithPredicateOperator:(NSPredicateOperator *)arg0 leftExpression:(NSExpression *)arg1 rightExpression:(NSExpression *)arg2;
+ (char)supportsSecureCoding;
+ (NSObject *)predicateWithLeftExpression:(NSExpression *)arg0 rightExpression:(NSExpression *)arg1 modifier:(unsigned int)arg2 type:(unsigned int)arg3 options:(unsigned int)arg4;

- (id)CKDPQueryFiltersWithTranslator:(CKDProtocolTranslator *)arg0 error:(id *)arg1;
- (NSString *)_nearFilterWithKey:(NSString *)arg0 location:(struct CGPoint)arg1 radius:(double)arg2 translator:(CKDProtocolTranslator *)arg3;
- (unsigned int)_comparisonOptionForString:(NSString *)arg0;
- (id)_parseFullTextSearchFiltersWithTranslator:(CKDProtocolTranslator *)arg0 withError:(id *)arg1;
- (id)_parseNearFiltersWithTranslator:(CKDProtocolTranslator *)arg0 withError:(id *)arg1;
- (id)_parseListContainsFiltersWithTranslator:(CKDProtocolTranslator *)arg0 withError:(id *)arg1;
- (id)_parseInFiltersWithTranslator:(CKDProtocolTranslator *)arg0 withError:(id *)arg1;
- (id)_parseListContainsAnyFiltersWithTranslator:(CKDProtocolTranslator *)arg0 withError:(id *)arg1;
- (id)_parseListContainsAllFiltersWithTranslator:(CKDProtocolTranslator *)arg0 withError:(id *)arg1;
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg0 withError:(id *)arg1;
- (id)_parseBetweenFiltersWithTranslator:(CKDProtocolTranslator *)arg0 withError:(id *)arg1;
- (id)_parseBasicOperatorFiltersWithTranslator:(CKDProtocolTranslator *)arg0 withError:(id *)arg1;
- (NSURL *)br_watchedURL;
- (char)validateFullTextSearchPredicate;
- (char)validateNearPredicate;
- (char)validateContainsPredicate;
- (char)validateInPredicate;
- (char)validateContainsAnyPredicate;
- (char)validateContainsAllInPredicate;
- (char)validateBeginsWithPredicate;
- (char)validateBetweenPredicate;
- (char)validateBasicOperatorPredicate;
- (void)validate;
- (unsigned int)_comparisonOptionForString:(NSString *)arg0;
- (NSString *)minimalFormInContext:(NSObject *)arg0;
- (char)_isForeignObjectExpression:(NSObject *)arg0 givenContext:(NSObject *)arg1;
- (void)allowEvaluation;
- (NSPredicateOperator *)predicateOperator;
- (NSComparisonPredicate *)initWithPredicateOperator:(NSPredicateOperator *)arg0 leftExpression:(NSExpression *)arg1 rightExpression:(NSExpression *)arg2;
- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (void)setPredicateOperator:(NSPredicateOperator *)arg0;
- (NSComparisonPredicate *)initWithLeftExpression:(NSExpression *)arg0 rightExpression:(NSExpression *)arg1 modifier:(unsigned int)arg2 type:(unsigned int)arg3 options:(unsigned int)arg4;
- (NSPredicate *)predicateWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSString *)predicateFormat;
- (NSString *)generateMetadataDescription;
- (NSComparisonPredicate *)initWithLeftExpression:(NSExpression *)arg0 rightExpression:(NSExpression *)arg1 customSelector:(SEL)arg2;
- (NSComparisonPredicate *)initWithPredicateOperator:(NSPredicateOperator *)arg0 leftKeyPath:(NSString *)arg1 rightValue:(id)arg2;
- (NSComparisonPredicate *)initWithPredicateOperator:(NSPredicateOperator *)arg0 leftKeyPath:(NSString *)arg1 rightKeyPath:(NSString *)arg2;
- (NSString *)keyPathExpressionForString:(NSString *)arg0;
- (void)_acceptOperator:(id)arg0 flags:(unsigned int)arg1;
- (void)_acceptExpressions:(id)arg0 flags:(unsigned int)arg1;
- (SEL)customSelector;
- (void)dealloc;
- (NSComparisonPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSComparisonPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)options;
- (NSExpression *)leftExpression;
- (NSExpression *)rightExpression;
- (unsigned int)comparisonPredicateModifier;
- (unsigned int)predicateOperatorType;
- (char)evaluateWithObject:(NSObject *)arg0 substitutionVariables:(NSDictionary *)arg1;

@end
