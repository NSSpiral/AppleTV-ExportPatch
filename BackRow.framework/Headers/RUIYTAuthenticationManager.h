/* Runtime dump - RUIYTAuthenticationManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDefaultAuthenticationManager.h>

@protocol YTAuthenticatorDelegate;
@interface RUIYTAuthenticationManager : BRDefaultAuthenticationManager <YTAuthenticatorDelegate>

- (NSNumber *)_currentAccount;
- (void)_removeDuplicatesOfAccount:(NSObject *)arg0;
- (void)_authenticationCancelledForAuthenticator:(id)arg0;
- (void)_accountRemoved:(id)arg0;
- (RUIYTAuthenticationManager *)init;
- (void)authenticatorNeedsAccountAndPassword:(YTAuthenticator *)arg0;

@end
