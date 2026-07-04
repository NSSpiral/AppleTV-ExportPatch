/* Runtime dump - ATViCloudAccountManager
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATViCloudAccountManager : NSObject
{
    char _requiresMachineProvisioning;
    char _cancelled;
    char _isSecondPassError;
    ACAccount * _activeAccount;
    ACAccountStore * _accountStore;
    NSString * _username;
    NSString * _password;
    id _completionBlock;
    NSArray * _trustedHSADevices;
    NSOperationQueue * _networkingQueue;
}

@property (retain, nonatomic) ACAccount * activeAccount;
@property (nonatomic) char requiresMachineProvisioning;
@property (retain, nonatomic) ACAccountStore * accountStore;
@property (retain, nonatomic) NSString * username;
@property (retain, nonatomic) NSString * password;
@property (nonatomic) char cancelled;
@property (copy, nonatomic) id completionBlock;
@property (nonatomic) char isSecondPassError;
@property (retain, nonatomic) NSArray * trustedHSADevices;
@property (retain, nonatomic) NSOperationQueue * networkingQueue;

- (ACAccount *)activeAccount;
- (void)dealloc;
- (ATViCloudAccountManager *)init;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (char)cancelled;
- (void)setCancelled:(char)arg0;
- (void).cxx_destruct;
- (void)_authenticateWithAccount:(NSObject *)arg0;
- (void)_kickOffiCloudAuthentication;
- (void)_authenticationCompletionHandlerForAccount:(NSObject *)arg0 withAuthenticationState:(char)arg1 andError:(NSError *)arg2;
- (void)setRequiresMachineProvisioning:(char)arg0;
- (void)_executeCompletionBlock;
- (void)_handleAuthenticationSucceeded;
- (void)_handleAuthenticationError:(NSError *)arg0 forAccount:(NSObject *)arg1;
- (void)_standardErrorDialogWithHeader:(NSString *)arg0 message:(NSString *)arg1 defaultButton:(SSDialogButton *)arg2 andAlernateButton:(id)arg3;
- (void)_performTermsAndConditionsUpdateForAccount:(NSObject *)arg0;
- (void)setIsSecondPassError:(char)arg0;
- (void)_performHSAVerificationWithAccount:(NSObject *)arg0;
- (void)_authenticateWithHSAForAccount:(NSObject *)arg0;
- (void)_handleAuthenticationFailed;
- (void)_handleTOCAgreed:(id)arg0 onAccount:(NSObject *)arg1;
- (void)_loadTOCForAccount:(NSObject *)arg0 WithCompletionHandler:(id /* block */)arg1;
- (void)setTrustedHSADevices:(NSArray *)arg0;
- (void)_manageHSACodeForAccount:(NSObject *)arg0 toDevice:(NSObject *)arg1;
- (void)_loadHSADevicesForAccount:(NSObject *)arg0 WithCompletionHandler:(id /* block */)arg1;
- (void)_verifyEnteredHSACode:(id)arg0 forAccount:(NSObject *)arg1 withDevice:(struct OpaqueFigCaptureDevice *)arg2;
- (void)_sendHSACodeForAccount:(NSObject *)arg0 toDevice:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_verifyHSACode:(id)arg0 forAccount:(NSObject *)arg1 fromDevice:(NSObject *)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_handleHSASucceededForAccount:(NSObject *)arg0;
- (void)authenticateWithCompletionHandler:(id /* block */)arg0;
- (void)signOut;
- (void)fetchFamilyDetailsWithCompletion:(id /* block */)arg0;
- (void)setActiveAccount:(ACAccount *)arg0;
- (char)requiresMachineProvisioning;
- (char)isSecondPassError;
- (NSArray *)trustedHSADevices;
- (NSOperationQueue *)networkingQueue;
- (void)setNetworkingQueue:(NSOperationQueue *)arg0;
- (ACAccountStore *)accountStore;
- (NSString *)password;
- (void)setAccountStore:(ACAccountStore *)arg0;
- (void)setPassword:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (NSString *)username;

@end
