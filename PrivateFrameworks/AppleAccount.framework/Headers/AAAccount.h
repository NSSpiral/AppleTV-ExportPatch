/* Runtime dump - AAAccount
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAccount : NSObject
{
    ACAccount * _account;
    NSString * _fmipToken;
    NSArray * _appleIDAliases;
    NSString * _protocolVersion;
}

@property (copy, nonatomic) NSString * authToken;
@property (copy, nonatomic) NSString * fmipToken;
@property (copy, nonatomic) NSString * password;
@property (copy, nonatomic) NSString * username;
@property (readonly, nonatomic) NSString * personID;
@property (readonly, nonatomic) NSString * firstName;
@property (readonly, nonatomic) NSString * lastName;
@property (readonly, nonatomic) NSString * primaryEmail;
@property (readonly, nonatomic) NSArray * appleIDAliases;
@property (nonatomic) char primaryAccount;
@property (readonly, nonatomic) char primaryEmailVerified;
@property (readonly, nonatomic) char needsEmailConfiguration;
@property (readonly, nonatomic) char needsRegistration;
@property (readonly, nonatomic) char serviceUnavailable;
@property (readonly, nonatomic) NSDictionary * serviceUnavailableInfo;
@property (readonly, nonatomic) NSString * protocolVersion;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSSet * provisionedDataclasses;
@property (readonly, nonatomic) NSSet * enabledDataclasses;
@property (copy, nonatomic) NSString * accountDescription;
@property (readonly, nonatomic) NSString * accountFooterText;
@property (readonly, nonatomic) NSDictionary * accountFooterButton;
@property (readonly, nonatomic) NSDictionary * accountFirstDisplayAlert;
@property (readonly, nonatomic) NSString * displayName;
@property (readonly, nonatomic) NSDictionary * dataclassProperties;
@property (readonly, nonatomic) NSString * syncStoreIdentifier;
@property (nonatomic) char needsToVerifyTerms;
@property (readonly, nonatomic) NSArray * supportedDataclasses;
@property (readonly, nonatomic) int accountServiceType;

+ (NSNumber *)dataclassesBoundToPrimaryAccount;
+ (NSNumber *)dataclassesBoundToSyncAccount;
+ (NSNumber *)dataclassesBoundToSingleAccount;
+ (NSString *)accountTypeString;

- (AAAccount *)initWithAccountIdentifier:(ACAccount *)arg0;
- (AAAccount *)init;
- (NSString *)identifier;
- (void).cxx_destruct;
- (NSString *)displayName;
- (NSDictionary *)dataclassProperties;
- (void)authenticateWithHandler:(id /* block */)arg0;
- (NSString *)fmipToken;
- (NSArray *)appleIDAliases;
- (char)primaryEmailVerified;
- (NSNumber *)_mailChildAccount;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg0 withHandler:(id /* block */)arg1;
- (char)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg0 withHandler:(id /* block */)arg1;
- (int)accountServiceType;
- (void)setPrimaryAccount:(char)arg0;
- (NSString *)accountFooterText;
- (NSDictionary *)accountFooterButton;
- (NSDictionary *)accountFirstDisplayAlert;
- (void)updateAccountWithProvisioningResponse:(NSURLResponse *)arg0;
- (char)serviceUnavailable;
- (NSDictionary *)serviceUnavailableInfo;
- (char)needsRegistration;
- (void)setUseCellular:(char)arg0 forDataclass:(ACDManagedDataclass *)arg1;
- (char)needsEmailConfiguration;
- (int)mobileMeAccountStatus;
- (id)_childAccounts;
- (void)notifyUserOfQuotaDepletion;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg0;
- (char)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg0;
- (void)saveTokensInKeychain;
- (void)savePasswordInKeychain;
- (void)saveFMIPTokenInKeychain;
- (void)removeTokensFromKeychain;
- (void)removePasswordFromKeychain;
- (void)flushCachedTokens;
- (void)flushCachedPassword;
- (void)updateAccountPropertiesWithHandler:(id /* block */)arg0;
- (void)setupChildMailAccountAndEnable:(char)arg0 withEmail:(SAPhonePlayVoiceMail *)arg1;
- (void)signInWithHandler:(id /* block */)arg0;
- (void)renewCredentialsForAppleIDWithHandler:(id /* block */)arg0;
- (void)lookupEmailAddresses:(id)arg0 withHandler:(id /* block */)arg1;
- (char)needsToVerifyTerms;
- (void)setNeedsToVerifyTerms:(char)arg0;
- (void)setFmipToken:(NSString *)arg0;
- (NSString *)accountPropertyForKey:(NSString *)arg0;
- (void)setAccountProperty:(NSObject *)arg0 forKey:(NSString *)arg1;
- (AAAccount *)initWithAccount:(ACAccount *)arg0;
- (char)isEnabledForDataclass:(id)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (char)primaryAccount;
- (char)useCellularForDataclass:(id)arg0;
- (void)setAuthToken:(NSString *)arg0;
- (NSString *)password;
- (NSString *)authToken;
- (NSString *)primaryEmail;
- (void)setPassword:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (NSString *)protocolVersion;
- (ACAccount *)account;
- (NSSet *)provisionedDataclasses;
- (NSString *)accountDescription;
- (void)setAccountDescription:(NSString *)arg0;
- (NSSet *)enabledDataclasses;
- (NSArray *)supportedDataclasses;
- (NSString *)syncStoreIdentifier;
- (NSString *)personID;
- (void)setEnabled:(char)arg0 forDataclass:(ACDManagedDataclass *)arg1;
- (id)propertiesForDataclass:(id)arg0;
- (char)isProvisionedForDataclass:(id)arg0;
- (NSString *)username;

@end
