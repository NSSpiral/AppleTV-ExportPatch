/* Runtime dump - YTAuthenticatorDeferredRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTAuthenticatorDeferredRequest : NSObject
{
    NSMutableURLRequest * _request;
    char _accountAuthRequired;
}

- (void)dealloc;
- (NSMutableURLRequest *)request;
- (void)setRequest:(NSMutableURLRequest *)arg0;
- (void)setAccountAuthRequired:(char)arg0;
- (char)accountAuthRequired;

@end
