/* Runtime dump - MobileMeAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MobileMeAccount : iToolsAccount

+ (void)initialize;
+ (MobileMeAccount *)emailAddressHostPart;
+ (NSString *)deliveryHostName;
+ (NSString *)displayedAccountTypeString;
+ (MobileMeAccount *)defaultPathNameForAccountWithHostname:(NSString *)arg0 username:(NSString *)arg1;
+ (NSString *)hostname;

- (char)shouldFetchACEDBInfoForError:(NSError *)arg0;
- (char)isAccountClassEquivalentTo:(id)arg0;
- (char)isHostnameEquivalentTo:(id)arg0;

@end
