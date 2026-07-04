/* Runtime dump - AASetupAssistantConfigResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASetupAssistantConfigResponse : AAResponse
{
    NSDictionary * _urls;
}

@property (readonly, nonatomic) NSString * signingSessionCertURL;
@property (readonly, nonatomic) NSString * signingSessionURL;
@property (readonly, nonatomic) NSString * aboutURL;
@property (readonly, nonatomic) NSString * xmlUI;
@property (readonly, nonatomic) NSString * upgradeIOSTermsUI;
@property (readonly, nonatomic) NSString * genericTermsURL;
@property (readonly, nonatomic) NSString * iForgotUIURL;
@property (readonly, nonatomic) NSString * authenticateURL;
@property (readonly, nonatomic) NSString * createAppleIDURL;
@property (readonly, nonatomic) NSString * updateAppleIDURL;
@property (readonly, nonatomic) NSString * createDelegateAccountsURL;
@property (readonly, nonatomic) NSString * checkValidityURL;
@property (readonly, nonatomic) NSString * iForgotURL;
@property (readonly, nonatomic) NSString * existingAppleIDTermsUIURL;
@property (readonly, nonatomic) char setupAssistantServerEnabled;
@property (readonly, nonatomic) NSString * loginDelegatesURL;
@property (readonly, nonatomic) NSString * activeEmailDomain;
@property (readonly, nonatomic) NSString * upgradeStatusURL;

- (void).cxx_destruct;
- (NSString *)signingSessionCertURL;
- (NSString *)signingSessionURL;
- (NSString *)authenticateURL;
- (NSString *)createAppleIDURL;
- (NSString *)updateAppleIDURL;
- (NSString *)createDelegateAccountsURL;
- (NSString *)upgradeIOSTermsUI;
- (NSString *)upgradeStatusURL;
- (AASetupAssistantConfigResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSString *)xmlUI;
- (NSString *)aboutURL;
- (NSString *)checkValidityURL;
- (NSString *)iForgotURL;
- (NSString *)existingAppleIDTermsUIURL;
- (NSString *)loginDelegatesURL;
- (NSString *)genericTermsURL;
- (char)setupAssistantServerEnabled;
- (NSString *)activeEmailDomain;
- (NSString *)iForgotUIURL;

@end
