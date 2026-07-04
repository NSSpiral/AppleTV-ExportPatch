/* Runtime dump - WebDefaultPolicyDelegate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDefaultPolicyDelegate : NSObject

+ (WebDefaultPolicyDelegate *)sharedPolicyDelegate;

- (void)webView:(NSObject *)arg0 decidePolicyForNavigationAction:(NSObject *)arg1 request:(NSURLRequest *)arg2 frame:(struct CGRect)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (void)webView:(NSObject *)arg0 decidePolicyForMIMEType:(NSObject *)arg1 request:(NSURLRequest *)arg2 frame:(struct CGRect)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (void)webView:(NSObject *)arg0 decidePolicyForNewWindowAction:(NSObject *)arg1 request:(NSURLRequest *)arg2 newFrameName:(NSString *)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (void)webView:(NSObject *)arg0 unableToImplementPolicyWithError:(NSError *)arg1 frame:(struct CGRect)arg2;
- (char)webView:(NSObject *)arg0 shouldGoToHistoryItem:(NSObject *)arg1;

@end
