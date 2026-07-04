/* Runtime dump - HttpCookieManager
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface HttpCookieManager : NSObject

+ (HttpCookieManager *)sharedInstance;

- (void)deleteAllCookies;
- (void)cookieChanged:(NSNotification *)arg0;
- (NSString *)cookieWithString:(NSString *)arg0;
- (void)showAllCookies;
- (NSString *)valueForKey:(NSString *)arg0;
- (void)dealloc;
- (HttpCookieManager *)init;
- (void)deleteCookie:(id)arg0;
- (NSString *)cookieForKey:(NSString *)arg0;
- (void)setCookie:(NSString *)arg0;

@end
