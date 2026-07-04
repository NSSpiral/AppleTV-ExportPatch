/* Runtime dump - ATVSharedCredentialsAuthenticator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAuthenticator.h>

@class BRUserPasswordAuthenticator;
@interface ATVSharedCredentialsAuthenticator : BRUserPasswordAuthenticator
{
    char _usingSharedCredentials;
    char _setSharedCredentialsIsEnabled;
    BRUserPasswordAuthenticator * _sharedAuthenticator;
}

@property (retain) BRUserPasswordAuthenticator * sharedAuthenticator;
@property char setSharedCredentialsIsEnabled;
@property char usingSharedCredentials;

- (void)_handleAuthenticationFailedWithError:(NSError *)arg0;
- (void)_handleAuthenticationCancelledWithError:(NSError *)arg0;
- (char)requiresUser:(id *)arg0;
- (char)requiresPassword:(id *)arg0;
- (void)setSharedCredentials;
- (char)canUseSharedCredentials:(id *)arg0;
- (void)useSharedCredentials;
- (ATVSharedCredentialsAuthenticator *)initWithAccount:(ACAccount *)arg0 sharedAuthenticator:(BRUserPasswordAuthenticator *)arg1;
- (char)canSetSharedCredentials;
- (void)setSharedAuthenticator:(BRUserPasswordAuthenticator *)arg0;
- (void)setUsingSharedCredentials:(char)arg0;
- (char)setSharedCredentialsIsEnabled;
- (char)usingSharedCredentials;
- (void)setSetSharedCredentialsIsEnabled:(char)arg0;
- (void)dealloc;
- (void)_handleAuthenticationSucceeded;
- (BRUserPasswordAuthenticator *)sharedAuthenticator;

@end
