/* Runtime dump - ACAccountCredential
 * Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountCredential : NSObject <NSSecureCoding>
{
    NSMutableDictionary * _credentialItems;
    NSString * _credentialType;
    NSMutableSet * _dirtyProperties;
    ACAccount * _owningAccount;
    char _dirty;
    char _empty;
}

@property (copy, nonatomic) NSString * oauthToken;
@property (copy, nonatomic) NSString * token;
@property (copy, nonatomic) NSString * oauthTokenSecret;
@property (copy, nonatomic) NSString * password;
@property (copy, nonatomic) NSString * credentialType;
@property (readonly, nonatomic) NSSet * dirtyProperties;
@property (nonatomic) char dirty;
@property (nonatomic) char empty;
@property (copy, nonatomic) NSString * oauthRefreshToken;
@property (retain, nonatomic) NSDate * expiryDate;
@property (copy, nonatomic) NSString * findMyiPhoneToken;
@property (copy, nonatomic) NSString * mapsToken;
@property (copy, nonatomic) NSString * hsaToken;
@property (copy, nonatomic) NSDate * tokenExpiryDate;

+ (NSString *)credentialWithOAuthToken:(NSString *)arg0 tokenSecret:(NSString *)arg1;
+ (char)supportsSecureCoding;
+ (NSString *)supportedKeysForAccountTypeIdentifier:(NSString *)arg0 credentialType:(NSString *)arg1;
+ (NSString *)nonPersistentKeysForAccountTypeIdentifier:(NSString *)arg0 credentialType:(NSString *)arg1;
+ (NSObject *)credentialPolicyForAccountType:(NSObject *)arg0 key:(NSString *)arg1 clientID:(NSObject *)arg2;
+ (NSString *)credentialWithPassword:(NSString *)arg0;

- (void)_clearDirtyProperties;
- (void)_setOwningAccount:(NSObject *)arg0;
- (void)_markPropertyDirty:(id)arg0;
- (NSMutableDictionary *)credentialItems;
- (ACAccountCredential *)initWithOAuthToken:(NSString *)arg0 tokenSecret:(NSString *)arg1;
- (ACAccountCredential *)initWithOAuth2Token:(NSString *)arg0 refreshToken:(NSString *)arg1 expiryDate:(NSDate *)arg2;
- (void)setOauthTokenNoSync:(id)arg0;
- (id)oauthTokenNoSync;
- (NSString *)oauthRefreshToken;
- (NSDate *)tokenExpiryDate;
- (void)setTokenExpiryDate:(NSDate *)arg0;
- (void)setEmpty:(char)arg0;
- (void)setDirty:(char)arg0;
- (NSSet *)dirtyProperties;
- (NSString *)oauthTokenSecret;
- (void)setOauthTokenSecret:(NSString *)arg0;
- (ACAccountCredential *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (ACAccountCredential *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)isEmpty;
- (void).cxx_destruct;
- (NSString *)token;
- (void)setToken:(NSString *)arg0;
- (NSString *)credentialType;
- (NSArray *)keysForCredentialItems;
- (void)setCredentialType:(NSString *)arg0;
- (NSString *)hsaToken;
- (NSString *)findMyiPhoneToken;
- (void)setMapsToken:(NSString *)arg0;
- (void)setHsaToken:(NSString *)arg0;
- (void)setFindMyiPhoneToken:(NSString *)arg0;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (ACAccountCredential *)initWithPassword:(NSString *)arg0;
- (NSString *)mapsToken;
- (NSDate *)expiryDate;
- (void)setExpiryDate:(NSDate *)arg0;
- (NSString *)credentialItemForKey:(NSString *)arg0;
- (void)setCredentialItem:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)oauthToken;
- (void)setOauthToken:(NSString *)arg0;
- (void)setOauthRefreshToken:(NSString *)arg0;
- (char)isDirty;

@end
