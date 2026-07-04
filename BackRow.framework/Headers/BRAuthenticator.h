/* Runtime dump - BRAuthenticator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRAccount, BRAuthenticationController, BRAuthenticationManager;
@interface BRAuthenticator : NSObject
{
    char _isAuthenticating;
    int _accountChangedState;
    char _failedOnce;
    BRAuthenticationManager * _manager;
    BRAccount * _account;
    BRAuthenticationController * _authenticationController;
    id _resources;
}

@property (nonatomic) BRAuthenticationManager * manager;
@property (nonatomic) BRAuthenticationController * authenticationController;
@property (readonly, nonatomic) char failedOnce;
@property (retain, nonatomic) BRAccount * account;
@property (retain, nonatomic) id resources;

- (char)failedOnce;
- (char)_isAuthorizing;
- (void)_handleAuthenticationFailedWithError:(NSError *)arg0;
- (void)_handleAuthenticationCancelledWithError:(NSError *)arg0;
- (char)promptsForExistingAccount;
- (NSString *)resourceForKey:(NSString *)arg0 defaultValue:(NSString *)arg1;
- (void)_setAccountChangedState:(int)arg0;
- (NSObject *)makeAuthenticationController;
- (void)_cleanupAuthentication;
- (void)_finalizeAuthentication;
- (void)_sendAuthenticationSucceeded:(char)arg0;
- (void)_sendAuthenticationCancelledWithError:(NSError *)arg0;
- (void)_sendAuthenticationFailedWithError:(NSError *)arg0 badAccount:(char)arg1;
- (char)requiresAuthentication;
- (void)dealloc;
- (void)_handleAuthenticationSucceeded;
- (BRAuthenticationManager *)manager;
- (BRAuthenticator *)initWithAccount:(BRAccount *)arg0;
- (BRAccount *)account;
- (void)setAccount:(BRAccount *)arg0;
- (void)setManager:(BRAuthenticationManager *)arg0;
- (void)logout;
- (void)authenticate;
- (void)setResources:(NSArray *)arg0;
- (NSArray *)resources;
- (BRAuthenticationController *)authenticationController;
- (void)setAuthenticationController:(BRAuthenticationController *)arg0;

@end
