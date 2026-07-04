/* Runtime dump - ISSoftwareMap
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISSoftwareMap : NSObject
{
    NSArray * _applications;
}

@property (readonly, nonatomic) NSArray * applications;

+ (NSString *)applicationForBundleIdentifier:(NSString *)arg0 applicationType:(NSObject *)arg1;
+ (NSString *)applicationForBundleIdentifier:(NSString *)arg0;
+ (char)currentMapIsValid;
+ (void)setCurrentMap:(NSObject *)arg0;
+ (void)startObservingNotifications;
+ (ISSoftwareMap *)currentMap;
+ (ISSoftwareMap *)copySoftwareUpdatesPropertyListWithApplications:(NSArray *)arg0 updatesContext:(NSObject *)arg1;
+ (ISSoftwareMap *)_newSoftwareUpdateDictionaryForApplication:(id)arg0;
+ (ISSoftwareMap *)containerPathForApp:(id)arg0 homeDirectory:(id)arg1 systemMetadataDirectory:(id)arg2;
+ (void)enumerateApplicationsForProxies:(id)arg0 usingBlock:(id /* block */)arg1;
+ (char)haveApplicationsOfType:(NSObject *)arg0;
+ (void)invalidateCurrentMap;
+ (NSObject *)loadedMap;
+ (void)_startWatchingInstallationNotifications;

- (void)dealloc;
- (ISSoftwareMap *)init;
- (NSArray *)applications;
- (NSString *)applicationForBundleIdentifier:(NSString *)arg0;
- (void)_loadFromMobileInstallation;
- (NSString *)copySoftwareUpdatesPropertyListWithUpdatesContext:(NSObject *)arg0;
- (NSString *)applicationForItemIdentifier:(NSString *)arg0;
- (NSArray *)copySoftwareUpdatesPropertyList;

@end
