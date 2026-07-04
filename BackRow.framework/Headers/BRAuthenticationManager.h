/* Runtime dump - BRAuthenticationManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRAccountType, BRAuthenticator, MEITunesStoreAccount;
@interface BRAuthenticationManager : NSObject
{
    char _isChangingAccounts;
    BRAccountType * _accountType;
    BRAuthenticator * __authenticator;
    id __authenticatorCreation;
}

@property (retain, nonatomic) BRAccountType * accountType;
@property (copy, nonatomic) id _authenticatorCreation;
@property (retain, nonatomic) BRAuthenticator * _authenticator;

+ (void)registerManager:(NSObject *)arg0;
+ (BRAuthenticationManager *)managerForAccountType:(NSObject *)arg0;

- (NSNumber *)authenticatorWithAccount:(NSObject *)arg0;
- (void)removeCurrentAccount;
- (BRAuthenticationManager *)initWithAccountType:(BRAccountType *)arg0 authenticatorCreation:(id)arg1;
- (MEITunesStoreAccount *)currentAccount;
- (void)_authenticationCancelledForAuthenticator:(id)arg0;
- (BRAuthenticator *)_authenticator;
- (void)set_authenticatorCreation:(id)arg0;
- (void)_accountManagerPreferredAccountEstablished:(id)arg0;
- (void)_accountManagerPreferredAccountRemoved:(id)arg0;
- (void)_changeCurrentAccountWithAccount:(NSObject *)arg0;
- (NSNumber *)_selectAuthenticatorWithPreferredAccount:(SSAccount *)arg0;
- (void)_sendNotificationWithActivity:(int)arg0;
- (void)set_authenticator:(BRAuthenticator *)arg0;
- (NSNumber *)authenticatorWithNewAccount;
- (void)_authenticationSucceededForAuthenticator:(id)arg0 accountChanged:(char)arg1;
- (void)_authenticationFailedForAuthenticator:(id)arg0;
- (void)_authenticationFinalizedForAuthenticator:(id)arg0;
- (id)_authenticatorCreation;
- (void)_handlePreferredAccountChange:(NSDictionary *)arg0;
- (void)dealloc;
- (void)setAccountType:(BRAccountType *)arg0;
- (BRAccountType *)accountType;

@end
