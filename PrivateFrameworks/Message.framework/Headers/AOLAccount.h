/* Runtime dump - AOLAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface AOLAccount : IMAPAccount

+ (NSString *)_usernameWithHostname:(NSString *)arg0;
+ (AOLAccount *)emailAddressHostPart;
+ (NSString *)deliveryAccountHostname;
+ (char)deliveryAccountUsesSSL;
+ (unsigned int)deliveryAccountPortNumber;
+ (NSString *)displayedAccountTypeString;
+ (char)usesSSL;
+ (char)isPredefinedAccountType;
+ (NSString *)accountPropertiesValueForKey:(NSString *)arg0 value:(NSObject *)arg1;
+ (AOLAccount *)defaultPathNameForAccountWithHostname:(NSString *)arg0 username:(NSString *)arg1;
+ (char)usernameIsEmailAddress;
+ (NSString *)hostname;

- (void)setUsername:(NSString *)arg0;
- (char)usesSSL;
- (void)setUsesSSL:(char)arg0;
- (void)setHostname:(NSString *)arg0;
- (char)shouldFetchACEDBInfoForError:(NSError *)arg0;
- (id)_deliveryAccountCreateIfNeeded:(char)arg0;
- (NSArray *)emailAddresses;
- (NSString *)statisticsKind;
- (NSObject *)_defaultSpecialMailboxNameForType:(int)arg0;
- (NSString *)displayUsername;
- (char)derivesDeliveryAccountInfoFromMailAccount;
- (NSString *)iconString;
- (NSString *)hostname;

@end
