/* Runtime dump - MBEngine
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBEngine : NSObject
{
    MBSettingsContext * _settingsContext;
    MBDebugContext * _debugContext;
    MBProperties * _properties;
    MBDomainManager * _domainManager;
    MBAppManager * _appManager;
    char _encrypted;
}

@property (readonly, nonatomic) int engineType;
@property (readonly, nonatomic) NSString * engineTypeString;
@property (readonly, nonatomic) char driveEngine;
@property (readonly, nonatomic) char serviceEngine;
@property (readonly, nonatomic) int engineMode;
@property (readonly, nonatomic) NSString * engineModeString;
@property (readonly, nonatomic) char backupEngine;
@property (readonly, nonatomic) char restoreEngine;
@property (readonly, nonatomic) int restoreType;
@property (readonly, nonatomic) NSString * restoreTypeString;
@property (readonly, nonatomic) char foregroundRestore;
@property (readonly, nonatomic) char backgroundRestore;
@property (readonly, nonatomic) MBSettingsContext * settingsContext;
@property (readonly, nonatomic) MBDebugContext * debugContext;
@property (readonly, nonatomic) MBProperties * properties;
@property (nonatomic) char encrypted;
@property (readonly, nonatomic) char migrate;
@property (readonly, nonatomic) MBDomainManager * domainManager;
@property (readonly, nonatomic) MBAppManager * appManager;
@property (readonly, nonatomic) char commitIfPossible;

+ (NSObject *)stringForEngineType:(int)arg0;
+ (MBEngine *)stringForEngineMode:(int)arg0;
+ (NSObject *)stringForRestoreType:(int)arg0;

- (void)dealloc;
- (MBProperties *)properties;
- (void)setEncrypted:(char)arg0;
- (char)isEncrypted;
- (char)isMigrate;
- (MBAppManager *)appManager;
- (int)engineType;
- (int)engineMode;
- (int)restoreType;
- (char)isRestoreEngine;
- (char)isServiceEngine;
- (char)isDriveEngine;
- (MBSettingsContext *)settingsContext;
- (char)isBackupEngine;
- (NSString *)engineTypeString;
- (NSString *)engineModeString;
- (NSString *)restoreTypeString;
- (NSString *)aggregateDictionaryKey:(NSString *)arg0;
- (MBEngine *)initWithSettingsContext:(MBSettingsContext *)arg0 debugContext:(MBDebugContext *)arg1 domainManager:(MBDomainManager *)arg2;
- (char)isForegroundRestore;
- (char)isBackgroundRestore;
- (char)shouldCommitIfPossible;
- (NSString *)validateFile:(NSString *)arg0;
- (NSString *)validateRestoreDomain:(NSString *)arg0 relativePath:(NSString *)arg1;
- (void)pushAggregateDictionaryTotalFileCount:(long long)arg0 totalFileSize:(long long)arg1 duration:(double)arg2;
- (MBDebugContext *)debugContext;
- (MBDomainManager *)domainManager;

@end
