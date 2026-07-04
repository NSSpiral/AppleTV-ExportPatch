/* Runtime dump - NSSQLConnection
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLConnection : NSObject
{
    NSSQLAdapter * _adapter;
    char _transactionIsOpen;
    char _useSyntaxColoredLogging;
    NSSQLStatement * _sqlStatement;
    NSArray * _columnsToFetch;
    NSArray * _metadataColumns;
}

+ (void)initialize;

- (NSArray *)columnsToFetch;
- (NSString *)cachedStatementForRequestWithIdentifier:(NSString *)arg0;
- (void)endFetch;
- (char)isFetchInProgress;
- (void)bindTempTableForBindIntarray:(id)arg0;
- (NSSQLAdapter *)adapter;
- (void)prepareSQLStatement:(id)arg0;
- (void)resetSQLStatement;
- (void)releaseSQLStatement;
- (void)prepareAndExecuteSQLStatement:(id)arg0;
- (void)createTableForEntity:(NSObject *)arg0;
- (void)createIndexesForEntity:(NSObject *)arg0;
- (void)createManyToManyTablesForEntity:(NSObject *)arg0;
- (void)willCreateSchema;
- (char)hasMetadataTable;
- (void)didCreateSchema;
- (void)createTablesForEntities:(id)arg0;
- (void)createPrimaryKeyTableForModel:(NSObject *)arg0 knownEmpty:(char)arg1;
- (void)createMetadata;
- (void)saveMetadata:(NSDictionary *)arg0;
- (void)rollbackTransaction;
- (NSArray *)metadataColumns;
- (void)setColumnsToFetch:(NSArray *)arg0;
- (NSArray *)newFetchedArray;
- (void)_raiseOptimisticLockingExceptionWithReason:(NSString *)arg0;
- (NSSQLConnection *)initWithAdapter:(NSSQLAdapter *)arg0;
- (void)awake;
- (void)sleep;
- (char)hasOpenTransaction;
- (void)forceTransactionClosed;
- (void)_forceDisconnectOnError;
- (void)transactionDidBegin;
- (void)transactionDidCommit;
- (void)transactionDidRollback;
- (char)canConnect;
- (char)databaseIsEmpty;
- (void)writeCorrelationChangesFromTracker:(id)arg0;
- (void)updateRow:(id)arg0;
- (void)selectAttributes:(NSDictionary *)arg0 fetchRequest:(NSURLRequest *)arg1 lock:(char)arg2 entity:(NSObject *)arg3;
- (NSSQLStatement *)sqlStatement;
- (void)setExclusiveLockingMode:(char)arg0;
- (NSArray *)describeResults;
- (int)fetchResultSet:(void *)arg0 usingFetchPlan:(id)arg1;
- (void)createSchema;
- (struct __CFArray *)rawIntegerRowsForSQL:(id)arg0;
- (long long)fetchMaxPrimaryKeyForEntity:(NSObject *)arg0;
- (NSArray *)fetchTableNames;
- (id)fetchTableCreationSQL;
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)arg0;
- (NSDictionary *)fetchMetadata;
- (long long)generatePrimaryKeysForEntity:(NSObject *)arg0 batch:(unsigned int)arg1;
- (void)prepareForPrimaryKeyGeneration;
- (void)endPrimaryKeyGeneration;
- (char)hasPrimaryKeyTable;
- (void)_performPostSaveTasks;
- (id)fetchUbiquityKnowledgeVector;
- (void)updateUbiquityKnowledgeVector:(id)arg0;
- (NSObject *)deleteTransactionEntriesAfterPeerState:(NSObject *)arg0 forStoreName:(NSString *)arg1;
- (void)updateUbiquityKnowledgeForPeerWithID:(int)arg0 andTransactionNumber:(NSNumber *)arg1;
- (void)addPeerRange:(NSObject *)arg0;
- (void)addPeerRangeForPeerID:(NSObject *)arg0 entityName:(NSString *)arg1 rangeStart:(id)arg2 rangeEnd:(id)arg3 peerRangeStart:(id)arg4 peerRangeEnd:(id)arg5;
- (NSArray *)allPeerRanges;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg0;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg0;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg0;
- (void)setUbiquityTableValue:(id)arg0 forKey:(NSString *)arg1;
- (NSArray *)ubiquityTableKeysAndValues;
- (NSString *)ubiquityTableValueForKey:(NSString *)arg0;
- (void)dropUbiquityTables;
- (void)cacheStatement:(id)arg0 forRequestWithIdentifier:(NSString *)arg1;
- (void)clearCachedStatementForRequestWithIdentifier:(NSString *)arg0;
- (void)dealloc;
- (void)commitTransaction;
- (void)connect;
- (void)disconnect;
- (void)beginTransaction;
- (char)isOpen;
- (void)execute;
- (void)finalize;
- (void)insertRow:(id)arg0;
- (void)deleteRow:(id)arg0;

@end
