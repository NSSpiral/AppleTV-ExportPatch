/* Runtime dump - BRAuthenticationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRAuthenticator, BRController;
@interface BRAuthenticationController : BRController
{
    char _userCancelled;
    char _shouldDisableAction;
    char _shouldPopWhenPushed;
    BRAuthenticator * _authenticator;
    id _resources;
    BRController * _authenticatingController;
    BRController * _failureController;
}

@property (nonatomic) char userCancelled;
@property (readonly) BRAuthenticator * authenticator;
@property (readonly) id resources;
@property (retain) BRController * authenticatingController;
@property (retain, nonatomic) BRController * failureController;
@property (nonatomic) char shouldDisableAction;
@property (nonatomic) char shouldPopWhenPushed;

+ (NSObject *)poppingController;

- (void)wasPushed;
- (void)wasPopped;
- (BRAuthenticationController *)initWithAuthenticator:(BRAuthenticator *)arg0 resources:(NSArray *)arg1;
- (void)authenticationRequiresHSA2Verification;
- (void)authenticationSucceeded:(char)arg0;
- (void)authenticationCancelled:(id)arg0;
- (void)authenticationFailed:(id)arg0;
- (BRAuthenticator *)authenticator;
- (void)authenticationRequiresTOCAcceptance;
- (void)authenticationRequiresHSAVerification;
- (BRController *)failureController;
- (char)showsHeader;
- (void)setAuthenticatingController:(BRController *)arg0;
- (void)setShouldPopWhenPushed:(char)arg0;
- (void)setUserCancelled:(char)arg0;
- (void)setShouldDisableAction:(char)arg0;
- (char)shouldDisableAction;
- (void)_removeFromStackWithError:(NSError *)arg0;
- (char)shouldPopWhenPushed;
- (char)userCancelled;
- (BRController *)authenticatingController;
- (void)setFailureController:(BRController *)arg0;
- (NSError *)_failureControllerWithError:(NSError *)arg0;
- (void)dealloc;
- (NSArray *)resources;

@end
