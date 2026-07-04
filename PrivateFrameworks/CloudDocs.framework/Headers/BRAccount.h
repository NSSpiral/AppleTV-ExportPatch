/* Runtime dump - BRAccount
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRAccount : NSObject
{
    NSString * _accountID;
    NSData * _perAppAccountIdentifier;
}

@property (copy, nonatomic) NSData * perAppAccountIdentifier;

+ (char)_refreshCurrentLoggedInAccountForcingRefresh:(char)arg0 error:(id *)arg1;
+ (char)refreshCurrentLoggedInAccount;
+ (BRAccount *)currentCachedLoggedInAccountWithError:(id *)arg0;
+ (BRAccount *)currentLoggedInAccountWithError:(id *)arg0;

- (void)dealloc;
- (NSData *)perAppAccountIdentifier;
- (void)setPerAppAccountIdentifier:(NSData *)arg0;
- (char)loginWithError:(id *)arg0;
- (char)logoutWithError:(id *)arg0;
- (id)containerWithPendingChanges;
- (BRAccount *)initWithAccountID:(NSString *)arg0;

@end
