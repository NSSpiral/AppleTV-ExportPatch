/* Runtime dump - IMDIDSService
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDIDSService : IMDService <IDSAccountControllerDelegate, IDSAccountRegistrationDelegate>
{
    IDSAccountController * _accountController;
    char _activatingAccount;
    char _deactivatingAccount;
}

@property (readonly, retain, nonatomic) IDSAccountController * idsAccountController;
@property (readonly, retain, nonatomic) NSArray * accountsLoadedFromIdentityServices;
@property (readonly, nonatomic) NSArray * activeAccountsFromIdentityServices;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (IMDIDSService *)initWithBundle:(NSBundle *)arg0;
- (void)disableAccount:(NSObject *)arg0;
- (NSArray *)accountsLoadedFromIdentityServices;
- (NSArray *)activeAccountsFromIdentityServices;
- (void)enableAccount:(NSObject *)arg0;
- (void)accountAdded:(id)arg0;
- (void)accountRemoved:(id)arg0;
- (NSString *)_serviceDomain;
- (id)newAccountWithAccountDefaults:(NSDictionary *)arg0 accountID:(NSString *)arg1;
- (NSObject *)imdAccountLoginFromIDSAccountWithType:(int)arg0 login:(char)arg1;
- (void)_loadIDSAccountController;
- (NSObject *)accountFromIDSAccountWithUniqueID:(NSObject *)arg0;
- (void)accountController:(IDSAccountController *)arg0 accountAdded:(IDSAccount *)arg1;
- (void)accountController:(IDSAccountController *)arg0 accountUpdated:(IDSAccount *)arg1;
- (void)accountController:(IDSAccountController *)arg0 accountRemoved:(IDSAccount *)arg1;
- (void)accountController:(IDSAccountController *)arg0 accountEnabled:(IDSAccount *)arg1;
- (void)accountController:(IDSAccountController *)arg0 accountDisabled:(IDSAccount *)arg1;
- (void)account:(NSString *)arg0 registrationStatusInfoChanged:(NSDictionary *)arg1;
- (void)account:(NSString *)arg0 aliasesChanged:(NSDictionary *)arg1;
- (void)account:(NSString *)arg0 vettedAliasesChanged:(NSDictionary *)arg1;
- (void)account:(NSString *)arg0 profileChanged:(NSDictionary *)arg1;
- (void)account:(NSString *)arg0 loginChanged:(NSString *)arg1;
- (void)account:(NSString *)arg0 displayNameChanged:(NSString *)arg1;
- (void)refreshRegistrationForAccount:(NSString *)arg0;
- (void)registrationFailedForAccount:(NSObject *)arg0 needsDeletion:(id)arg1;
- (IDSAccountController *)idsAccountController;
- (Class)accountClass;

@end
