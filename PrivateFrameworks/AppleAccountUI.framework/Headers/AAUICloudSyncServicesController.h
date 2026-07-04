/* Runtime dump - AAUICloudSyncServicesController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUICloudSyncServicesController : NSObject <DAValidityCheckConsumer>
{
    ACAccountStore * _accountStore;
    ACAccount * _account;
    NSMutableDictionary * _queuedDataclassActions;
    NSMutableArray * _dataclassesRequiringMergeDecision;
    char _didUserConsentToMerge;
    char _isVerifyingExistingEmailAccount;
    MFAccountValidator * _validator;
    AAAutoAccountVerifier * _verifier;
    DAAccount * _accountBeingValidated;
    id _handler;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)_accountClassForAddress:(NSString *)arg0;
+ (NSString *)_usernameFromAddress:(NSString *)arg0;
+ (NSString *)_domainFromAddress:(NSString *)arg0;
+ (char)canAutoSetupMailAccount:(NSObject *)arg0;
+ (char)needSetupForMailAccount:(NSObject *)arg0;

- (AAUICloudSyncServicesController *)init;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void).cxx_destruct;
- (char)_shouldInitiallyEnableDataclass:(id)arg0 forAccount:(NSObject *)arg1;
- (void)_presentMergeConfirmationForDataclasses:(id)arg0 account:(ACAccount *)arg1;
- (char)_dataclassBoundToSingleAccountAndOnAlready:(id)arg0 withAccount:(ACAccount *)arg1;
- (void)_validateExistingEmailAccount:(NSObject *)arg0 withPassword:(NSString *)arg1;
- (void)_createAndValidateDAMailAccountWithProperties:(NSDictionary *)arg0;
- (void)_createAndValidateMailAccountWithProperties:(NSDictionary *)arg0;
- (void)_validateDAAccount:(NSObject *)arg0;
- (void)_validateMailAccount:(NSObject *)arg0;
- (void)_addDAEmailAccount:(NSObject *)arg0;
- (void)_addMailAccount:(NSObject *)arg0;
- (void)setCloudServicesEnabled:(char)arg0 completion:(id /* block */)arg1;
- (void)setDeviceLocatorEnabled:(char)arg0;
- (void)setBackupEnabled:(char)arg0 completion:(id /* block */)arg1;
- (void)completeEnablingCloudServicesWithCompletion:(id /* block */)arg0;
- (void)verifyAccountWithAppleID:(NSString *)arg0 completion:(id /* block */)arg1;
- (void)setupMailAccount:(NSObject *)arg0 password:(NSString *)arg1 completion:(id /* block */)arg2;
- (void)account:(ACAccount *)arg0 isValid:(char)arg1 validationError:(NSError *)arg2;
- (void)accountValidator:(NSObject *)arg0 finishedValidationOfAccount:(NSObject *)arg1 usedSSL:(char)arg2;
- (NSNumber *)_account;

@end
