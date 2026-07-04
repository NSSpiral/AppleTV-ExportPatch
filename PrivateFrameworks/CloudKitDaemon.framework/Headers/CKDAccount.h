/* Runtime dump - CKDAccount
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAccount : NSObject <CKDAccountInfoProvider>
{
    char _isUnitTestingAccount;
    char _accountWantsPushRegistration;
    char _isAnonymousAccount;
    char _haveWarnedAboutServerPreferredPushEnvironment;
    ACAccountStore * _accountStore;
    ACAccountType * _acAccountType;
    CKDBackingAccount * _backingAccount;
    CKDClientContext * _context;
}

@property (readonly, nonatomic) NSString * accountIdentifier;
@property (readonly, nonatomic) char isFakeAccount;
@property (nonatomic) char isUnitTestingAccount;
@property (nonatomic) char accountWantsPushRegistration;
@property (readonly, nonatomic) char allowsCellularAccess;
@property (readonly, nonatomic) char cloudKitIsEnabled;
@property (readonly, nonatomic) char cloudPhotosIsEnabled;
@property (retain, nonatomic) ACAccountStore * accountStore;
@property (retain, nonatomic) ACAccountType * acAccountType;
@property (readonly, nonatomic) NSString * accountID;
@property (readonly, nonatomic) CKDBackingAccount * backingAccount;
@property (weak, nonatomic) CKDClientContext * context;
@property (nonatomic) char isAnonymousAccount;
@property (nonatomic) char haveWarnedAboutServerPreferredPushEnvironment;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)description;
- (CKDClientContext *)context;
- (void)setContext:(CKDClientContext *)arg0;
- (void).cxx_destruct;
- (NSString *)languageCode;
- (CKContainerID *)containerID;
- (NSString *)accountID;
- (NSString *)bundleID;
- (char)allowsCellularAccess;
- (char)isAnonymousAccount;
- (char)canAccessAccount;
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(char)arg0 allowsCellularAccess:(char)arg1 withCompletionHandler:(id /* block */)arg2;
- (char)isUnitTestingAccount;
- (ACAccountStore *)accountStore;
- (NSString *)serverPreferredPushEnvironment;
- (NSString *)accountIdentifier;
- (CKDAccount *)initAnonymousAccountWithContext:(CKDClientContext *)arg0;
- (CKDAccount *)initFakeAccountWithEmail:(id)arg0 password:(NSString *)arg1 context:(CKDClientContext *)arg2;
- (CKDAccount *)initPrimaryAccountWithContext:(CKDClientContext *)arg0;
- (void)setIsUnitTestingAccount:(char)arg0;
- (char)accountWantsPushRegistration;
- (void)setAccountWantsPushRegistration:(char)arg0;
- (char)cloudPhotosIsEnabled;
- (char)cloudKitIsEnabled;
- (CKDServerConfiguration *)config;
- (char)isFakeAccount;
- (CKRecordID *)containerScopedUserID;
- (NSBundle *)applicationBundle;
- (CKDMescalSession *)mescalSession;
- (NSString *)trafficContainerIdentifier;
- (NSObject *)hardwareID;
- (NSString *)deviceName;
- (NSString *)regionCode;
- (NSMutableArray *)enabledKeyboards;
- (void)renewAuthTokenWithCompletionHandler:(id /* block */)arg0;
- (void)fetchConfigurationUsingBackgroundSession:(char)arg0 allowsCellularAccess:(char)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)resetMescalSession;
- (void)renewMescalSessionForRequest:(NSURLRequest *)arg0 withCompletionHandler:(id /* block */)arg1;
- (NSObject *)baseURLForServerType:(int)arg0 partitionType:(int)arg1;
- (void)fetchPublicURLUsingBackgroundSession:(char)arg0 allowsCellularAccess:(char)arg1 serverType:(int)arg2 completionHandler:(id /* block */)arg3;
- (NSString *)dsid;
- (void)fetchDeviceIDUsingBackgroundSession:(char)arg0 allowsCellularAccess:(char)arg1 withCompletionHandler:(id /* block */)arg2;
- (char)shouldFailAllTasks;
- (NSString *)cloudKitAuthToken;
- (void)noteTimeSpentInNetworking:(double)arg0;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg0;
- (NSString *)iCloudAuthToken;
- (NSString *)_initWithContext:(CKDClientContext *)arg0;
- (CKDBackingAccount *)backingAccount;
- (char)haveWarnedAboutServerPreferredPushEnvironment;
- (void)setHaveWarnedAboutServerPreferredPushEnvironment:(char)arg0;
- (NSURL *)_urlBySettingCustomBaseURL:(NSURL *)arg0 onURL:(NSURL *)arg1;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (CKDAccount *)initWithAccountID:(NSString *)arg0 context:(CKDClientContext *)arg1;
- (void)setAccountStore:(ACAccountStore *)arg0;
- (ACAccountType *)acAccountType;
- (void)setAcAccountType:(ACAccountType *)arg0;
- (void)setIsAnonymousAccount:(char)arg0;

@end
