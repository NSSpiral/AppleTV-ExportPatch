/* Runtime dump - MEITunesStoreAuthenticator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAuthenticator.h>

@class BRStateMachine;
@interface MEITunesStoreAuthenticator : BRUserPasswordAuthenticator
{
    unsigned char _currentAttempts;
    unsigned char _currentUnknownCancelations;
    char _oneClick;
    BRStateMachine * _stateMachine;
    NSString * _password;
    unsigned int _scope;
}

@property (nonatomic) unsigned int scope;

+ (void)upgradeAccount:(NSObject *)arg0 coder:(NSCoder *)arg1;

- (SSAccount *)storeServicesAccount;
- (void)_registerStateMachineBlocks;
- (char)_isAuthorizing;
- (void)_sendAuthenticationRequest;
- (char)requiresSpeedTestDisclosureAgreement;
- (char)shouldOfferOneClickAuthorization;
- (void)setOneClick:(char)arg0;
- (char)requiresUser:(id *)arg0;
- (char)requiresPassword:(id *)arg0;
- (NSObject *)_makeAuthenticationController;
- (char)shouldResetPasswordOnAuthenticationError:(NSError *)arg0;
- (char)promptsForExistingAccount;
- (void)_cancelAuthenticationWithCode:(int)arg0;
- (void)_handleAuthenticationAttemptDidCompleteWithAccount:(NSObject *)arg0 error:(NSError *)arg1;
- (unsigned int)_scopeToSet;
- (char)requiresAuthentication;
- (void)dealloc;
- (void)setScope:(unsigned int)arg0;
- (unsigned int)scope;
- (void).cxx_destruct;
- (void)_logout;
- (void)_login;
- (MEITunesStoreAuthenticator *)initWithAccount:(ACAccount *)arg0;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;

@end
