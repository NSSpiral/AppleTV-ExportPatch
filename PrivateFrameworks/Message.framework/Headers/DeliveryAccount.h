/* Runtime dump - DeliveryAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface DeliveryAccount : MFAccount

+ (NSString *)accountWithIdentifier:(NSString *)arg0;
+ (NSString *)accountTypeIdentifier;
+ (NSObject *)existingAccountForUniqueID:(NSObject *)arg0;
+ (NSObject *)accountWithUniqueId:(NSObject *)arg0;
+ (NSString *)existingAccountWithIdentifier:(NSString *)arg0;
+ (void)_postDeliveryAccountsHaveChanged;
+ (DeliveryAccount *)deliveryAccounts;
+ (NSString *)accountWithHostname:(NSString *)arg0 username:(NSString *)arg1 lookForExistingAccounts:(char)arg2;
+ (NSString *)existingAccountWithHostname:(NSString *)arg0 username:(NSString *)arg1;
+ (void)addDeliveryAccount:(NSObject *)arg0;
+ (void)reloadDeliveryAccounts;
+ (void)removeDeliveryAccount:(NSObject *)arg0;
+ (NSString *)accountWithHostname:(NSString *)arg0 username:(NSString *)arg1;
+ (NSNumber *)carrierDeliveryAccount;
+ (DeliveryAccount *)newDefaultInstance;

- (NSString *)identifier;
- (void)setUsername:(NSString *)arg0;
- (void)_setAccountProperties:(NSDictionary *)arg0;
- (char)hasEnoughInformationForEasySetup;
- (NSString *)newDeliveryWithMessage:(NSString *)arg0;
- (NSDictionary *)newDeliveryWithHeaders:(NSDictionary *)arg0 mixedContent:(NSArray *)arg1 textPartsAreHTML:(char)arg2;
- (NSDictionary *)newDeliveryWithHeaders:(NSDictionary *)arg0 HTML:(id)arg1 plainTextAlternative:(MFPlainTextDocument *)arg2 other:(id)arg3 charsets:(NSArray *)arg4;
- (void)_updateAccountDescriptionWithUsername:(NSString *)arg0 hostname:(NSString *)arg1;
- (Class)deliveryClass;
- (void)setShouldUseAuthentication:(char)arg0;
- (unsigned long long)maximumMessageBytes;
- (char)shouldUseAuthentication;
- (void)setMaximumMessageBytes:(unsigned long long)arg0;
- (id)mailAccountIfAvailable;
- (char)hasNoReferences;
- (NSString *)displayHostname;
- (char)canBeFallbackAccount;
- (char)supportsSoftBankCodePoints;
- (char)supportsOutboxCopy;
- (char)shouldUseSaveSentForAccount:(NSObject *)arg0;

@end
