/* Runtime dump - BRAuthenticationErrorResolutionController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRAccountType;
@interface BRAuthenticationErrorResolutionController : BRController
{
    BRAccountType * _accountType;
    NSString * _title;
    NSString * _instructions;
}

+ (NSObject *)errorResolutionControllerWithAccountType:(BRAccountType *)arg0 title:(NSString *)arg1 instructions:(NSString *)arg2;

- (void)controlWasActivated;
- (BRAuthenticationErrorResolutionController *)initWithAccountType:(BRAccountType *)arg0 title:(NSString *)arg1 instructions:(NSString *)arg2;
- (void)dealloc;

@end
