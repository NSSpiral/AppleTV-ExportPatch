/* Runtime dump - BasicAccount
 * Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@interface BasicAccount : NSObject <AccountFullAccountProtocol>
{
    NSDictionary * _originalProperties;
    NSMutableDictionary * _properties;
    <AccountFullAccountProtocol> * _fullAccount;
    <AccountRefreshProtocol> * _syncAccount;
    BasicAccount * _parentAccount;
}

@property (retain, nonatomic) NSDictionary * originalProperties;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)supportedDataclassesForAccountType:(NSObject *)arg0;
+ (void)initialize;
+ (char)isMultitaskingEnabled;
+ (char)multipleStoresSupportedByDataclass:(id)arg0;
+ (BasicAccount *)removeActionsIncompatibleWithSingleStoreDataclass:(id)arg0;
+ (char)_isValidAccountType:(NSObject *)arg0;
+ (id)createNewAccountUID;
+ (NSObject *)accountWithType:(NSObject *)arg0 class:(Class)arg1;
+ (BasicAccount *)allSupportedDataclasses;
+ (BasicAccount *)userActionsToEnableDataclass:(id)arg0 forAccountType:(NSObject *)arg1;
+ (BasicAccount *)userActionsToDisableDataclass:(id)arg0 forAccountType:(NSObject *)arg1;
+ (NSObject *)deleteAccountActionsForAccountType:(NSObject *)arg0;
+ (char)showRemindersSeparatelyForAccountType:(NSObject *)arg0;
+ (char)displayToggleForDataclass:(id)arg0;
+ (char)userConfirmationIsRequiredByDataclass:(id)arg0;
+ (NSDictionary *)_creatorsInfo;
+ (NSDictionary *)_dataclassesProperties;
+ (NSObject *)_accountCreationMap;
+ (NSDictionary *)accountWithProperties:(NSMutableDictionary *)arg0;

- (void)dealloc;
- (BasicAccount *)init;
- (NSString *)identifier;
- (NSString *)type;
- (BasicAccount *)initWithProperties:(NSMutableDictionary *)arg0;
- (NSString *)displayName;
- (NSMutableDictionary *)properties;
- (NSObject *)_initWithType:(NSObject *)arg0 class:(Class)arg1;
- (void)setOriginalProperties:(NSDictionary *)arg0;
- (void)_forcedSetAccountProperty:(NSObject *)arg0 forKey:(NSString *)arg1;
- (id)_orderedDataclasses:(id)arg0;
- (id)_profileRestrictedDataclasses;
- (NSObject *)fullAccountCreatorClassNameForAccountType:(NSObject *)arg0 loader:(RUILoader *)arg1;
- (void)setFullAccount:(<AccountFullAccountProtocol> *)arg0;
- (NSNumber *)_cachedSyncAccount;
- (char)refreshContainerWithIdentifier:(NSString *)arg0 forDataclass:(ACDManagedDataclass *)arg1 isUserRequested:(char)arg2;
- (char)refreshContainerListForDataclass:(id)arg0 isUserRequested:(char)arg1;
- (char)refreshContainersForDataclass:(id)arg0 isUserRequested:(char)arg1;
- (void)renewAccountCredentialsWithHandler:(id /* block */)arg0;
- (id)propertiesToSave;
- (void)setAccountClass:(Class)arg0;
- (NSString *)shortTypeString;
- (void)setEnabledForDataclasses:(id)arg0;
- (id)fullAccountUsingLoader:(id)arg0;
- (char)refreshContainerWithIdentifier:(NSString *)arg0 forDataclass:(ACDManagedDataclass *)arg1;
- (char)refreshContainerListForDataclass:(id)arg0;
- (char)refreshContainersForDataclass:(id)arg0;
- (NSDictionary *)originalProperties;
- (NSObject *)syncAccountCreatorClassNameForAccountType:(NSObject *)arg0;
- (NSObject *)_creatorClassNameForAccountType:(NSObject *)arg0 creatorType:(NSObject *)arg1 loader:(RUILoader *)arg2;
- (void)_forcedSetEnabled:(char)arg0 forDataclass:(ACDManagedDataclass *)arg1;
- (NSString *)accountPropertyForKey:(NSString *)arg0;
- (void)setAccountProperty:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)typeString;
- (char)isEnabledForDataclass:(id)arg0;
- (void)setDisplayName:(NSString *)arg0;
- (void)setParentAccount:(BasicAccount *)arg0;
- (BasicAccount *)parentAccount;
- (NSMutableSet *)provisionedDataclasses;
- (NSString *)parentAccountIdentifier;
- (void)removeAccountPropertyForKey:(NSString *)arg0;
- (NSMutableSet *)enabledDataclasses;
- (id)supportedDataclasses;
- (Class)accountClass;
- (NSString *)syncStoreIdentifier;
- (void)setEnabled:(char)arg0 forDataclass:(ACDManagedDataclass *)arg1;

@end
