/* Runtime dump - BRAccount
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRAccountType;
@interface BRAccount : NSObject <NSCoding>
{
    int _version;
    NSString * _assignedGUID;
    NSString * _accountName;
    char _accountOptionsSet;
    char _isSystemAccount;
    NSMutableDictionary * _metadata;
    NSMutableDictionary * _session;
    BRAccountType * _accountType;
    char _lockedForAuthenticator;
}

+ (int)_currentVersion;

- (void)resetAccountOptions;
- (char)accountOptionsSet;
- (NSString *)_encryptPassword:(NSString *)arg0;
- (NSString *)_decryptPassword:(NSString *)arg0;
- (BRAccount *)initWithAccountName:(NSString *)arg0;
- (void)awakeFromLoad;
- (void)_writeProtectedInfo:(NSDictionary *)arg0;
- (void)_readProtectedInfo:(NSDictionary *)arg0;
- (void)setSessionValue:(id)arg0 forKey:(NSString *)arg1;
- (NSString *)sessionValueForKey:(NSString *)arg0;
- (void)markAsDirty;
- (void)willBeDeleted;
- (void)_resetSession;
- (void)resetSession;
- (NSObject *)_keychainAccessGroup;
- (NSString *)_assignedGUID;
- (char)_isSystemAccount;
- (NSObject *)_accountQuery;
- (void)markAccountOptionsAsSet;
- (void)acquireAuthenticatorLock;
- (void)releaseAuthenticatorLock;
- (void)dealloc;
- (BRAccount *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isValid;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void)setAccountName:(NSString *)arg0;
- (NSString *)accountName;
- (char)isAuthenticated;
- (int)_version;
- (NSString *)metadataValueForKey:(NSString *)arg0;
- (void)setMetadataValue:(id)arg0 forKey:(NSString *)arg1;
- (void)_setVersion:(int)arg0;

@end
