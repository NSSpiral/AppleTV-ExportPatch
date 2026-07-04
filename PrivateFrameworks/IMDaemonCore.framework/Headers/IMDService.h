/* Runtime dump - IMDService
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDService : NSObject <IMSystemMonitorListener>
{
    NSBundle * _bundle;
    Class _sessionClass;
    NSString * _internalName;
    NSDictionary * _accountDefaults;
    NSDictionary * _serviceDefaults;
    NSDictionary * _serviceProperties;
    NSDictionary * _cachedServiceDefaults;
    NSDictionary * _cachedSetupServiceDefaults;
    char _blockPrefWriting;
}

@property (readonly, nonatomic) Class sessionClass;
@property (readonly, nonatomic) Class accountClass;
@property (readonly, retain, nonatomic) NSDictionary * serviceProperties;
@property (readonly, retain, nonatomic) NSBundle * bundle;
@property (readonly, retain, nonatomic) NSString * internalName;
@property (readonly, retain, nonatomic) NSString * serviceDomain;
@property (readonly, nonatomic) char isIDSBased;
@property (readonly, retain, nonatomic) NSDictionary * serviceDefaults;
@property (readonly, retain, nonatomic) NSDictionary * serviceDefaultsForSetup;
@property (readonly, retain, nonatomic) NSDictionary * defaultAccountSettings;
@property (readonly, nonatomic) char serviceRequiresSingleAccount;
@property (readonly, nonatomic) char shouldCreateActiveAccounts;
@property (readonly, nonatomic) char serviceWantsNullHostReachability;
@property (readonly, nonatomic) char serviceIgnoresNetworkConnectivity;
@property (readonly, nonatomic) char shouldForceAccountsActive;
@property (readonly, nonatomic) char shouldForceAccountsConnected;
@property (readonly, nonatomic) char serviceNeedsLogin;
@property (readonly, nonatomic) char serviceNeedsPassword;
@property (readonly, nonatomic) char serviceShouldBeAlwaysLoggedIn;
@property (readonly, nonatomic) char serviceRequiresHost;
@property (readonly, nonatomic) char serviceSupportsRegistration;
@property (readonly, nonatomic) char serviceChatsIgnoreLoginStatus;
@property (readonly, nonatomic) char serviceSupportsPresence;
@property (readonly, nonatomic) char supportsDatabase;
@property (readonly, nonatomic) char disallowDeactivation;
@property (readonly, nonatomic) int serviceProtocolVersion;

- (void)saveSettings;
- (void)dealloc;
- (NSString *)description;
- (NSBundle *)bundle;
- (IMDService *)initWithBundle:(NSBundle *)arg0;
- (NSString *)serviceDomain;
- (void)disableAccount:(NSObject *)arg0;
- (void)delayedSaveSettings;
- (Class)sessionClass;
- (NSString *)internalName;
- (char)shouldForceAccountsConnected;
- (char)isIDSBased;
- (NSDictionary *)serviceDefaults;
- (char)serviceRequiresSingleAccount;
- (NSDictionary *)defaultAccountSettings;
- (NSDictionary *)serviceProperties;
- (char)shouldCreateActiveAccounts;
- (char)disallowDeactivation;
- (char)shouldForceAccountsActive;
- (void)enableAccount:(NSObject *)arg0;
- (void)accountAdded:(id)arg0;
- (void)accountRemoved:(id)arg0;
- (NSBundle *)_copyServicePropertiesFromIMServiceBundle:(NSObject *)arg0;
- (void)synchronizeServiceDefaults;
- (void)unloadServiceBundle;
- (void)_reallyUnloadServiceBundle;
- (int)serviceProtocolVersion;
- (NSString *)_serviceDomain;
- (NSString *)oldInternalName;
- (void)loadServiceBundle;
- (id)_defaultDefaults;
- (NSString *)_serviceDefaultsForDomain:(NSString *)arg0;
- (NSString *)_oldServiceDomain;
- (void)purgeMemoryCaches;
- (NSDictionary *)serviceDefaultsForSetup;
- (char)clearOneTimeImportAccounts;
- (id)newAccountWithAccountDefaults:(NSDictionary *)arg0 accountID:(NSString *)arg1;
- (char)supportsDatabase;
- (char)serviceSupportsRegistration;
- (char)serviceIgnoresNetworkConnectivity;
- (char)serviceWantsNullHostReachability;
- (char)serviceNeedsLogin;
- (char)serviceNeedsPassword;
- (char)serviceShouldBeAlwaysLoggedIn;
- (char)serviceRequiresHost;
- (char)serviceChatsIgnoreLoginStatus;
- (char)serviceSupportsPresence;
- (void)systemDidEnterMemoryPressure;
- (void)systemDidStartBackup;
- (Class)accountClass;

@end
