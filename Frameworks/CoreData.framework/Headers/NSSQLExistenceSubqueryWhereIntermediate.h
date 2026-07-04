/* Runtime dump - NSSQLExistenceSubqueryWhereIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLExistenceSubqueryWhereIntermediate : NSSQLWhereIntermediate
{
    NSExpression * _subqueryExpression;
    NSExpression * _variableExpression;
    NSString * _variableAlias;
    NSSQLProperty * _collectionProperty;
    NSSQLEntity * _governingEntityForVariable;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSSQLExistenceSubqueryWhereIntermediate *)initWithPredicate:(NSPredicate *)arg0 inScope:(NSObject *)arg1;
- (NSObject *)governingEntityForKeypathExpression:(NSObject *)arg0;
- (NSObject *)fetchIntermediateForKeypathExpression:(NSObject *)arg0;
- (NSObject *)governingAliasForKeypathExpression:(NSObject *)arg0;
- (NSObject *)_generateSQLForVariableExpression:(NSObject *)arg0 allowToMany:(char)arg1 inContext:(NSObject *)arg2;
- (char)_isKeypathScopedToSubquery:(id)arg0;
- (char)isExistenceScoped;

@end
