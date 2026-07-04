/* Runtime dump - RUIYTOAuth2Account
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVOAuth2Account.h>

@protocol RUIYTAccount;
@interface RUIYTOAuth2Account : ATVOAuth2Account <RUIYTAccount>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property char ytAllowsInappropriate;

+ (int)_currentVersion;

- (char)ytAllowsInappropriate;
- (void)setYtAllowsInappropriate:(char)arg0;
- (NSObject *)_keychainAccessGroup;
- (NSString *)type;

@end
