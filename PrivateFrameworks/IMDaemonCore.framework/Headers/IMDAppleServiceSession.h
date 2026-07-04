/* Runtime dump - IMDAppleServiceSession
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDAppleServiceSession : IMDServiceSession
{
    NSString * _serviceName;
    NSString * _GUID;
}

@property (readonly, retain, nonatomic) IDSAccount * idsAccount;
@property (readonly, retain, nonatomic) NSArray * aliases;
@property (readonly, retain, nonatomic) NSArray * vettedAliases;
@property (readonly, retain, nonatomic) NSString * callerID;
@property (readonly, nonatomic) NSString * serviceType;
@property (readonly, retain, nonatomic) NSString * callerURI;
@property (readonly, nonatomic) NSArray * registeredURIs;
@property (readonly, retain, nonatomic) NSString * GUID;

- (void)dealloc;
- (NSString *)serviceType;
- (IMDAppleServiceSession *)initWithAccount:(ACAccount *)arg0 service:(IMDService *)arg1;
- (void)sessionDidBecomeActive;
- (void)sessionWillBecomeInactive;
- (IDSAccount *)idsAccount;
- (void)logoutServiceSession;
- (void)authenticateAccount;
- (void)registerAccount;
- (void)unregisterAccount;
- (void)updateAuthorizationCredentials:(NSString *)arg0 token:(NSString *)arg1;
- (void)passwordUpdated;
- (void)addAliases:(NSArray *)arg0;
- (void)removeAliases:(NSArray *)arg0;
- (void)validateAliases:(NSArray *)arg0;
- (void)unvalidateAliases:(NSArray *)arg0;
- (void)validateProfile;
- (void)loginServiceSession;
- (void)refreshRegistration;
- (NSArray *)registeredURIs;
- (void)_updateAccountStatusToUnregistered:(char)arg0;
- (NSArray *)_aliases;
- (NSArray *)aliases;
- (void)deactivateAndPurgeIdentify;
- (char)_isDeviceRegistered;
- (NSArray *)vettedAliases;
- (int)validationStatusForAlias:(id)arg0;
- (void)clearCallerID;
- (NSString *)certForURI:(NSString *)arg0;
- (NSArray *)_aliasStrings;
- (int)_validationStatusForAlias:(id)arg0;
- (NSString *)callerURI;
- (void)activeDevicesUpdated;
- (void)reregister;
- (void)reIdentify;
- (NSString *)callerID;
- (NSString *)GUID;

@end
