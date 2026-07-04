/* Runtime dump - CKDBackingFakeAccount
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBackingFakeAccount : CKDBackingAccount
{
    NSString * _dsid;
    NSString * _identifier;
    NSString * _primaryEmail;
    NSString * _password;
    NSDictionary * _accountBag;
    NSObject<OS_dispatch_queue> * _fakeAccountInfoQueue;
}

@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSString * primaryEmail;
@property (retain, nonatomic) NSString * password;
@property (retain, nonatomic) NSString * dsid;
@property (retain, nonatomic) NSDictionary * accountBag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * fakeAccountInfoQueue;

+ (CKDBackingFakeAccount *)fakeAccountWithEmail:(id)arg0 password:(NSString *)arg1;
+ (Class)_platformBackingAccountClass;

- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (char)allowsCellularAccess;
- (NSString *)password;
- (char)cloudPhotosIsEnabled;
- (char)cloudKitIsEnabled;
- (char)isFakeAccount;
- (NSString *)dsid;
- (NSString *)cloudKitAuthToken;
- (NSString *)iCloudAuthToken;
- (NSString *)primaryEmail;
- (void)renewAuthTokenInStore:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)setDsid:(NSString *)arg0;
- (void)setAccountBag:(NSDictionary *)arg0;
- (NSObject<OS_dispatch_queue> *)fakeAccountInfoQueue;
- (CKDBackingFakeAccount *)_initFakeAccountWithEmail:(id)arg0 password:(NSString *)arg1;
- (NSDictionary *)accountBag;
- (ACAccount *)ckAccount;
- (id)accountPropertiesForDataclass:(id)arg0;
- (void)setPrimaryEmail:(NSString *)arg0;
- (void)setPassword:(NSString *)arg0;
- (void)setFakeAccountInfoQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
