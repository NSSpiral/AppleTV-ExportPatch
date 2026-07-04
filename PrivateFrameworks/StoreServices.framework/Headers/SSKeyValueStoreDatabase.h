/* Runtime dump - SSKeyValueStoreDatabase
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSKeyValueStoreDatabase : NSObject
{
    SSSQLiteDatabase * _database;
}

- (void)dealloc;
- (SSKeyValueStoreDatabase *)init;
- (SSKeyValueStoreDatabase *)initReadOnly;
- (void)readUsingSessionBlock:(id /* block */)arg0;
- (void)modifyUsingTransactionBlock:(id /* block */)arg0;
- (void)modifyAsyncUsingTransactionBlock:(id /* block */)arg0;
- (SSKeyValueStoreDatabase *)_initReadOnly:(char)arg0;
- (void)_dispatchBlockAsync:(id)arg0;
- (void)readAsyncUsingSessionBlock:(id /* block */)arg0;

@end
