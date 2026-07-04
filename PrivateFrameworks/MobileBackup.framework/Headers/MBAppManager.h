/* Runtime dump - MBAppManager
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBAppManager : NSObject
{
    MBSettingsContext * _settingsContext;
    NSMutableDictionary * _containersByID;
}

+ (MBAppManager *)appManager;
+ (NSString *)appManagerWithSettingsContext:(MBSettingsContext *)arg0;

- (void)dealloc;
- (id)allContainers;
- (NSString *)containerWithIdentifier:(NSString *)arg0;
- (MBAppManager *)initWithSettingsContext:(MBSettingsContext *)arg0;
- (id)allApps;
- (NSArray *)_subdomainNamesForAppDomainNames:(id)arg0;
- (NSArray *)allDisabledDomainNames;
- (NSError *)_userAppsWithError:(id *)arg0;
- (NSError *)_safeHarborsWithError:(id *)arg0;
- (id)_appsWithPlists:(id)arg0 error:(id *)arg1;
- (void)removeAllDisabledDomainNames;
- (char)isDomainNameEnabled:(id)arg0;
- (void)setEnabled:(char)arg0 forDomainName:(NSString *)arg1;
- (NSArray *)allRestrictedDomainNames;
- (char)loadAppsWithSafeHarbors:(char)arg0 error:(id *)arg1;
- (NSString *)appWithIdentifier:(NSString *)arg0;
- (void)removeOldSafeHarbors;
- (NSObject *)createSafeHarborForContainer:(NSObject *)arg0 error:(id *)arg1;

@end
