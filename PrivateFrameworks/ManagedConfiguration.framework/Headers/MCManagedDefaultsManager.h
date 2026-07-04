/* Runtime dump - MCManagedDefaultsManager
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCManagedDefaultsManager : NSObject

+ (MCManagedDefaultsManager *)sharedManager;

- (NSString *)managedDefaultsPathForDomain:(NSString *)arg0;
- (NSString *)managedDefaultsForDomain:(NSString *)arg0;
- (void)setDefaults:(SBFWallpaperDefaults *)arg0 forManagedDomain:(NSString *)arg1;
- (char)domainHasManagedDefaults:(id)arg0;
- (void)addDefaults:(SBFWallpaperDefaults *)arg0 toManagedDomain:(NSString *)arg1;
- (void)removeDefaults:(SBFWallpaperDefaults *)arg0 fromManagedDomain:(NSString *)arg1;
- (void)removeAllManagedDefaultsFromDomain:(NSString *)arg0;
- (void)sendManagedDefaultsChangedNotificationForDomains:(id)arg0;

@end
