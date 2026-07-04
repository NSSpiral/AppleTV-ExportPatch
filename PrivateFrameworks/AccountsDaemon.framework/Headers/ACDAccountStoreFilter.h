/* Runtime dump - ACDAccountStoreFilter
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccountStoreFilter : NSObject <ACDAccountStoreProtocol>
{
    ACDAccountStore * _backingAccountStore;
}

@property (retain, nonatomic) ACDAccountStore * backingAccountStore;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)_whiteList;

- (void).cxx_destruct;
- (void)accountsWithAccountType:(NSObject *)arg0 handler:(id /* block */)arg1;
- (void)saveAccount:(NSObject *)arg0 verify:(char)arg1 dataclassActions:(id)arg2 completion:(id /* block */)arg3;
- (void)openAuthenticationURLForAccount:(NSObject *)arg0 withDelegateClassName:(NSString *)arg1 fromBundleAtPath:(NSString *)arg2 shouldConfirm:(char)arg3 completion:(id /* block */)arg4;
- (void)notifyRemoteDevicesOfModifiedAccount:(NSObject *)arg0 withChangeType:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)setClientBundleID:(NSString *)arg0 withHandler:(id /* block */)arg1;
- (void)setNotificationsEnabled:(char)arg0;
- (void)accountsWithHandler:(id /* block */)arg0;
- (void)accountTypesWithHandler:(id /* block */)arg0;
- (void)accountWithIdentifier:(NSString *)arg0 handler:(id /* block */)arg1;
- (void)parentAccountForAccountWithIdentifier:(NSString *)arg0 handler:(id /* block */)arg1;
- (void)childAccountsForAccountWithIdentifier:(NSString *)arg0 handler:(id /* block */)arg1;
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg0 handler:(id /* block */)arg1;
- (void)accountIdentifiersEnabledForDataclass:(id)arg0 handler:(id /* block */)arg1;
- (void)accountExistsWithDescription:(NSString *)arg0 completion:(id /* block */)arg1;
- (void)kerberosAccountsForDomainFromURL:(NSURL *)arg0 completion:(id /* block */)arg1;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg0 completion:(id /* block */)arg1;
- (void)accountsWithAccountTypeIdentifiers:(id)arg0 preloadedProperties:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (void)childAccountsWithAccountTypeIdentifier:(NSString *)arg0 parentAccountIdentifier:(NSString *)arg1 handler:(id /* block */)arg2;
- (void)displayAccountTypeForAccountWithIdentifier:(NSString *)arg0 handler:(id /* block */)arg1;
- (void)accountTypeWithIdentifier:(NSString *)arg0 handler:(id /* block */)arg1;
- (void)credentialForAccountWithIdentifier:(NSString *)arg0 handler:(id /* block */)arg1;
- (void)credentialForAccount:(NSObject *)arg0 serviceID:(NSString *)arg1 handler:(id /* block */)arg2;
- (void)enabledDataclassesForAccountWithIdentifier:(NSString *)arg0 handler:(id /* block */)arg1;
- (void)provisionedDataclassesForAccountWithIdentifier:(NSString *)arg0 handler:(id /* block */)arg1;
- (void)dataclassesWithHandler:(id /* block */)arg0;
- (void)supportedDataclassesForAccountType:(NSObject *)arg0 handler:(id /* block */)arg1;
- (void)syncableDataclassesForAccountType:(NSObject *)arg0 handler:(id /* block */)arg1;
- (void)dataclassActionsForAccountSave:(id)arg0 completion:(id /* block */)arg1;
- (void)dataclassActionsForAccountDeletion:(id)arg0 completion:(id /* block */)arg1;
- (void)isPerformingDataclassActionsForAccount:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)accessKeysForAccountType:(NSObject *)arg0 handler:(id /* block */)arg1;
- (void)removeAccount:(NSObject *)arg0 withDataclassActions:(id)arg1 completion:(id /* block */)arg2;
- (void)canSaveAccount:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)saveAccount:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(NSString *)arg0 withHandler:(id /* block */)arg1;
- (void)insertAccountType:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)removeAccountType:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)requestAccessForAccountTypeWithIdentifier:(NSString *)arg0 options:(NSDictionary *)arg1 withHandler:(id /* block */)arg2;
- (void)appPermissionsForAccountType:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)setPermissionGranted:(id)arg0 forBundleID:(NSObject *)arg1 onAccountType:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (void)permissionForAccountType:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)grantedPermissionsForAccountType:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)clearGrantedPermissionsForAccountType:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)typeIdentifierForDomain:(NSString *)arg0 withHandler:(id /* block */)arg1;
- (void)clearAllPermissionsGrantedForAccountType:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)verifyCredentialsForAccount:(NSObject *)arg0 options:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (void)isTetheredSyncingEnabledForDataclass:(id)arg0 completion:(id /* block */)arg1;
- (void)tetheredSyncSourceTypeForDataclass:(id)arg0 completion:(id /* block */)arg1;
- (void)isPushSupportedForAccount:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg0 withAccountTypeIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)addClientToken:(NSString *)arg0 forAccountIdentifier:(NSString *)arg1 completion:(id /* block */)arg2;
- (void)clientTokenForAccountIdentifier:(NSString *)arg0 completion:(id /* block */)arg1;
- (void)notifyRemoteDevicesOfModifiedAccount:(NSObject *)arg0 withChangeType:(NSObject *)arg1;
- (void)saveAccount:(NSObject *)arg0 toPairedDeviceWithOptions:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (void)removeAccountsFromPairedDeviceWithCompletion:(id /* block */)arg0;
- (ACDAccountStore *)backingAccountStore;
- (void)setBackingAccountStore:(ACDAccountStore *)arg0;
- (char)_accessGrantedForClient:(NSObject *)arg0 onAccountTypeID:(NSObject *)arg1;
- (char)_wildCardAuthorizationMatchingForAccountTypeIdentifier:(NSString *)arg0;
- (NSString *)_appPermissionsForAccountTypeIdentifier:(NSString *)arg0;
- (char)_isClientPermittedToAccessAccountTypeWithIdentifier:(NSString *)arg0;
- (char)_accessGrantedForBundleID:(NSObject *)arg0 onAccountTypeID:(NSObject *)arg1;
- (char)_isClientPermittedToAccessAccount:(NSObject *)arg0;
- (char)_isClientPermittedToRemoveAccount:(NSObject *)arg0;
- (char)_clientHasPermissionToAddAccount:(NSObject *)arg0;
- (void)renewCredentialsForAccount:(NSObject *)arg0 options:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (void)openAuthenticationURL:(NSURL *)arg0 forAccount:(NSObject *)arg1 shouldConfirm:(char)arg2 completion:(id /* block */)arg3;
- (void)handleURL:(NSURL *)arg0;

@end
