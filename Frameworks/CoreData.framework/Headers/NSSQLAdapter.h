/* Runtime dump - NSSQLAdapter
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLAdapter : NSObject
{
    NSMutableArray * _connections;
    NSSQLCore * _sqlCore;
}

- (NSSQLCore *)sqlCore;
- (unsigned int)sqlTypeForExpressionConstantValue:(id)arg0;
- (char)supportsCorrelatedSubqueries;
- (Class)statementClass;
- (Class)generatorClass;
- (NSObject *)newStatementWithEntity:(NSObject *)arg0;
- (id)newGeneratorWithStatement:(id)arg0;
- (NSDate *)_originalRowForUpdate:(NSDate *)arg0;
- (void)_setupBindVariablesForCachedStatement:(id)arg0 usingValues:(NSArray *)arg1;
- (NSURLRequest *)_newSelectStatementWithFetchRequest:(NSURLRequest *)arg0 ignoreInheritance:(char)arg1;
- (NSURLRequest *)_statementForFetchRequest:(NSURLRequest *)arg0 ignoreInheritance:(char)arg1 countOnly:(char)arg2 nestingLevel:(unsigned int)arg3;
- (NSObject *)newStatementWithoutEntity;
- (id)typeStringForColumn:(id)arg0;
- (NSString *)newStatementWithSQLString:(NSString *)arg0;
- (NSObject *)typeStringForSQLType:(unsigned int)arg0;
- (NSString *)newCreateIndexStatementForColumnWithName:(NSString *)arg0 inTableWithName:(NSString *)arg1;
- (NSSQLAdapter *)initWithSQLCore:(NSSQLCore *)arg0;
- (NSURLConnection *)createConnection;
- (NSMutableArray *)connections;
- (char)hasOpenConnections;
- (id)newInsertStatementWithRow:(id)arg0;
- (id)newUpdateStatementWithRow:(id)arg0;
- (id)newDeleteStatementWithRow:(id)arg0;
- (NSURLRequest *)newSelectStatementWithFetchRequest:(NSURLRequest *)arg0;
- (NSURLRequest *)newCountStatementWithFetchRequest:(NSURLRequest *)arg0;
- (id)newCorrelationInsertStatementForRelationship:(id)arg0;
- (id)newCorrelationDeleteStatementForRelationship:(id)arg0;
- (id)newCorrelationMasterReorderStatementForRelationship:(id)arg0;
- (id)newCorrelationMasterReorderStatementPart2ForRelationship:(id)arg0;
- (id)newCorrelationReorderStatementForRelationship:(id)arg0;
- (NSObject *)newCreateTableStatementForEntity:(NSObject *)arg0;
- (id)newCreatePrimaryKeyTableStatement;
- (NSObject *)newPrimaryKeyInitializeStatementForEntity:(NSObject *)arg0 withInitialMaxPK:(long long)arg1;
- (id)newRenameTableStatementFromManyToMany:(id)arg0 toManyToMany:(id)arg1 orToRandomSpot:(id)arg2;
- (id)newCopyAndInsertStatementForManyToMany:(id)arg0 toManyToMany:(id)arg1 intermediateTableName:(NSString *)arg2 invertColumns:(char)arg3;
- (id)newDropTableStatementForTableNamed:(id)arg0;
- (NSObject *)newRenameTableStatementFrom:(NSObject *)arg0 to:(NSObject *)arg1;
- (id)newCreateTableStatementForManyToMany:(id)arg0;
- (id)newCreateIndexStatementForColumn:(id)arg0;
- (NSArray *)newCreateIndexStatementForColumns:(NSArray *)arg0;
- (void)registerConnection:(NSURLConnection *)arg0;
- (void)unregisterConnection:(NSURLConnection *)arg0;
- (NSObject *)generateSQLStatmentForSourcesAndOrderKeysForDestination:(NSObject *)arg0 inToMany:(id)arg1;
- (NSObject *)generateSQLStatmentForSourcesAndOrderKeysForDestination:(NSObject *)arg0 inManyToMany:(id)arg1;
- (void)dealloc;
- (NSURL *)url;
- (NSString *)type;

@end
