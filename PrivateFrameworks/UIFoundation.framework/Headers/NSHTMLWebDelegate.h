/* Runtime dump - NSHTMLWebDelegate
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSHTMLWebDelegate : NSObject
{
    char _loadDidFinish;
    char _loadDidSucceed;
    NSURL * _baseURL;
}

- (void)dealloc;
- (NSHTMLWebDelegate *)init;
- (void)webView:(NSObject *)arg0 decidePolicyForNavigationAction:(NSObject *)arg1 request:(NSURLRequest *)arg2 frame:(struct CGRect)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (void)webView:(NSObject *)arg0 didFinishLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didFailLoadWithError:(NSError *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didCommitLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 decidePolicyForMIMEType:(NSObject *)arg1 request:(NSURLRequest *)arg2 frame:(struct CGRect)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (void)webView:(NSObject *)arg0 decidePolicyForNewWindowAction:(NSObject *)arg1 request:(NSURLRequest *)arg2 newFrameName:(NSString *)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (void)webView:(NSObject *)arg0 didStartProvisionalLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didFailProvisionalLoadWithError:(NSError *)arg1 forFrame:(NSObject *)arg2;
- (NSObject *)webView:(NSObject *)arg0 identifierForInitialRequest:(NSURLRequest *)arg1 fromDataSource:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didFinishLoadingFromDataSource:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didFailLoadingWithError:(NSError *)arg2 fromDataSource:(NSObject *)arg3;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didReceiveAuthenticationChallenge:(NSObject *)arg2 fromDataSource:(NSObject *)arg3;
- (NSHTMLWebDelegate *)initWithBaseURL:(NSURL *)arg0;
- (void)decidePolicyForRequest:(NSURLRequest *)arg0 decisionListener:(WebPolicyDecisionListener *)arg1;
- (char)loadDidFinish;
- (char)loadDidSucceed;
- (NSObject *)webView:(NSObject *)arg0 resource:(NSObject *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3 fromDataSource:(NSObject *)arg4;

@end
