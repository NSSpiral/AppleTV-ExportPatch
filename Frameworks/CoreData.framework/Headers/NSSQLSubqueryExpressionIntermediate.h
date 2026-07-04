/* Runtime dump - NSSQLSubqueryExpressionIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate
{
    NSExpression * _trailingKeypath;
    NSExpression * _variableExpression;
    NSSQLFetchIntermediate * _fetchIntermediate;
    NSSQLEntity * _selectFromEntity;
    NSMutableString * _selectFromCorrelationTarget;
    NSString * _selectEntityAlias;
    NSSQLEntity * _governingEntityForVariable;
    NSSQLColumn * _variableColumn;
    NSString * _variableAlias;
    NSSQLColumn * _targetColumn;
    NSString * _targetAlias;
    NSMutableArray * _keypathsToPromote;
    char _useDistinct;
    char _isCount;
    char _hasTrailingFunction;
    char _onlyTrailIsCount;
    char _subqueryHasTruePredicate;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSObject *)governingEntityForKeypathExpression:(NSObject *)arg0;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (NSObject *)fetchIntermediateForKeypathExpression:(NSObject *)arg0;
- (void)selectDistinct;
- (NSSQLSubqueryExpressionIntermediate *)initWithExpression:(NSObject *)arg0 trailingKeypath:(NSExpression *)arg1 inScope:(NSObject *)arg2;
- (NSObject *)governingAliasForKeypathExpression:(NSObject *)arg0;
- (NSObject *)_generateSQLForVariableExpression:(NSObject *)arg0 allowToMany:(char)arg1 inContext:(NSObject *)arg2;
- (char)keypathExpressionIsSafeLHSForIn:(id)arg0;
- (void)_promoteJoinsForSubqueryScopedKeypath:(NSString *)arg0;
- (char)_isKeypathScopedToSubquery:(id)arg0;
- (void)_setVariableColumn:(id)arg0;
- (void)_createCollectionJoinsForFetchInContext:(NSObject *)arg0;
- (void)_createSelectClauseInFetchWithContext:(NSObject *)arg0;
- (void)dealloc;

@end
