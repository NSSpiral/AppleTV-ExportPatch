/* Runtime dump - CKDBackingiOSAccount
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBackingiOSAccount : CKDBackingAccount
{
    ACAccountStore * _accountStore;
    ACAccount * _parentAppleAccount;
}

@property (readonly, nonatomic) ACAccountStore * accountStore;
@property (readonly, nonatomic) ACAccount * ckAccount;
@property (retain, nonatomic) ACAccount * parentAppleAccount;

+ (NSObject *)primaryAccountInStore:(NSObject *)arg0;
+ (NSString *)accountWithIdentifier:(NSString *)arg0 inStore:(NSObject *)arg1;
+ (void)determineCloudKitInfoFromEmail:(id)arg0 password:(NSString *)arg1 completion:(id /* block */)arg2;

- (NSString *)identifier;
- (void).cxx_destruct;
- (char)allowsCellularAccess;
- (ACAccountStore *)accountStore;
- (char)cloudPhotosIsEnabled;
- (char)cloudKitIsEnabled;
- (NSString *)dsid;
- (NSString *)cloudKitAuthToken;
- (NSString *)iCloudAuthToken;
- (NSString *)primaryEmail;
- (ACAccount *)ckAccount;
- (id)accountPropertiesForDataclass:(id)arg0;
- (NSNumber *)_initWithParentAccount:(NSObject *)arg0 inStore:(NSObject *)arg1;
- (ACAccount *)parentAppleAccount;
- (void)setParentAppleAccount:(ACAccount *)arg0;

@end
