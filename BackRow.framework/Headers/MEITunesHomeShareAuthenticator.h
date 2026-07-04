/* Runtime dump - MEITunesHomeShareAuthenticator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVSharedCredentialsAuthenticator.h>
@interface MEITunesHomeShareAuthenticator : ATVSharedCredentialsAuthenticator

- (void)_sendAuthenticationRequest;
- (NSObject *)_makeAuthenticationController;
- (char)shouldResetPasswordOnAuthenticationError:(NSError *)arg0;
- (char)promptsForExistingAccount;
- (void)setSharedCredentials;
- (void)_homeShareAuthenticationFinished:(id)arg0;
- (void)dealloc;

@end
