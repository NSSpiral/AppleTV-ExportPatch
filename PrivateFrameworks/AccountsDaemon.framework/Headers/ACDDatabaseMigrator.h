/* Runtime dump - ACDDatabaseMigrator
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDDatabaseMigrator : NSObject
{
    NSManagedObjectContext * _migrationContext;
    NSPersistentStoreCoordinator * _privateCoordinator;
    NSPersistentStoreCoordinator * _realCoordinator;
    NSString * _databasePath;
    NSMutableDictionary * _realOptions;
}

- (char)run;
- (void).cxx_destruct;
- (ACDDatabaseMigrator *)initForDatabaseAtPath:(NSString *)arg0 persistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 options:(NSDictionary *)arg2;
- (id)_setUpContextForMigration;
- (int)_versionForModel:(NSObject *)arg0;
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(int)arg0;
- (void)_migrateNameAttributeOfDataclassEntities;
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(int)arg0;
- (void)_postProcessMigrationFromVersion:(int)arg0 migrationData:(NSData *)arg1;
- (NSString *)_fetchAllAuthorizationEntitiesForModelVersion:(int)arg0;
- (id)_fetchAllDataclassEntitles;
- (NSURL *)_compatibleModelForStoreAtURL:(NSURL *)arg0;

@end
