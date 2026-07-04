/* Runtime dump - WebNavigationData
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNavigationData : NSObject
{
    WebNavigationDataPrivate * _private;
}

- (void)dealloc;
- (NSURL *)url;
- (NSString *)title;
- (NSURLResponse *)response;
- (NSURLRequest *)originalRequest;
- (WebNavigationData *)initWithURLString:(NSString *)arg0 title:(NSString *)arg1 originalRequest:(NSURLRequest *)arg2 response:(NSURLResponse *)arg3 hasSubstituteData:(char)arg4 clientRedirectSource:(NSString *)arg5;
- (char)hasSubstituteData;
- (NSString *)clientRedirectSource;

@end
