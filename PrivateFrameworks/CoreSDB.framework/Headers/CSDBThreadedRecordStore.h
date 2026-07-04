/* Runtime dump - CSDBThreadedRecordStore
 * Image: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB
 */

@interface CSDBThreadedRecordStore : NSObject
{
    struct CSDBRecordStore * _recordStore;
    NSObject<OS_dispatch_queue> * _recordStoreQueue;
    NSString * _identifier;
    _CSDBThreadObject * _thread;
    char _wantsRegister;
}

- (void)registerClass:(struct ? *)arg0;
- (void)dealloc;
- (CSDBThreadedRecordStore *)initWithIdentifier:(struct __CFString *)arg0;
- (void)performBlock:(id /* block */)arg0 afterDelay:(/* block */ id)arg1;
- (char)ownsCurrentThreadOtherwiseAssert:(char)arg0;
- (void)setupDatabaseWithAllowLocalMigration:(char)arg0 pathBlock:(id /* block */)arg1 setupStoreHandler:(/* block */ id)arg2 connectionInitializer:(/* block */ id *)arg3 versionChecker:(/* block */ id *)arg4 migrationHandler:(/* block */ id *)arg5 schemaVersion:(/* block */ id *)arg6 dataProtectionClass:(int)arg7 registerBlock:(unsigned int)arg8;
- (void)teardownDatabase;
- (void)_teardownDatabaseOnQueue;
- (void)performBlock:(id /* block */)arg0 waitUntilDone:(/* block */ id)arg1;

@end
