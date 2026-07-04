/* Runtime dump - RUIYTAuthenticator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAuthenticator.h>

@protocol YTUserProfileRequestDelegate;
@interface RUIYTAuthenticator : BRUserPasswordAuthenticator <YTUserProfileRequestDelegate>
{
    YTAuthenticator * _authenticator;
    YTUserProfileRequest * __userProfileRequest;
}

@property (retain, nonatomic) YTAuthenticator * authenticator;
@property (retain, nonatomic) YTUserProfileRequest * _userProfileRequest;

- (void)_sendAuthenticationRequest;
- (YTAuthenticator *)authenticator;
- (void)_cleanupAuthentication;
- (RUIYTAuthenticator *)initWithAccount:(ACAccount *)arg0 authenticator:(YTAuthenticator *)arg1;
- (void)setAuthenticator:(YTAuthenticator *)arg0;
- (void)_didFailToAuthenticate:(id)arg0;
- (void)set_userProfileRequest:(YTUserProfileRequest *)arg0;
- (YTUserProfileRequest *)_userProfileRequest;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_didAuthenticate:(AWDIDSRegistrationAuthenticate *)arg0;
- (void)userProfileRequest:(YTUserProfileRequest *)arg0 receivedUserProfile:(YTUserProfile *)arg1;
- (void)userProfileRequest:(YTUserProfileRequest *)arg0 didFailWithError:(NSError *)arg1;

@end
