/* Runtime dump - NSSQLStatementIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLStatementIntermediate : NSSQLIntermediate
{
    NSSQLEntity * _governingEntity;
    NSString * _governingAlias;
    NSString * _correlationToken;
    NSSQLWhereIntermediate * _whereClause;
    NSSQLLimitIntermediate * _limitClause;
    NSSQLOrderIntermediate * _orderIntermediate;
}

- (NSObject *)governingEntityForKeypathExpression:(NSObject *)arg0;
- (void)setLimitIntermediate:(NSSQLLimitIntermediate *)arg0;
- (NSSQLExistenceSubqueryWhereIntermediate *)whereIntermediate;
- (NSString *)governingAlias;
- (void)setWhereIntermediate:(NSSQLExistenceSubqueryWhereIntermediate *)arg0;
- (void)setOrderIntermediate:(NSSQLOrderIntermediate *)arg0;
- (NSSQLStatementIntermediate *)initWithEntity:(NSObject *)arg0 alias:(CKDPUserAlias *)arg1 inScope:(NSObject *)arg2;
- (NSSQLLimitIntermediate *)limitIntermediate;
- (NSObject *)governingAliasForKeypathExpression:(NSObject *)arg0;
- (char)keypathExpressionIsSafeLHSForIn:(id)arg0;
- (NSSQLEntity *)governingEntity;
- (void)setGoverningAlias:(NSString *)arg0;
- (void)setCorrelationToken:(NSString *)arg0;
- (void)setGoverningEntity:(NSSQLEntity *)arg0;
- (NSSQLOrderIntermediate *)orderIntermediate;
- (void)dealloc;

@end
