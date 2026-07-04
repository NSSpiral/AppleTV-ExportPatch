/* Runtime dump - NSSQLSimpleWhereIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate
{
    NSMutableArray * _comparisonPredicateScopedItem;
    NSExpression * _effectiveLeftExpression;
    NSExpression * _effectiveRightExpression;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSSQLSimpleWhereIntermediate *)initWithPredicate:(NSPredicate *)arg0 inScope:(NSObject *)arg1;
- (NSObject *)_lastScopedItem;
- (char)_isNilExpression:(NSObject *)arg0;
- (NSString *)_generateSQLType3InContext:(NSObject *)arg0;
- (id)_sqlTokenForPredicateOperator:(unsigned int)arg0 inContext:(NSObject *)arg1;
- (long)_cfStringOptionsFromPredicateOptions:(unsigned int)arg0;
- (NSString *)_generateSQLForString:(NSString *)arg0 expressionPath:(NSString *)arg1 wildStart:(char)arg2 wildEnd:(char)arg3 allowToMany:(char)arg4 inContext:(NSObject *)arg5;
- (NSString *)_upperBoundSearchStringForString:(NSString *)arg0 context:(NSObject *)arg1;
- (id)_generateSQLSubstringWildStart:(char)arg0 wildEnd:(char)arg1 inContext:(NSObject *)arg2;
- (NSObject *)_entityDestinationIfKeyOfSomeSort:(NSObject *)arg0;
- (NSArray *)_generateSQLForConstKeyArray:(NSArray *)arg0 targetEntity:(NSObject *)arg1 reboundFrom:(NSObject *)arg2 inContext:(NSObject *)arg3;
- (id)_generateSQLForConst:(id)arg0 inManyToMany:(id)arg1 expression:(NSObject *)arg2 inContext:(NSObject *)arg3;
- (id)_generateSQLForConst:(id)arg0 inToMany:(id)arg1 inContext:(NSObject *)arg2;
- (id)_generateSQLForConst:(id)arg0 inAttribute:(NSObject *)arg1 expression:(NSObject *)arg2 inContext:(NSObject *)arg3;
- (NSString *)_generateSQLType1InContext:(NSObject *)arg0;
- (NSString *)_generateSQLType2InContext:(NSObject *)arg0;
- (id)_generateSQLForMatchingOperator:(id)arg0 inContext:(NSObject *)arg1;
- (NSString *)_generateSQLBeginsWithStringInContext:(NSObject *)arg0;
- (NSString *)_generateSQLEndsWithStringInContext:(NSObject *)arg0;
- (NSString *)_generateSQLContainmentStringInContext:(NSObject *)arg0;
- (NSString *)_generateSQLBetweenStringInContext:(NSObject *)arg0;
- (id)_generateSQLForWildSubStringForGlob:(id)arg0 wildStart:(char)arg1 wildEnd:(char)arg2;
- (void)dealloc;

@end
