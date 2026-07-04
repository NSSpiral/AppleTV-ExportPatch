/* Runtime dump - ACAccountType
 * Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountType : NSObject <NSSecureCoding>
{
    NSString * _accountTypeDescription;
    NSString * _identifier;
    NSString * _credentialType;
    NSURL * _objectID;
    int _visibility;
    NSString * _credentialProtectionPolicy;
    ACAccountStore * _accountStore;
    int _supportsAuthentication;
    char _supportsMultipleAccounts;
    NSSet * _supportedDataclasses;
    NSSet * _syncableDataclasses;
    NSSet * _accessKeys;
    char _encryptAccountProperties;
    NSString * _owningBundleID;
    NSString * _owningTeamID;
}

@property (readonly, nonatomic) NSString * accountTypeDescription;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) char accessGranted;
@property (retain, nonatomic) NSURL * objectID;
@property (nonatomic) int visibility;
@property (copy, nonatomic) id credentialProtectionPolicy;
@property (retain, nonatomic) NSString * credentialType;
@property (weak, nonatomic) ACAccountStore * accountStore;
@property (nonatomic) int supportsAuthentication;
@property (nonatomic) char supportsMultipleAccounts;
@property (retain, nonatomic) NSString * owningBundleID;
@property (readonly, nonatomic) NSSet * supportedDataclasses;
@property (readonly, nonatomic) NSSet * syncableDataclasses;
@property (readonly, nonatomic) NSSet * accessKeys;
@property (readonly, nonatomic) NSString * fullDescription;
@property (readonly, nonatomic) char encryptAccountProperties;
@property (retain, nonatomic) NSString * owningTeamID;

+ (char)supportsSecureCoding;

- (NSString *)fullDescription;
- (ACAccountType *)initWithIdentifier:(NSString *)arg0 description:(NSString *)arg1;
- (char)accessGranted;
- (NSString *)owningTeamID;
- (void)setOwningTeamID:(NSString *)arg0;
- (NSString *)accountTypeDescription;
- (ACAccountType *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)identifier;
- (ACAccountType *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)credentialType;
- (NSString *)credentialProtectionPolicy;
- (void)setCredentialType:(NSString *)arg0;
- (void)setAccountTypeDescription:(NSString *)arg0;
- (void)setSupportsAuthentication:(int)arg0;
- (void)setSupportsMultipleAccounts:(char)arg0;
- (void)setCredentialProtectionPolicy:(NSString *)arg0;
- (NSSet *)syncableDataclasses;
- (NSString *)owningBundleID;
- (void)setOwningBundleID:(NSString *)arg0;
- (ACAccountType *)initWithManagedAccountType:(NSObject *)arg0 accountStore:(ACAccountStore *)arg1;
- (char)supportsMultipleAccounts;
- (char)encryptAccountProperties;
- (NSSet *)accessKeys;
- (ACAccountType *)initWithManagedAccountType:(NSObject *)arg0;
- (ACAccountStore *)accountStore;
- (void)setAccountStore:(ACAccountStore *)arg0;
- (int)supportsAuthentication;
- (NSSet *)supportedDataclasses;
- (NSURL *)objectID;
- (void)setObjectID:(NSURL *)arg0;
- (int)visibility;
- (void)setVisibility:(int)arg0;

@end
