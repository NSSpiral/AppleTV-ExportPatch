/* Runtime dump - UIWebViewWebViewDelegate
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebViewWebViewDelegate : NSObject
{
    UIWebView * uiWebView;
}

- (void)webView:(NSObject *)arg0 decidePolicyForNavigationAction:(NSObject *)arg1 request:(NSURLRequest *)arg2 frame:(struct CGRect)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (void)webView:(NSObject *)arg0 didFinishLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didFailLoadWithError:(NSError *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didChangeLocationWithinPageForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didCommitLoadForFrame:(NSObject *)arg1;
- (UIWebViewWebViewDelegate *)initWithUIWebView:(NSObject *)arg0;
- (void)_clearUIWebView;
- (void)webView:(NSObject *)arg0 decidePolicyForMIMEType:(NSObject *)arg1 request:(NSURLRequest *)arg2 frame:(struct CGRect)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (void)webView:(NSObject *)arg0 decidePolicyForGeolocationRequestFromOrigin:(id)arg1 frame:(struct CGRect)arg2 listener:(NSXPCListener *)arg3;
- (void)webView:(NSObject *)arg0 decidePolicyForNewWindowAction:(NSObject *)arg1 request:(NSURLRequest *)arg2 newFrameName:(NSString *)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (void)webView:(NSObject *)arg0 unableToImplementPolicyWithError:(NSError *)arg1 frame:(struct CGRect)arg2;
- (void)webView:(NSObject *)arg0 frame:(struct CGRect)arg1 exceededDatabaseQuotaForSecurityOrigin:(id)arg2 database:(SSAppPurchaseHistoryDatabase *)arg3;
- (void)webView:(NSObject *)arg0 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg1 totalSpaceNeeded:(unsigned int)arg2;
- (void)webView:(NSObject *)arg0 printFrameView:(NSObject *)arg1;
- (void)webViewSupportedOrientationsUpdated:(id)arg0;
- (void)webView:(NSObject *)arg0 didStartProvisionalLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didReceiveTitle:(NSString *)arg1 forFrame:(NSObject *)arg2;
- (NSObject *)webView:(NSObject *)arg0 connectionPropertiesForResource:(NSObject *)arg1 dataSource:(NSObject *)arg2;
- (NSObject *)webThreadWebView:(NSObject *)arg0 resource:(NSObject *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3 fromDataSource:(NSObject *)arg4;
- (void)webView:(NSObject *)arg0 didClearWindowObject:(NSObject *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didReceiveServerRedirectForProvisionalLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didFailProvisionalLoadWithError:(NSError *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didFirstLayoutInFrame:(NSObject *)arg1;
- (void)webViewClose:(id)arg0;
- (void)webView:(NSObject *)arg0 runJavaScriptAlertPanelWithMessage:(NSString *)arg1 initiatedByFrame:(NSObject *)arg2;
- (char)webView:(NSObject *)arg0 runJavaScriptConfirmPanelWithMessage:(NSString *)arg1 initiatedByFrame:(NSObject *)arg2;
- (NSObject *)webView:(NSObject *)arg0 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg1 defaultText:(NSString *)arg2 initiatedByFrame:(NSObject *)arg3;
- (NSObject *)webView:(NSObject *)arg0 identifierForInitialRequest:(NSURLRequest *)arg1 fromDataSource:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didFinishLoadingFromDataSource:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didFailLoadingWithError:(NSError *)arg2 fromDataSource:(NSObject *)arg3;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didReceiveAuthenticationChallenge:(NSObject *)arg2 fromDataSource:(NSObject *)arg3;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didCancelAuthenticationChallenge:(NSObject *)arg2 fromDataSource:(NSObject *)arg3;
- (char)webView:(NSObject *)arg0 resource:(NSObject *)arg1 canAuthenticateAgainstProtectionSpace:(NSObject *)arg2 forDataSource:(NSObject *)arg3;
- (NSObject *)webView:(NSObject *)arg0 createWebViewWithRequest:(NSURLRequest *)arg1;

@end
