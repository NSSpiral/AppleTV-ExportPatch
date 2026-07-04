/* Runtime dump - ATViCloudAccount
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAccount.h>
@interface ATViCloudAccount : BRUserPasswordAccount
{
    char _forceAuthentication;
    char _authenticatedAfterBoot;
    NSString * _personID;
    NSDictionary * _manifest;
    ACAccountStore * _accountStore;
}

@property (retain, nonatomic) NSString * personID;
@property (retain, nonatomic) NSDictionary * manifest;
@property (nonatomic) char forceAuthentication;
@property (nonatomic) char authenticatedAfterBoot;
@property (readonly, nonatomic) ACAccount * appleAccount;
@property (retain, nonatomic) ACAccountStore * accountStore;

+ (int)_currentVersion;

- (void)_writeProtectedInfo:(NSDictionary *)arg0;
- (void)_readProtectedInfo:(NSDictionary *)arg0;
- (void)setForceAuthentication:(char)arg0;
- (char)forceAuthentication;
- (void)setAuthenticatedAfterBoot:(char)arg0;
- (void)willBeDeleted;
- (char)authenticatedAfterBoot;
- (void)_resetSession;
- (void)dealloc;
- (ATViCloudAccount *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)type;
- (void).cxx_destruct;
- (ACAccount *)appleAccount;
- (ACAccountStore *)accountStore;
- (void)setAccountStore:(ACAccountStore *)arg0;
- (void)setPassword:(NSString *)arg0;
- (char)isAuthenticated;
- (NSString *)personID;
- (void)setPersonID:(NSString *)arg0;
- (NSDictionary *)manifest;
- (void)setManifest:(NSDictionary *)arg0;

@end
