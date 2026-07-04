/* Runtime dump - SSVPlayActivityTable
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlayActivityTable : NSObject
{
    SSSQLiteDatabase * _database;
}

@property (nonatomic) unsigned long long currentEventsRevision;
@property (readonly, copy, nonatomic) NSString * eventsRevisionVersionToken;

+ (NSString *)databasePath;
+ (char)_setupDatabase:(id)arg0;
+ (NSString *)_eventsDatabaseTableName;
+ (NSString *)_propertiesDatabaseTableName;

- (SSVPlayActivityTable *)init;
- (void).cxx_destruct;
- (void)performTransactionWithBlock:(id /* block */)arg0;
- (unsigned long long)currentEventsRevision;
- (NSString *)eventsRevisionVersionToken;
- (void)getPlayActivityEvents:(id *)arg0 relevantRevisionsIndexSet:(id *)arg1 withStartRevision:(unsigned long long)arg2 endRevision:(unsigned long long)arg3 additionalRevisionsIndexSet:(NSSet *)arg4 error:(id *)arg5;
- (char)insertPlayActivityEvent:(NSObject *)arg0 withRevision:(unsigned long long)arg1 returningError:(id *)arg2;
- (void)setCurrentEventsRevision:(unsigned long long)arg0;
- (char)removePlayActivityEventsUpToRevision:(unsigned long long)arg0 returningError:(id *)arg1;
- (void)getPlayActivityEvents:(id *)arg0 relevantRevisionsIndexSet:(id *)arg1 withStartRevision:(unsigned long long)arg2 endRevision:(unsigned long long)arg3 storeAccountID:(unsigned long long)arg4 additionalRevisionsIndexSet:(NSSet *)arg5 error:(id *)arg6;
- (id)revisionsIndexSetForPlayActivityEvents:(id)arg0;
- (id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg0;
- (char)_removeDatabaseReturningError:(id *)arg0;
- (NSString *)_valueForDatabasePropertyKey:(NSString *)arg0;
- (char)_setValue:(NSValue *)arg0 forDatabasePropertyKey:(NSString *)arg1;
- (void)_getPlayActivityEvents:(id *)arg0 relevantRevisionsIndexSet:(id *)arg1 withStartRevision:(unsigned long long)arg2 endRevision:(unsigned long long)arg3 storeAccountID:(unsigned long long)arg4 shouldFilterStoreAccountID:(char)arg5 additionalRevisionsIndexSet:(NSSet *)arg6 error:(id *)arg7;
- (id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(id /* block */)arg0 count:(/* block */ id)arg1;

@end
