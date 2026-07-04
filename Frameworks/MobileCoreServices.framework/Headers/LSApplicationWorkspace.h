/* Runtime dump - LSApplicationWorkspace
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSApplicationWorkspace : NSObject

+ (LSApplicationWorkspace *)defaultWorkspace;

- (char)establishConnection;
- (NSObject *)remoteObserver;
- (NSString *)pluginsWithIdentifiers:(id)arg0 protocols:(NSDictionary *)arg1 version:(NSString *)arg2 applyFilter:(NSObject *)arg3;
- (NSObject *)operationToOpenResource:(NSObject *)arg0 usingApplication:(id)arg1 uniqueDocumentIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3 delegate:(NSObject *)arg4;
- (NSObject *)operationToOpenResource:(NSObject *)arg0 usingApplication:(id)arg1 uniqueDocumentIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (char)installApplication:(id)arg0 withOptions:(unsigned long long)arg1 error:(id *)arg2 usingBlock:(id /* block */)arg3;
- (id)installProgressForApplication:(id)arg0 withPhase:(unsigned int)arg1;
- (char)uninstallApplication:(id)arg0 withOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (char)registerApplicationDictionary:(NSDictionary *)arg0 withObserverNotification:(unsigned int)arg1;
- (char)installPhaseFinishedForProgress:(id)arg0;
- (void)clearCreatedProgressForBundleID:(NSObject *)arg0;
- (void)removeInstallProgressForBundleID:(NSObject *)arg0;
- (void)getKnowledgeUUID:(id *)arg0 andSequenceNumber:(id *)arg1;
- (NSObject *)delegateProxy;
- (NSObject *)applicationForOpeningResource:(NSObject *)arg0;
- (id)directionsApplications;
- (NSArray *)applicationsWithUIBackgroundModes;
- (NSArray *)applicationsWithAudioComponents;
- (NSBundle *)applicationsWithSettingsBundle;
- (id)applicationsWithVPNPlugins;
- (id)applicationsWithExternalAccessoryProtocols;
- (NSObject *)applicationForUserActivityType:(NSObject *)arg0;
- (NSString *)applicationForUserActivityDomainName:(NSString *)arg0;
- (NSObject *)applicationsOfType:(unsigned int)arg0;
- (NSString *)pluginsWithIdentifiers:(id)arg0 protocols:(NSDictionary *)arg1 version:(NSString *)arg2 withFilter:(NSObject *)arg3;
- (NSString *)pluginsWithIdentifiers:(id)arg0 protocols:(NSDictionary *)arg1 version:(NSString *)arg2;
- (char)openApplicationWithBundleID:(NSString *)arg0;
- (id)installedVPNPlugins;
- (id)placeholderApplications;
- (id)unrestrictedApplications;
- (id)allApplications;
- (id)publicURLSchemes;
- (char)getClaimedActivityTypes:(id *)arg0 domains:(id *)arg1;
- (char)installApplication:(id)arg0 withOptions:(unsigned long long)arg1;
- (char)installApplication:(id)arg0 withOptions:(unsigned long long)arg1 error:(id *)arg2;
- (char)uninstallApplication:(id)arg0 withOptions:(unsigned long long)arg1;
- (char)registerApplication:(id)arg0;
- (char)registerPlugin:(id)arg0;
- (char)unregisterPlugin:(id)arg0;
- (char)updateSINFWithData:(NSData *)arg0 forApplication:(UIApplication *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (char)invalidateIconCache:(NSObject *)arg0;
- (void)clearAdvertisingIdentifier;
- (void)_clearCachedAdvertisingIdentifier;
- (NSString *)deviceIdentifierForAdvertising;
- (NSObject *)installProgressForBundleID:(NSObject *)arg0 makeSynchronous:(unsigned char)arg1;
- (char)_LSPrivateRebuildApplicationDatabasesForSystemApps:(char)arg0 internal:(char)arg1 user:(char)arg2;
- (NSString *)applicationsAvailableForHandlingURLScheme:(NSString *)arg0;
- (id)privateURLSchemes;
- (NSURL *)URLOverrideForURL:(NSURL *)arg0;
- (char)openURL:(NSURL *)arg0;
- (void)removeObserver:(NSObject *)arg0;
- (NSString *)deviceIdentifierForVendor;
- (NSObject *)applicationsAvailableForOpeningDocument:(NSObject *)arg0;
- (NSObject *)operationToOpenResource:(NSObject *)arg0 usingApplication:(id)arg1 uniqueDocumentIdentifier:(NSString *)arg2 sourceIsManaged:(char)arg3 userInfo:(NSDictionary *)arg4 delegate:(NSObject *)arg5;
- (char)openURL:(NSURL *)arg0 withOptions:(unsigned long long)arg1;
- (char)openSensitiveURL:(NSURL *)arg0 withOptions:(unsigned long long)arg1;
- (id)allInstalledApplications;
- (void)addObserver:(NSObject *)arg0;
- (NSObject *)operationToOpenResource:(NSObject *)arg0 usingApplication:(id)arg1 userInfo:(NSDictionary *)arg2;
- (char)registerApplicationDictionary:(NSDictionary *)arg0;
- (char)unregisterApplication:(id)arg0;
- (char)applicationIsInstalled:(id)arg0;
- (void)enumerateBundlesOfType:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (id)installedPlugins;
- (void)_LSClearSchemaCaches;

@end
