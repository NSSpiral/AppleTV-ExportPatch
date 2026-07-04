/* Runtime dump - ATVJSUserPasswordAuthenticator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAuthenticator.h>

@class ATVFeedMerchant;
@interface ATVJSUserPasswordAuthenticator : BRUserPasswordAuthenticator
{
    ATVFeedMerchant * _merchant;
}

- (void)_sendAuthenticationRequest;
- (void)_authenticationFinished:(char)arg0 withFailureMessage:(NSString *)arg1;
- (ATVJSUserPasswordAuthenticator *)initWithAccount:(ACAccount *)arg0 merchant:(ATVFeedMerchant *)arg1;
- (void)dealloc;

@end
