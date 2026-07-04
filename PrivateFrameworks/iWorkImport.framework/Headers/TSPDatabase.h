/* Runtime dump - TSPDatabase
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabase : TSUDatabase
{
    NSURL * _packageURL;
    char _incrementalVacuum;
    struct sqlite3_stmt * _insertObjectStatement;
    struct sqlite3_stmt * _insertDataStateStatement;
    struct sqlite3_stmt * _updateDataStateStatement;
    struct sqlite3_stmt * _insertRelationshipStatement;
    struct sqlite3_stmt * _relationshipTargetsStatement;
}

- (char)needsUpgradeFromSchemaVersion:(int)arg0;
- (char)upgradeFromSchemaVersion:(int)arg0 error:(id *)arg1;
- (TSPDatabase *)initReadonlyWithPath:(NSString *)arg0 error:(id *)arg1;
- (struct sqlite3_blob *)openDataStateBlobWithIdentifier:(long long)arg0 error:(id *)arg1;
- (id)queryFirstObjectWithStatement:(struct sqlite3_stmt *)arg0 error:(id *)arg1;
- (id)objectFromStatement:(struct sqlite3_stmt *)arg0;
- (char)documentVersion:(unsigned long long *)arg0 error:(id *)arg1;
- (char)lastObjectIdentifier:(long long *)arg0 error:(id *)arg1;
- (char)numberOfDatabaseObjects:(unsigned int *)arg0 error:(id *)arg1;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > *)filterIdentifiers:(struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > *)arg0 error:(struct __compressed_pair<unsigned long, std::__1::less<long long> >)arg1;
- (struct sqlite3_blob *)openBlobForObject:(NSObject *)arg0 error:(id *)arg1;
- (NSString *)queryObjectWithIdentifier:(long long)arg0 error:(id *)arg1;
- (char)setDocumentVersion:(struct ?)arg0 error:(id *)arg1;
- (char)setClosedCleanlyToken:(long long)arg0 error:(id *)arg1;
- (char)documentVersion:(struct ? *)arg0 closedCleanlyToken:(long long *)arg1 error:(id *)arg2;
- (char)insertObjectWithIdentifier:(long long)arg0 stateIdentifier:(struct ObjectStateIdentifier *)arg1 classType:(struct ObjectStateIdentifier)arg2 error:(int)arg3;
- (char)insertDataStateWithSize:(int)arg0 identifier:(long long *)arg1 error:(id *)arg2;
- (char)updateDataStateWithIdentifier:(long long)arg0 size:(int)arg1 error:(id *)arg2;
- (struct sqlite3_blob *)openDataStateBlobWithIdentifier:(long long)arg0 willWrite:(char)arg1 error:(id *)arg2;
- (char)insertRelationshipWithSourceIdentifier:(long long)arg0 targetIdentifier:(long long)arg1 error:(id *)arg2;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > *)newRelationshipTargetsForSourceIdentifier:(NSString *)arg0 error:(struct __compressed_pair<unsigned long, std::__1::less<long long> >)arg1;
- (char)parseArchive:(struct Message *)arg0 forObject:(NSObject *)arg1 error:(id *)arg2;
- (TSPDatabase *)init;
- (void).cxx_destruct;
- (TSPDatabase *)initWithPath:(NSString *)arg0 error:(id *)arg1;
- (char)closeWithError:(id *)arg0;

@end
