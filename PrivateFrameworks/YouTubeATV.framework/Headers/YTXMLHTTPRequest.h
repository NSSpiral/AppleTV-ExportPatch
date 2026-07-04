/* Runtime dump - YTXMLHTTPRequest
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTXMLHTTPRequest : XMLSAXHTTPRequest
{
    NSMutableURLRequest * _deferredRequest;
    char _needsAccountAuth;
    char _needsHostHeader;
}

@property (nonatomic) char needsAccountAuth;
@property (nonatomic) char needsHostHeader;

- (void)dealloc;
- (YTXMLHTTPRequest *)init;
- (void)loadRequest:(NSURLRequest *)arg0;
- (char)needsAccountAuth;
- (void)didAuthenticate:(char)arg0;
- (void)setNeedsAccountAuth:(char)arg0;
- (void)failedToAuthenticate:(id)arg0;
- (void)listenForAuthenticationNotifications:(char)arg0;
- (char)needsHostHeader;
- (void)setNeedsHostHeader:(char)arg0;

@end
