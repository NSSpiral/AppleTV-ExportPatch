/* Runtime dump - DataClassMigrator
 * Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DataClassMigrator : NSObject
{
    NSDictionary * _context;
    char _didUpgrade;
}

@property (retain, nonatomic) NSDictionary * context;
@property (nonatomic) char didUpgrade;
@property (readonly, nonatomic) char didRestoreFromBackup;
@property (readonly, nonatomic) char didMigrateBackupFromDifferentDevice;
@property (readonly, nonatomic) char didRestoreFromCloudBackup;
@property (readonly, nonatomic) char shouldPreserveSettingsAfterRestore;
@property (readonly, nonatomic) char wasPasscodeSetInBackup;

- (float)migrationProgress;
- (NSDictionary *)context;
- (void)setContext:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (char)performMigration;
- (char)didUpgrade;
- (char)didRestoreFromBackup;
- (char)didMigrateBackupFromDifferentDevice;
- (char)didRestoreFromCloudBackup;
- (char)shouldPreserveSettingsAfterRestore;
- (char)wasPasscodeSetInBackup;
- (NSString *)dataClassName;
- (float)estimatedDuration;
- (void)setDidUpgrade:(char)arg0;

@end
