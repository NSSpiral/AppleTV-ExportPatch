/* Runtime dump - CoreThemeDefinitionMigrator
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface CoreThemeDefinitionMigrator : NSObject
{
    NSMigrationManager * _migrationManager;
    NSURL * _documentURL;
    int _oldVersion;
    int _newVersion;
    NSString * temporaryMigrationPath;
}

@property (copy) NSString * temporaryMigrationPath;

- (void)dealloc;
- (NSString *)temporaryMigrationPath;
- (void)setTemporaryMigrationPath:(NSString *)arg0;
- (char)_checkDiskSpace:(id *)arg0;
- (NSError *)mappingModelForMigrationWithError:(id *)arg0;
- (char)_updateMetadata:(id *)arg0;
- (CoreThemeDefinitionMigrator *)initWithURL:(NSString *)arg0 oldVersion:(int)arg1 newVersion:(int)arg2;
- (char)migrateWithError:(id *)arg0;

@end
