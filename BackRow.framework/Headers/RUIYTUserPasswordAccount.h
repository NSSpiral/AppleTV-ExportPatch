/* Runtime dump - RUIYTUserPasswordAccount
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAccount.h>

@protocol RUIYTAccount;
@interface RUIYTUserPasswordAccount : BRUserPasswordAccount <RUIYTAccount>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property char ytAllowsInappropriate;

+ (int)_currentVersion;

- (char)ytAllowsInappropriate;
- (void)setYtAllowsInappropriate:(char)arg0;
- (NSObject *)_keychainAccessGroup;
- (RUIYTUserPasswordAccount *)initWithCoder:(NSCoder *)arg0;
- (NSString *)type;

@end
