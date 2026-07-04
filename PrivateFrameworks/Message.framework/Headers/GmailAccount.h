/* Runtime dump - GmailAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface GmailAccount : IMAPAccount <MFGmailAccountAuthProtocol>
{
    NSURLConnection * _enablingConnection;
    NSURLCredential * _credential;
    NSString * _clientToken;
    id _isEnabling;
    id _didEnable;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (GmailAccount *)emailAddressHostPart;
+ (NSString *)deliveryAccountHostname;
+ (char)deliveryAccountUsesSSL;
+ (unsigned int)deliveryAccountPortNumber;
+ (NSString *)imapNotEnabledPrefix;
+ (NSString *)accountTypeIdentifier;
+ (NSString *)displayedAccountTypeString;
+ (NSArray *)excludedAccountPropertyKeys;
+ (NSDictionary *)newAccountWithDictionary:(NSDictionary *)arg0;
+ (NSObject *)authSchemesForAccountClass;
+ (char)isPredefinedAccountType;
+ (char)usernameIsEmailAddress;
+ (NSString *)hostname;

- (void)dealloc;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (GmailAccount *)initWithProperties:(NSDictionary *)arg0;
- (ACAccountStore *)accountStore;
- (void)setPassword:(NSString *)arg0;
- (NSString *)clientToken;
- (void)_setOAuth2TokensFromProperties:(NSDictionary *)arg0;
- (NSString *)_consumeExistingPreAuthToken;
- (char)_isOurConnection:(NSURLConnection *)arg0;
- (NSString *)_URLFromUncleanString:(NSString *)arg0;
- (NSURL *)_webLoginErrorWithURL:(NSString *)arg0;
- (void)_removeCredential:(NSObject *)arg0;
- (NSObject *)permanentTagForType:(int)arg0;
- (char)xListSupportedOnConnection:(NSURLConnection *)arg0;
- (char)supportsArchiving;
- (char)shouldArchiveByDefault;
- (int)archiveDestinationForMailbox:(id)arg0;
- (void)persistentAccountDidChange:(NSDictionary *)arg0 previousAccount:(NSObject *)arg1;
- (NSString *)preferredAuthScheme;
- (unsigned int)credentialAccessibility;
- (char)shouldEnableAfterError:(NSError *)arg0;
- (char)enableAccount;
- (GmailAccount *)initWithLibrary:(ML3MusicLibrary *)arg0 persistentAccount:(ACAccount *)arg1;
- (id)_deliveryAccountCreateIfNeeded:(char)arg0;
- (NSArray *)emailAddresses;
- (void)_deleteHook;
- (NSObject *)_specialMailboxUidWithType:(int)arg0 create:(char)arg1;
- (id)_childOfMailbox:(id)arg0 withComponentName:(NSString *)arg1;
- (int)emptyFrequencyForMailboxType:(int)arg0;
- (NSString *)statisticsKind;
- (id)allMailMailboxUid;
- (char)archiveSentMessages;
- (char)derivesDeliveryAccountInfoFromMailAccount;
- (NSString *)displayNameUsingSpecialNamesForMailboxUid:(id)arg0;
- (NSString *)iconString;
- (NSURLResponse *)errorForResponse:(NSURLResponse *)arg0;
- (NSString *)hostname;
- (void)connection:(NSURLConnection *)arg0 didReceiveAuthenticationChallenge:(NSObject *)arg1;

@end
