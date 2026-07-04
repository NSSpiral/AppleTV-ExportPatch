/* Runtime dump - CKDBackingAccount
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBackingAccount : NSObject

@property (readonly, nonatomic) NSString * dsid;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSString * primaryEmail;
@property (readonly, nonatomic) NSString * cloudKitAuthToken;
@property (readonly, nonatomic) NSString * iCloudAuthToken;
@property (readonly, nonatomic) NSString * serverPreferredPushEnvironment;
@property (readonly, nonatomic) char isFakeAccount;
@property (readonly, nonatomic) char allowsCellularAccess;
@property (readonly, nonatomic) char cloudKitIsEnabled;
@property (readonly, nonatomic) char cloudPhotosIsEnabled;
@property (readonly, nonatomic) NSURL * privateCloudDBURL;
@property (readonly, nonatomic) NSURL * privateShareServiceURL;
@property (readonly, nonatomic) NSURL * privateDeviceServiceURL;

+ (NSObject *)primaryAccountInStore:(NSObject *)arg0;
+ (NSString *)accountWithIdentifier:(NSString *)arg0 inStore:(NSObject *)arg1;
+ (CKDBackingAccount *)fakeAccountWithEmail:(id)arg0 password:(NSString *)arg1;
+ (Class)_platformBackingAccountClass;
+ (char)ensureCloudKitChildAccountOnParentAccount:(NSObject *)arg0 inStore:(NSObject *)arg1;

- (CKDBackingAccount *)init;
- (CKDBackingAccount *)_init;
- (NSString *)identifier;
- (char)allowsCellularAccess;
- (NSString *)serverPreferredPushEnvironment;
- (char)cloudPhotosIsEnabled;
- (char)cloudKitIsEnabled;
- (char)isFakeAccount;
- (NSString *)dsid;
- (NSString *)cloudKitAuthToken;
- (NSString *)iCloudAuthToken;
- (NSString *)primaryEmail;
- (NSURL *)privateCloudDBURL;
- (NSURL *)privateShareServiceURL;
- (NSURL *)privateDeviceServiceURL;
- (void)renewAuthTokenInStore:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (ACAccount *)ckAccount;
- (id)accountPropertiesForDataclass:(id)arg0;

@end
