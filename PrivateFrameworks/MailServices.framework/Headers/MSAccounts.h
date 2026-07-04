/* Runtime dump - MSAccounts
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSAccounts : MSMailDefaultService

+ (void)accountValuesForKeys:(NSArray *)arg0 originatingBundleID:(NSString *)arg1 sourceAccountManagement:(int)arg2 launchMobileMail:(char)arg3 completionBlock:(id /* block */)arg4;
+ (NSString *)customSignatureForSendingEmailAddress:(NSString *)arg0;
+ (char)canSendMail;
+ (char)canSendMailSourceAccountManagement:(int)arg0;
+ (char)hasActiveAccounts;
+ (void)accountValuesForKeys:(NSArray *)arg0 completionBlock:(id /* block */)arg1;
+ (void)accountValuesForKeys:(NSArray *)arg0 launchMobileMail:(char)arg1 completionBlock:(id /* block */)arg2;
+ (char)deleteAccountsWithUniqueIdentifiers:(id)arg0 error:(id *)arg1;
+ (void)mailboxListingForAccountWithUniqueIdentifier:(NSString *)arg0 keys:(NSArray *)arg1 completionBlock:(id /* block */)arg2;
+ (char)setPushStateForMailboxWithPath:(NSString *)arg0 account:(NSObject *)arg1 pushState:(char)arg2 error:(id *)arg3;

- (void)_listAccountKeys:(NSArray *)arg0 originatingBundleID:(NSString *)arg1 sourceAccountManagement:(int)arg2 handler:(id /* block */)arg3;
- (void)_simulateServicesMethod:(NSString *)arg0 arguments:(NSDictionary *)arg1 callback:(id /* block */)arg2;

@end
