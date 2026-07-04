/* Runtime dump - ATVSedonaAuthenticator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAuthenticator.h>
@interface ATVSedonaAuthenticator : BRUserPasswordAuthenticator

- (void)_sendAuthenticationRequest;
- (void)_loginRequiredFinished:(id)arg0;
- (void)_cleanupAuthentication;
- (void)_loginFinished:(id)arg0;
- (void)dealloc;
- (void)_logout;

@end
