/* Runtime dump - ATVOAuth2TokenResponse
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVOAuth2TokenResponse : NSObject
{
    NSString * _accessToken;
    NSString * _refreshToken;
    NSError * _error;
    double _expiresIn;
}

@property (retain) NSString * accessToken;
@property (retain) NSString * refreshToken;
@property double expiresIn;
@property (retain) NSError * error;

+ (NSURLResponse *)tokenResponseFromResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;

- (NSString *)refreshToken;
- (void)setRefreshToken:(NSString *)arg0;
- (void)setExpiresIn:(double)arg0;
- (double)expiresIn;
- (void)dealloc;
- (NSError *)error;
- (void)setError:(NSError *)arg0;
- (void)setAccessToken:(NSString *)arg0;
- (NSString *)accessToken;

@end
