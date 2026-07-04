/* Runtime dump - CastleIMAPAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface CastleIMAPAccount : IMAPAccount
{
    MFLock * _appleAccountLock;
    ACAccount * _appleAccount;
    DeliveryAccount * _deliveryAccount;
    id _readyForPushRegistration;
    NSMutableDictionary * _aliasChanges;
    NSString * _updatedDefaultEmail;
}

@property (readonly, retain, nonatomic) NSString * personID;
@property (readonly, retain, nonatomic) NSString * authToken;
@property (readonly, nonatomic) ACAccount * appleAccount;
@property (readonly, nonatomic) ACAccountStore * accountStore;
@property (readonly, nonatomic) NSString * deliveryHostname;
@property (readonly, nonatomic) unsigned int deliveryPortNumber;
@property (readonly, nonatomic) char deliveryUsesSSL;
@property (readonly, nonatomic) NSURL * aliasLookupURL;

+ (CastleIMAPAccount *)emailAddressHostPart;
+ (NSNumber *)newChildAccountWithParentAccount:(NSObject *)arg0 error:(id *)arg1;
+ (NSString *)accountTypeIdentifier;
+ (NSString *)accountTypeString;
+ (NSString *)displayedAccountTypeString;
+ (char)isPredefinedAccountType;
+ (CastleIMAPAccount *)defaultPathNameForAccountWithHostname:(NSString *)arg0 username:(NSString *)arg1;
+ (char)primaryDeliveryAccountIsDynamic;
+ (char)usernameIsEmailAddress;

- (void)_accountsChanged:(NSNotification *)arg0;
- (void)dealloc;
- (NSString *)displayName;
- (ACAccount *)appleAccount;
- (char)isEnabledForDataclass:(id)arg0;
- (void)setDisplayName:(NSString *)arg0;
- (ACAccountStore *)accountStore;
- (NSString *)authToken;
- (void)setUsername:(NSString *)arg0;
- (char)shouldRegisterForPush;
- (void)handleAlertResponse:(NSURLResponse *)arg0;
- (void)handleOverQuotaResponse:(NSURLResponse *)arg0;
- (char)canAttemptPushRegistration;
- (void)_resetAppleAccount;
- (NSString *)_mailPropertyFromAppleAccountForKey:(NSString *)arg0;
- (id)_fromEmailAddressesIncludingDisabled:(char)arg0;
- (NSString *)deliveryHostname;
- (unsigned int)deliveryPortNumber;
- (char)deliveryUsesSSL;
- (void)setLocalDefaultEmailAddress:(NSString *)arg0;
- (void)setLocallyEnabled:(char)arg0 forEmailAddress:(NSString *)arg1;
- (char)_updateEmailAddressAndAliases;
- (NSURL *)aliasLookupURL;
- (NSString *)_aliasAuthorizationHeader;
- (id)_aliasUserAgent;
- (NSDate *)_headerStringFromDate:(NSDate *)arg0;
- (NSData *)_aliasesFromData:(NSData *)arg0;
- (NSData *)_emailsFromData:(NSData *)arg0;
- (NSData *)_defaultEmailAddressFromData:(NSData *)arg0;
- (NSData *)_prepareAliasData;
- (void)setPasswordInKeychain:(id)arg0;
- (void)_removePasswordInKeychain;
- (id)passwordFromKeychain;
- (NSData *)_aliasesFromOldData:(NSData *)arg0;
- (char)supportsArchiving;
- (void)persistentAccountDidChange:(NSDictionary *)arg0 previousAccount:(NSObject *)arg1;
- (char)usesSSL;
- (NSString *)preferredAuthScheme;
- (unsigned int)portNumber;
- (void)setUsesSSL:(char)arg0;
- (void)setHostname:(NSString *)arg0;
- (void)setPortNumber:(unsigned int)arg0;
- (char)allowsTrustPrompt;
- (unsigned int)credentialAccessibility;
- (char)shouldFetchACEDBInfoForError:(NSError *)arg0;
- (char)shouldDisplayHostnameInErrorMessages;
- (char)isEquivalentTo:(id)arg0 hostname:(NSString *)arg1 username:(NSString *)arg2;
- (NSURLConnection *)uniqueIdForPersistentConnection;
- (NSArray *)emailAddressesAndAliasesList;
- (CastleIMAPAccount *)initWithLibrary:(ML3MusicLibrary *)arg0 persistentAccount:(ACAccount *)arg1;
- (id)_deliveryAccountCreateIfNeeded:(char)arg0;
- (NSArray *)emailAddresses;
- (NSArray *)fromEmailAddressesIncludingDisabled;
- (char)updateEmailAliases;
- (NSString *)firstEmailAddress;
- (NSString *)statisticsKind;
- (void)setDefaultEmailAddress:(NSString *)arg0;
- (void)setEnabled:(char)arg0 forEmailAddress:(NSString *)arg1;
- (void)pushUpdateForAliasData;
- (NSArray *)fromEmailAddresses;
- (void)startListeningForNotifications;
- (NSString *)displayUsername;
- (char)derivesDeliveryAccountInfoFromMailAccount;
- (char)canReceiveNewMailNotifications;
- (NSString *)iconString;
- (NSString *)personID;
- (NSString *)username;
- (NSString *)hostname;

@end
