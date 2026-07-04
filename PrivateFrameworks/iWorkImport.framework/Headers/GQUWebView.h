/* Runtime dump - GQUWebView
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQUWebView : WebView
{
    char mHasAttachments;
}

+ (GQUWebView *)_createWebPreferencesForRendering;
+ (void)disableFrameScrollingRecursively:(id)arg0;

- (char)_validateURL:(NSURL *)arg0;
- (NSURL *)_urlToDownloadFromURL:(NSURL *)arg0;
- (void)loadDataSynchronously:(id)arg0 textEncodingName:(NSString *)arg1 resources:(NSArray *)arg2;
- (GQUWebView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)webView:(NSObject *)arg0 decidePolicyForNavigationAction:(NSObject *)arg1 request:(NSURLRequest *)arg2 frame:(struct CGRect)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (void)webView:(NSObject *)arg0 didFailLoadWithError:(NSError *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 decidePolicyForMIMEType:(NSObject *)arg1 request:(NSURLRequest *)arg2 frame:(struct CGRect)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (void)webView:(NSObject *)arg0 didFailProvisionalLoadWithError:(NSError *)arg1 forFrame:(NSObject *)arg2;
- (NSObject *)webView:(NSObject *)arg0 resource:(NSObject *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3 fromDataSource:(NSObject *)arg4;
- (void)setHasAttachments:(char)arg0;

@end
