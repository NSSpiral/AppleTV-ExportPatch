/* Runtime dump - BRUserPasswordAuthenticator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRAuthenticator.h>
@interface BRUserPasswordAuthenticator : BRAuthenticator
{
    char _userEnteredPassword;
    NSString * _passwordDecoration;
}

@property (retain) NSString * user;
@property (retain) NSString * password;
@property char userEnteredPassword;
@property (retain) NSString * passwordDecoration;

- (NSNumber *)userPasswordAccount;
- (void)_handleAuthenticationFailedWithError:(NSError *)arg0;
- (NSString *)passwordDecoration;
- (char)requiresUser:(id *)arg0;
- (char)requiresPassword:(id *)arg0;
- (NSObject *)_makeAuthenticationController;
- (char)shouldResetPasswordOnAuthenticationError:(NSError *)arg0;
- (void)setUserEnteredPassword:(char)arg0;
- (void)setPasswordDecoration:(NSString *)arg0;
- (char)userEnteredPassword;
- (void)_resetPassword;
- (void)_handleAuthenticationSucceeded;
- (BRUserPasswordAuthenticator *)initWithAccount:(ACAccount *)arg0;
- (NSString *)password;
- (NSString *)user;
- (void)setPassword:(NSString *)arg0;
- (void)setUser:(NSString *)arg0;

@end
