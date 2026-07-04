/* Runtime dump - AASetupAssistantService
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASetupAssistantService : NSObject
{
    NSOperationQueue * _requesterQueue;
    NSString * _appleID;
    NSString * _password;
    NSString * _emailChoice;
    ACAccount * _account;
    struct OpaqueCFHTTPCookieStorage * _cookieStorage;
    AASigningSession * _signingSession;
    NSDate * _signingSessionCreationDate;
}

@property (copy, nonatomic) NSString * appleID;
@property (copy, nonatomic) NSString * password;
@property (copy, nonatomic) NSString * emailChoice;

+ (NSDictionary *)urlConfiguration;
+ (void)resetURLConfiguration;

- (void)dealloc;
- (AASetupAssistantService *)init;
- (void).cxx_destruct;
- (AASigningSession *)_signingSession;
- (void)_doHSADeviceProvisioningWithDSID:(id)arg0 data:(NSData *)arg1;
- (void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)arg0 data:(NSData *)arg1;
- (void)_doHSADeviceReprovisioningWithDSID:(id)arg0;
- (NSString *)emailChoice;
- (AASetupAssistantService *)initWithAppleID:(NSString *)arg0 password:(NSString *)arg1;
- (void)downloadURLConfiguration:(NSDictionary *)arg0;
- (void)authenticateWithHandler:(id /* block */)arg0;
- (void)createAppleIDWithParameters:(NSDictionary *)arg0 handler:(id /* block */)arg1;
- (void)updateAppleIDWithParameters:(NSDictionary *)arg0 handler:(id /* block */)arg1;
- (void)setupDelegateAccountsWithParameters:(NSDictionary *)arg0 handler:(id /* block */)arg1;
- (void)loginDelegatesWithParameters:(NSDictionary *)arg0 completion:(id /* block */)arg1;
- (void)upgradeiCloudTermsIfNecessaryWithHandler:(id /* block */)arg0;
- (void)shouldPresentUpgradeFlowWithCompletion:(id /* block */)arg0;
- (void)setEmailChoice:(NSString *)arg0;
- (AASetupAssistantService *)initWithAccount:(ACAccount *)arg0;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg0;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (void)setAppleID:(NSString *)arg0;
- (NSString *)appleID;

@end
