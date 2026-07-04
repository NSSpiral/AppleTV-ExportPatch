/* Runtime dump - BRUserPasswordAuthenticationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRAuthenticationController.h>

@class ATVTextEntryView, BRAuthenticator, BRBoxControl, BRWaitPromptControl;
@interface BRUserPasswordAuthenticationController : BRAuthenticationController
{
    NSTimer * _authTimeoutTimer;
    NSTimer * _promptTimer;
    char _hasTimedOut;
    BRBoxControl * _contentWrapper;
    BRWaitPromptControl * _waitPrompt;
    char _shouldPromptUserForExistingAccount;
    NSArray * _trustedHSADevices;
    NSDictionary * _selectedHSADevice;
    ATVTextEntryView * _hsaCodeControl;
}

@property (nonatomic) char shouldPromptUserForExistingAccount;
@property (retain, nonatomic) NSArray * trustedHSADevices;
@property (retain, nonatomic) NSDictionary * selectedHSADevice;
@property (retain, nonatomic) ATVTextEntryView * hsaCodeControl;

- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)wasPopped;
- (BRUserPasswordAuthenticationController *)initWithAuthenticator:(BRAuthenticator *)arg0 resources:(NSArray *)arg1;
- (void)authenticationRequiresHSA2Verification;
- (void)authenticationSucceeded:(char)arg0;
- (void)authenticationCancelled:(id)arg0;
- (void)_authenticate;
- (void)authenticationFailed:(id)arg0;
- (void)_showPrompt:(NSString *)arg0;
- (char)configurePreUserPasswordOptions;
- (char)handleDisplayForAuthCancelledError:(NSError *)arg0;
- (char)handleDisplayForAuthFailureError:(NSError *)arg0 userName:(NSString *)arg1 attempAuthorizationAgain:(char *)arg2;
- (void)authenticationRequiresTOCAcceptance;
- (void)authenticationRequiresHSAVerification;
- (char)performPostAuthenticationOperationsWithUser:(NSString *)arg0 accountOptionsPreviouslySet:(char)arg1;
- (void)setShouldPromptUserForExistingAccount:(char)arg0;
- (id)_userPasswordAuthenticator;
- (NSString *)_userName;
- (void)_authSucceededComplete:(char)arg0;
- (void)_showCancellationMessage:(NSString *)arg0;
- (char)_shouldAttemptAuthorizationAgainForUser:(id)arg0 error:(NSError *)arg1;
- (char)_handleAgreeSelection:(id)arg0;
- (char)_handleDisagreeSelection:(id)arg0;
- (void)_authenticationTimedOut:(id)arg0;
- (void)_handleDeviceSelection:(id)arg0;
- (void)_HSABailOutErrorWithTitle:(NSString *)arg0 andMessage:(NSString *)arg1;
- (void)setSelectedHSADevice:(NSDictionary *)arg0;
- (void)_handleSendHSACode;
- (NSDictionary *)selectedHSADevice;
- (void)_handleHSACodeInput:(NSObject *)arg0;
- (void)setHsaCodeControl:(ATVTextEntryView *)arg0;
- (ATVTextEntryView *)hsaCodeControl;
- (void)_handleHSA2CodeInput:(NSObject *)arg0;
- (char)shouldPromptUserForExistingAccount;
- (void)_promptUserWhichAccountToUse;
- (char)configurePostUserPasswordOptionsWithUser:(NSString *)arg0;
- (void)_askUserForPassword:(NSString *)arg0 userName:(NSString *)arg1 completionHandler:(id /* block */)arg2;
- (void)_setUserName:(NSString *)arg0;
- (void)_askUserForUserName:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)_selectAccount:(NSObject *)arg0;
- (void)_setContent:(NSObject *)arg0;
- (void)dealloc;
- (void)_authenticateWithAccount:(NSObject *)arg0;
- (void)setTrustedHSADevices:(NSArray *)arg0;
- (NSArray *)trustedHSADevices;

@end
