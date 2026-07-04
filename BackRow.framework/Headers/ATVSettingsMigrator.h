/* Runtime dump - ATVSettingsMigrator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface ATVSettingsMigrator : BRSingleton
{
    NSMutableArray * _clients;
    char _remoteMigrationComplete;
}

+ (ATVSettingsMigrator *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (void)registerClient:(NSObject *)arg0;
+ (void)migrate;

- (void)_migrate;
- (void)_migrationDone:(id)arg0;
- (void)_migrationDoneNoChanges:(id)arg0;
- (ATVSettingsMigrator *)init;
- (void).cxx_destruct;

@end
