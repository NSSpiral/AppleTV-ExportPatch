/* Runtime dump - ATVOAuth2Account
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRAccount.h>
@interface ATVOAuth2Account : BRAccount
{
    NSString * _refreshToken;
}

@property (retain) NSString * refreshToken;
@property (retain) NSString * accessToken;

- (void)_writeProtectedInfo:(NSDictionary *)arg0;
- (void)_readProtectedInfo:(NSDictionary *)arg0;
- (NSString *)refreshToken;
- (void)setRefreshToken:(NSString *)arg0;
- (void)dealloc;
- (char)isAuthenticated;
- (void)setAccessToken:(NSString *)arg0;
- (NSString *)accessToken;

@end
