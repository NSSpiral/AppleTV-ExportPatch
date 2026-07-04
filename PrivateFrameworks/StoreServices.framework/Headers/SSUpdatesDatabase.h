/* Runtime dump - SSUpdatesDatabase
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatesDatabase : NSObject
{
    SSSQLiteDatabase * _database;
}

@property (readonly) char requiresMigration;

- (void)dealloc;
- (SSUpdatesDatabase *)init;
- (SSUpdatesDatabase *)initReadOnly;
- (void)readUsingSessionBlock:(id /* block */)arg0;
- (void)modifyUsingTransactionBlock:(id /* block */)arg0;
- (void)modifyAsyncUsingTransactionBlock:(id /* block */)arg0;
- (SSUpdatesDatabase *)_initReadOnly:(char)arg0;
- (void)_dispatchBlockAsync:(id)arg0;
- (void)readAsyncUsingSessionBlock:(id /* block */)arg0;
- (char)requiresMigration;

@end
