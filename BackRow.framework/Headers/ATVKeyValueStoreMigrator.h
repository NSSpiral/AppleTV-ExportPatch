/* Runtime dump - ATVKeyValueStoreMigrator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVSettingsMigration;
@interface ATVKeyValueStoreMigrator : NSObject <ATVSettingsMigration>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)migrateFrom:(NSString *)arg0 to:(NSString *)arg1;

@end
