/* Runtime dump - ATVSharedCredentialsAuthenticationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAuthenticationController.h>
@interface ATVSharedCredentialsAuthenticationController : BRUserPasswordAuthenticationController

- (char)configurePreUserPasswordOptions;
- (char)performPostAuthenticationOperationsWithUser:(NSString *)arg0 accountOptionsPreviouslySet:(char)arg1;
- (double)authenticationTimeout;

@end
