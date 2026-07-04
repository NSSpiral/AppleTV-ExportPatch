/* Runtime dump - ATViCloudAuthenticationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVSharedCredentialsAuthenticationController.h>
@interface ATViCloudAuthenticationController : ATVSharedCredentialsAuthenticationController
{
    char _suppressSignInDialog;
}

@property (nonatomic) char suppressSignInDialog;

+ (void)initialize;

- (char)suppressSignInDialog;
- (void)setSuppressSignInDialog:(char)arg0;
- (char)configurePreUserPasswordOptions;
- (char)handleDisplayForAuthCancelledError:(NSError *)arg0;
- (char)handleDisplayForAuthFailureError:(NSError *)arg0 userName:(NSString *)arg1 attempAuthorizationAgain:(char *)arg2;

@end
