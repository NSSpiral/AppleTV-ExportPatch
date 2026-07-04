/* Runtime dump - MEITunesStoreAuthenticationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAuthenticationController.h>
@interface MEITunesStoreAuthenticationController : BRUserPasswordAuthenticationController
{
    unsigned int _loginAttempts;
}

- (char)configurePreUserPasswordOptions;
- (char)handleDisplayForAuthFailureError:(NSError *)arg0 userName:(NSString *)arg1 attempAuthorizationAgain:(char *)arg2;
- (char)configurePostUserPasswordOptionsWithUser:(NSString *)arg0;

@end
