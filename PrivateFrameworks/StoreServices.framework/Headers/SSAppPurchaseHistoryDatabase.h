/* Runtime dump - SSAppPurchaseHistoryDatabase
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAppPurchaseHistoryDatabase : NSObject
{
    SSSQLiteDatabase * _database;
}

+ (SSAppPurchaseHistoryDatabase *)newDefaultInstance;
+ (void)_createDatabaseDirectory;
+ (char)_setupDatabase:(id)arg0;
+ (NSString *)accountUniqueIdentifierKey;

- (void)dealloc;
- (SSAppPurchaseHistoryDatabase *)init;
- (SSSQLiteDatabase *)database;
- (char)setValue:(NSObject *)arg0 forDatabaseProperty:(NSObject *)arg1;
- (NSObject *)valueForDatabaseProperty:(NSObject *)arg0;
- (SSAppPurchaseHistoryDatabase *)initWithDatabaseURL:(NSURL *)arg0 readOnly:(char)arg1;
- (void)readUsingTransactionBlock:(id /* block */)arg0;
- (char)removeValueForDatabaseProperty:(NSObject *)arg0;
- (void)modifyUsingAppPurchaseHistoryTransactionBlock:(id /* block */)arg0;
- (void)readAsyncUsingTransactionBlock:(id /* block */)arg0;
- (NSString *)currentAccountUniqueIdentifier;
- (char)setCurrentAccountUniqueIdentifier:(NSString *)arg0;
- (int)localRevisionForAccountUniqueIdentifier:(NSString *)arg0;
- (char)setLocalRevision:(int)arg0 forAccountUniqueIdentifier:(NSString *)arg1;
- (char)resetCacheForNewAccountID:(NSObject *)arg0;
- (NSDictionary *)allProperties:(NSArray *)arg0 accountID:(NSString *)arg1 includingHidden:(char)arg2;

@end
