/* Runtime dump - iToolsAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface iToolsAccount : IMAPAccount

+ (void)initialize;
+ (iToolsAccount *)emailAddressHostPart;
+ (NSString *)deliveryHostName;
+ (NSString *)accountTypeString;
+ (NSString *)displayedAccountTypeString;
+ (char)isPredefinedAccountType;
+ (iToolsAccount *)defaultPathNameForAccountWithHostname:(NSString *)arg0 username:(NSString *)arg1;
+ (char)usernameIsEmailAddress;
+ (NSString *)hostname;

- (char)isEnabledForDataclass:(id)arg0;
- (void)setUsername:(NSString *)arg0;
- (char)supportsArchiving;
- (Class)connectionClass;
- (void)setHostname:(NSString *)arg0;
- (void)reportAuthenticationError:(NSError *)arg0 authScheme:(MFAuthScheme *)arg1;
- (void)accountDidLoad;
- (char)isAccountClassEquivalentTo:(id)arg0;
- (char)isHostnameEquivalentTo:(id)arg0;
- (id)_deliveryAccountCreateIfNeeded:(char)arg0;
- (NSArray *)emailAddresses;
- (NSArray *)fromEmailAddressesIncludingDisabled;
- (char)updateEmailAliases;
- (int)emptyFrequencyForMailboxType:(int)arg0;
- (void)setDeliveryAccount:(DeliveryAccount *)arg0;
- (NSArray *)fromEmailAddresses;
- (NSString *)displayUsername;
- (char)derivesDeliveryAccountInfoFromMailAccount;
- (NSString *)hostname;

@end
