/* Runtime dump - MEITunesStoreAccount
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/MEITunesAccount.h>
@interface MEITunesStoreAccount : MEITunesAccount
{
    SSAccount * _storeServicesAccount;
}

@property (readonly, retain, nonatomic) SSAccount * storeServicesAccount;

+ (int)_currentVersion;

- (char)accountOptionsSet;
- (void)_upgradeToVersion4;
- (SSAccount *)storeServicesAccount;
- (void)awakeFromLoad;
- (void)_upgradeMetadataForKey:(NSString *)arg0;
- (id)_hashDSID:(id)arg0;
- (MEITunesStoreAccount *)initWithCoder:(NSCoder *)arg0;
- (char)isValid;
- (NSString *)type;
- (void).cxx_destruct;
- (MEITunesStoreAccount *)initWithAccount:(ACAccount *)arg0;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (char)isAuthenticated;
- (NSString *)metadataValueForKey:(NSString *)arg0;
- (void)setMetadataValue:(id)arg0 forKey:(NSString *)arg1;

@end
