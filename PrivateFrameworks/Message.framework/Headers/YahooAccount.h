/* Runtime dump - YahooAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface YahooAccount : IMAPAccount
{
    NSRecursiveLock * _cookieLock;
    double _timeLastEncounteredAuthenticationError;
    NSString * _temporaryPassword;
    NSString * _signature;
    NSMutableDictionary * _incorrectPasswordAttemptDates;
}

+ (YahooAccount *)emailAddressHostPart;
+ (NSString *)deliveryAccountHostname;
+ (char)deliveryAccountUsesSSL;
+ (unsigned int)deliveryAccountPortNumber;
+ (NSString *)emailAddressWithUsername:(NSString *)arg0;
+ (NSArray *)allCookieNames;
+ (NSArray *)_credentialKeysForCookieNames;
+ (NSString *)credentialKeyForCookieName:(NSString *)arg0;
+ (NSString *)accountTypeIdentifier;
+ (NSString *)displayedAccountTypeString;
+ (char)usesSSL;
+ (NSDictionary *)newAccountWithDictionary:(NSDictionary *)arg0;
+ (char)isPredefinedAccountType;
+ (char)isSSLEditable;
+ (char)primaryDeliveryAccountIsDynamic;
+ (char)usernameIsEmailAddress;
+ (char)getConfigurationFromServerForEmail:(id)arg0;
+ (NSString *)hostname;

- (void)dealloc;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (NSObject *)connectionForStore:(NSObject *)arg0 delegate:(NSObject *)arg1 options:(int)arg2;
- (unsigned int)minUID;
- (void)_setSecurityToken:(NSString *)arg0;
- (void)setXYMPKISignature:(NSObject *)arg0;
- (NSString *)_securityToken:(id *)arg0;
- (NSString *)_fetchSecurityToken:(NSString *)arg0 error:(id *)arg1;
- (NSString *)cookieForKey:(NSString *)arg0 error:(id *)arg1;
- (char)_shouldAttemptToFetchSecurityTokenWithPassword:(NSString *)arg0;
- (NSString *)_yahooParameterForKey:(NSString *)arg0;
- (int)_ParsePWTokenResponse:(NSURLResponse *)arg0 error:(id *)arg1;
- (void)setCookie:(NSString *)arg0 forKey:(NSString *)arg1;
- (NSString *)_fetchCookieForKey:(NSString *)arg0 usingToken:(NSString *)arg1 error:(id *)arg2;
- (void)removeCookie:(TSWPInteriorCookie *)arg0;
- (NSString *)_securityToken;
- (NSString *)cookieForKey:(NSString *)arg0;
- (void)cookiesExpired;
- (NSObject *)XYMPKISignature;
- (NSString *)preferredAuthScheme;
- (unsigned int)portNumber;
- (Class)connectionClass;
- (unsigned int)credentialAccessibility;
- (char)fetchTokensIfNecessary:(id *)arg0;
- (char)shouldDisplayHostnameInErrorMessages;
- (YahooAccount *)initWithLibrary:(ML3MusicLibrary *)arg0 persistentAccount:(ACAccount *)arg1;
- (id)_deliveryAccountCreateIfNeeded:(char)arg0;
- (NSArray *)emailAddresses;
- (NSString *)statisticsKind;
- (NSObject *)_defaultSpecialMailboxNameForType:(int)arg0;
- (id)transferDisabledMailboxUids;
- (NSString *)displayUsername;
- (char)derivesDeliveryAccountInfoFromMailAccount;
- (NSString *)URLForMessage:(NSString *)arg0;
- (NSString *)iconString;
- (id)saveSentFolder;
- (NSString *)hostname;

@end
