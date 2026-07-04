/* Runtime dump - NSSQLIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLIntermediate : NSObject
{
    NSSQLIntermediate * _scope;
}

+ (char)isSimpleKeypath:(NSString *)arg0;
+ (char)expressionIsBasicKeypath:(NSString *)arg0;

- (NSSQLIntermediate *)initWithScope:(NSSQLIntermediate *)arg0;
- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSObject *)_generateSQLForExpression:(NSObject *)arg0 allowToMany:(char)arg1 inContext:(NSObject *)arg2;
- (char)isOrScoped;
- (char)isTargetColumnsScoped;
- (NSObject *)governingEntityForKeypathExpression:(NSObject *)arg0;
- (NSObject *)_lastScopedItem;
- (char)isSimpleKeypath:(NSString *)arg0;
- (char)isVariableBasedKeypathScopedBySubquery:(id)arg0;
- (char)isFunctionScoped;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (NSObject *)fetchIntermediateForKeypathExpression:(NSObject *)arg0;
- (NSSQLFetchIntermediate *)fetchIntermediate;
- (id)_generateSQLForConstantValue:(id)arg0 inContext:(NSObject *)arg1;
- (char)isUpdateScoped;
- (NSObject *)_generateSQLForSubqueryExpression:(NSObject *)arg0 trailingKeypath:(NSExpression *)arg1 inContext:(NSObject *)arg2;
- (char)_functionExpressionIsSubqueryFollowedByKeypath:(NSString *)arg0;
- (char)isHavingScoped;
- (NSString *)governingAlias;
- (char)expressionIsBasicKeypath:(NSString *)arg0;
- (NSObject *)governingAliasForKeypathExpression:(NSObject *)arg0;
- (NSObject *)_generateSQLForVariableExpression:(NSObject *)arg0 allowToMany:(char)arg1 inContext:(NSObject *)arg2;
- (char)keypathExpressionIsSafeLHSForIn:(id)arg0;
- (void)_promoteJoinsForSubqueryScopedKeypath:(NSString *)arg0;
- (void)promoteJoinsInKeypathsForExpression:(NSObject *)arg0;
- (void)_promoteJoinsForKeypathExpression:(NSObject *)arg0;
- (void)_promoteJoinsForFunctionExpression:(NSObject *)arg0;
- (void)_promoteJoinsForAggregateExpression:(NSObject *)arg0;
- (void)_promoteJoinsForTernaryExpression:(NSObject *)arg0;
- (NSObject *)_generateSQLForKeyPathExpression:(NSObject *)arg0 allowToMany:(char)arg1 inContext:(NSObject *)arg2;
- (id)_generateSQLForConstantCollection:(id)arg0 inContext:(NSObject *)arg1;
- (char)_canDoASubselectForExpression:(NSObject *)arg0 inContext:(NSObject *)arg1;
- (NSObject *)_generateSQLForFunctionExpression:(NSObject *)arg0 allowToMany:(char)arg1 inContext:(NSObject *)arg2;
- (id)_generateSQLForExpressionCollection:(id)arg0 allowToMany:(char)arg1 inContext:(NSObject *)arg2;
- (NSObject *)_generateSQLForFetchExpression:(NSObject *)arg0 allowToMany:(char)arg1 inContext:(NSObject *)arg2;
- (NSObject *)_generateSQLForTernaryExpression:(NSObject *)arg0 allowToMany:(char)arg1 inContext:(NSObject *)arg2;
- (NSSQLIntermediate *)scope;

@end
