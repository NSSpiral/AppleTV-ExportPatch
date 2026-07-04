/* Runtime dump - SSSQLiteQuery
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteQuery : NSObject
{
    SSSQLiteDatabase * _database;
    SSSQLiteQueryDescriptor * _descriptor;
}

@property (readonly) SSSQLiteDatabase * database;
@property (readonly) SSSQLiteQueryDescriptor * queryDescriptor;
@property (readonly) int countOfEntities;

- (void)dealloc;
- (SSSQLiteDatabase *)database;
- (int)countOfEntities;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg0;
- (char)deleteAllEntities;
- (void)enumeratePersistentIDsAndProperties:(id *)arg0 count:(NSObject *)arg1 usingBlock:(unsigned int)arg2;
- (void)bindToSelectStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(int *)arg1;
- (NSDictionary *)copySelectSQLWithProperties:(id *)arg0 count:(NSObject *)arg1;
- (void)enumerateMemoryEntitiesWithProperties:(NSDictionary *)arg0 usingBlock:(id /* block */)arg1;
- (NSDictionary *)_newSelectSQLWithProperties:(id *)arg0 count:(NSObject *)arg1;
- (SSSQLiteQuery *)initWithDatabase:(SSSQLiteDatabase *)arg0 descriptor:(SSSQLiteQueryDescriptor *)arg1;
- (NSString *)copyEntityIdentifiers;
- (char)createTemporaryTableWithName:(NSString *)arg0 properties:(id *)arg1 count:(NSObject *)arg2;
- (void)enumerateMemoryEntitiesUsingBlock:(id /* block */)arg0;
- (SSSQLiteQueryDescriptor *)queryDescriptor;

@end
