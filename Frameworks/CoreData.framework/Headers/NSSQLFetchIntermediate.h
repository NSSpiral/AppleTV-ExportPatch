/* Runtime dump - NSSQLFetchIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate
{
    NSSQLSelectIntermediate * _selectClause;
    NSSQLGroupByIntermediate * _groupByClause;
    NSSQLHavingIntermediate * _havingClause;
    NSSQLOffsetIntermediate * _offsetClause;
    NSMutableArray * _groupByKeypaths;
    char _isDictionaryCountFetch;
    NSMutableArray * _joinIntermediates;
    NSMutableDictionary * _joinKeypaths;
}

- (NSSQLFetchIntermediate *)initWithScope:(NSSQLIntermediate *)arg0;
- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSSQLReadOnlySelectIntermediate *)selectIntermediate;
- (char)isFunctionScoped;
- (NSString *)_generateJoinSQLStringInContext:(NSObject *)arg0;
- (NSObject *)fetchIntermediateForKeypathExpression:(NSObject *)arg0;
- (NSSQLFetchIntermediate *)fetchIntermediate;
- (char)isDictionaryCountFetch;
- (void)setDictionaryCountFetch:(char)arg0;
- (void)setSelectIntermediate:(NSSQLReadOnlySelectIntermediate *)arg0;
- (id)groupByIntermediate;
- (void)setGroupByIntermediate:(id)arg0;
- (void)addGroupByKeypath:(NSString *)arg0;
- (char)groupByClauseContainsKeypath:(NSString *)arg0;
- (NSSQLHavingIntermediate *)havingIntermediate;
- (void)setHavingIntermediate:(NSSQLHavingIntermediate *)arg0;
- (void)setOffsetIntermediate:(NSSQLOffsetIntermediate *)arg0;
- (void)addJoinIntermediate:(NSSQLJoinIntermediate *)arg0 atKeypathWithComponents:(NSArray *)arg1;
- (NSArray *)finalJoinForKeypathWithComponents:(NSArray *)arg0;
- (void)promoteToOuterJoinsAlongKeypathWithComponents:(NSArray *)arg0;
- (void)promoteToOuterJoinAtKeypathWithComponents:(NSArray *)arg0;
- (NSMutableArray *)joinIntermediates;
- (void)selectDistinct;
- (void)dealloc;

@end
