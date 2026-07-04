/* Runtime dump - ATVOAuth2DPAuthenticationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRAuthenticationController.h>

@class BRAlertControl, BRAuthenticator, BRWaitPromptControl;
@interface ATVOAuth2DPAuthenticationController : BRAuthenticationController
{
    BRWaitPromptControl * _waitPrompt;
    BRAlertControl * _alertControl;
    NSTimer * _promptTimer;
    NSTimer * _retryTimer;
    double _retryInterval;
}

- (void)wasPushed;
- (void)wasPopped;
- (ATVOAuth2DPAuthenticationController *)initWithAuthenticator:(BRAuthenticator *)arg0 resources:(NSArray *)arg1;
- (void)authenticationSucceeded:(char)arg0;
- (void)authenticationCancelled:(id)arg0;
- (char)_shouldRetryAuthentication;
- (void)_retryTimerHandler:(id /* block */)arg0;
- (char)_shouldAttemptAuthenticationAgainWithErrorMessage:(NSString *)arg0;
- (void)_authenticate;
- (void)authenticationFailed:(id)arg0;
- (void)_promptUserWithUserCode:(NSString *)arg0 verificationURL:(NSURL *)arg1;
- (void)authenticateAtInterval:(double)arg0 userCode:(id)arg1 verificationURL:(NSURL *)arg2;
- (void)slowDown;
- (void)_showPrompt:(NSString *)arg0;

@end
