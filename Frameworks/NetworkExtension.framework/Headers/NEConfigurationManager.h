/* Runtime dump - NEConfigurationManager
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEConfigurationManager : NSObject
{
    NSString * _description;
    NEHelper * _helper;
    char _hasVPNAPIEntitlement;
    char _hasReadPermission;
    char _isVPNPublicAPI;
    char _isNEHelper;
    NSUUID * _userUUID;
    <NEConfigurationManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    int _changedNotifyToken;
    NSDictionary * _currentIndex;
    NSObject<OS_dispatch_queue> * _changedQueue;
    id _changedHandler;
    NSMutableDictionary * _loadedIndex;
    NSMutableDictionary * _loadedConfigurations;
    NSKeyedUnarchiver * _decoder;
    NSData * _SCPreferencesSignature;
    NSString * _pluginType;
    long long _generation;
}

@property char hasVPNAPIEntitlement;
@property (readonly) NSUUID * userUUID;
@property (retain) <NEConfigurationManagerDelegate> * delegate;
@property (readonly) NSObject<OS_dispatch_queue> * queue;
@property int changedNotifyToken;
@property (retain) NSDictionary * currentIndex;
@property (retain) NSObject<OS_dispatch_queue> * changedQueue;
@property (copy) id changedHandler;
@property (retain) NSMutableDictionary * loadedIndex;
@property (retain) NSMutableDictionary * loadedConfigurations;
@property (retain) NSKeyedUnarchiver * decoder;
@property long long generation;
@property (readonly) NEHelper * helper;
@property (retain) NSData * SCPreferencesSignature;
@property (readonly) NSString * pluginType;
@property char hasReadPermission;
@property char isVPNPublicAPI;
@property char isNEHelper;

+ (void)updateFlags:(unsigned long long *)arg0 withConfiguration:(NSDictionary *)arg1;
+ (char)configurationIsEnabled:(id)arg0;
+ (int)configuration:(NSDictionary *)arg0 overlapsWithOtherConfiguration:(NSDictionary *)arg1;
+ (void)disableConfiguration:(NSDictionary *)arg0 onDemandOnly:(char)arg1;
+ (NEConfigurationManager *)sharedManagerForAllUsers;
+ (NEConfigurationManager *)sharedManager;

- (NEHelper *)helper;
- (NSString *)pluginType;
- (NEConfigurationManager *)initWithPluginType:(NSString *)arg0;
- (NEConfigurationManager *)initWithUserUUID:(NSUUID *)arg0;
- (int)changedNotifyToken;
- (NSKeyedUnarchiver *)decoder;
- (void)sendRequest:(NSURLRequest *)arg0 responseHandler:(NSObject<OS_xpc_object> *)arg1;
- (NSMutableDictionary *)loadedConfigurations;
- (void)postChangeNotificationWithGeneration:(long long)arg0 andFlags:(unsigned long long)arg1;
- (void)loadConfigurationsInternal:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (NSError *)readIndexFromDiskWithError:(id *)arg0;
- (char)hasReadPermission;
- (void)setDecoder:(NSKeyedUnarchiver *)arg0;
- (NSUUID *)userUUID;
- (NSObject *)filterIndexWithFilter:(NSObject *)arg0;
- (void)notifyChanges;
- (NSMutableDictionary *)loadedIndex;
- (void)clearLoadedConfigurationsWithIDs:(int)arg0;
- (NSString *)decodeConfigurationWithIdentifier:(NSString *)arg0;
- (void)didLoadConfiguration:(NSDictionary *)arg0;
- (void)registerForChangeNotifications;
- (char)isVPNPublicAPI;
- (char)reloadFromDisk;
- (char)isNEHelper;
- (void)setGeneration:(long long)arg0;
- (NSError *)errorWithCode:(int)arg0 specifics:(id)arg1;
- (NSObject<OS_dispatch_queue> *)changedQueue;
- (id /* block */)changedHandler;
- (id)copyChangedConfigurationIDs:(id)arg0;
- (void)getCurrentIndexWithCompletionHandler:(id /* block */)arg0;
- (void)setChangedNotifyToken:(int)arg0;
- (void)setLoadedIndex:(NSMutableDictionary *)arg0;
- (void)setLoadedConfigurations:(NSMutableDictionary *)arg0;
- (void)didLoadConfiguration:(NSDictionary *)arg0 withSignature:(NSObject *)arg1;
- (char)configurationHasChanged:(NSNotification *)arg0;
- (void)setHasReadPermission:(char)arg0;
- (void)setSCPreferencesSignature:(NSObject *)arg0;
- (char)resetKeychainItemsAfterProtocolChange:(NSDictionary *)arg0 newConfiguration:(NSDictionary *)arg1;
- (NSObject *)makeMutableCopyOfIndex:(NSObject *)arg0;
- (NSData *)SCPreferencesSignature;
- (id)saveConfigurationToDisk:(id)arg0 updateSCPreferences:(struct __SCPreferences *)arg1 currentSignature:(NSObject *)arg2 userUUID:(NSUUID *)arg3;
- (id)removeConfigurationFromDisk:(id)arg0 updateSCPreferences:(struct __SCPreferences *)arg1;
- (void)updateSCPreferencesSignatureOnDisk;
- (void)setChangedQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setChangedHandler:(id /* block */)arg0;
- (void)postGeneration;
- (void)saveConfigurationToDisk:(id)arg0 currentSignature:(NSObject *)arg1 userUUID:(NSUUID *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(id /* block */)arg4;
- (void)removeConfigurationFromDisk:(id)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (void)syncWithSystemConfigurationWithAppNameCallback:(id /* block */)arg0 completionHandler:(/* block */ id)arg1;
- (void)loadIndexWithFilter:(NSObject *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 handler:(id /* block */)arg2;
- (void)loadConfigurations:(id)arg0 withFilter:(NSObject *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(id /* block */)arg3;
- (void)loadConfigurationWithID:(int)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 handler:(id /* block */)arg2;
- (void)loadConfigurationsWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 handler:(id /* block */)arg1;
- (void)saveConfiguration:(NSDictionary *)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 handler:(id /* block */)arg2;
- (void)removeConfiguration:(NSDictionary *)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 handler:(id /* block */)arg2;
- (void)setChangedQueue:(NSObject<OS_dispatch_queue> *)arg0 andHandler:(id /* block */)arg1;
- (void)handleFileRemovedWithCompletionHandler:(id /* block */)arg0;
- (void)handlePluginTypesRemoved:(id)arg0 configuration:(NSDictionary *)arg1 vpn:(id)arg2 updateSCPreferences:(struct __SCPreferences *)arg3;
- (void)handleApplicationsRemoved:(id)arg0 pluginTypesRemoved:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)copyIdentities:(id)arg0 fromDomain:(int)arg1 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg2 handler:(id /* block */)arg3;
- (char)hasVPNAPIEntitlement;
- (void)setHasVPNAPIEntitlement:(char)arg0;
- (void)setIsVPNPublicAPI:(char)arg0;
- (void)setIsNEHelper:(char)arg0;
- (void)dealloc;
- (void)setDelegate:(<NEConfigurationManagerDelegate> *)arg0;
- (NEConfigurationManager *)init;
- (NSString *)description;
- (<NEConfigurationManagerDelegate> *)delegate;
- (NSDictionary *)currentIndex;
- (void).cxx_destruct;
- (void)setCurrentIndex:(NSDictionary *)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (long long)generation;

@end
