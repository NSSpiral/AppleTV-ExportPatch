/* Runtime dump - WebDefaultResourceLoadDelegate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDefaultResourceLoadDelegate : NSObject

+ (WebDefaultResourceLoadDelegate *)sharedResourceLoadDelegate;

- (NSObject *)webView:(NSObject *)arg0 connectionPropertiesForResource:(NSObject *)arg1 dataSource:(NSObject *)arg2;
- (NSObject *)webView:(NSObject *)arg0 identifierForInitialRequest:(NSURLRequest *)arg1 fromDataSource:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didFinishLoadingFromDataSource:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didFailLoadingWithError:(NSError *)arg2 fromDataSource:(NSObject *)arg3;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didReceiveAuthenticationChallenge:(NSObject *)arg2 fromDataSource:(NSObject *)arg3;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didCancelAuthenticationChallenge:(NSObject *)arg2 fromDataSource:(NSObject *)arg3;
- (char)webView:(NSObject *)arg0 resource:(NSObject *)arg1 canAuthenticateAgainstProtectionSpace:(NSObject *)arg2 forDataSource:(NSObject *)arg3;
- (NSObject *)webView:(NSObject *)arg0 resource:(NSObject *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3 fromDataSource:(NSObject *)arg4;
- (void)webView:(NSObject *)arg0 didLoadResourceFromMemoryCache:(NSObject *)arg1 response:(NSURLResponse *)arg2 length:(int)arg3 fromDataSource:(NSObject *)arg4;
- (char)webView:(NSObject *)arg0 resource:(NSObject *)arg1 shouldUseCredentialStorageForDataSource:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didReceiveResponse:(char)arg2 fromDataSource:(NSObject *)arg3;
- (NSObject *)webView:(NSObject *)arg0 resource:(NSObject *)arg1 willCacheResponse:(NSURLResponse *)arg2 fromDataSource:(NSObject *)arg3;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didReceiveContentLength:(int)arg2 fromDataSource:(NSObject *)arg3;
- (void)webView:(NSObject *)arg0 plugInFailedWithError:(NSError *)arg1 dataSource:(NSObject *)arg2;

@end
