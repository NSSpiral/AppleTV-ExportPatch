/* Runtime dump - WebDefaultFrameLoadDelegate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDefaultFrameLoadDelegate : NSObject

+ (WebDefaultFrameLoadDelegate *)sharedFrameLoadDelegate;

- (void)webView:(NSObject *)arg0 didFinishLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didFirstVisuallyNonEmptyLayoutInFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didFailLoadWithError:(NSError *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didChangeLocationWithinPageForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didCommitLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didStartProvisionalLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didReceiveTitle:(NSString *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didClearWindowObject:(NSObject *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didReceiveServerRedirectForProvisionalLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didFailProvisionalLoadWithError:(NSError *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didFirstLayoutInFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 willCloseFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didHandleOnloadEventsForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 willPerformClientRedirectToURL:(NSURL *)arg1 delay:(double)arg2 fireDate:(NSDate *)arg3 forFrame:(NSObject *)arg4;
- (void)webView:(NSObject *)arg0 didCancelClientRedirectForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 windowScriptObjectAvailable:(id)arg1;
- (void)webView:(NSObject *)arg0 didCreateJavaScriptContext:(NSObject *)arg1 forFrame:(NSObject *)arg2;
- (void)webViewDidDisplayInsecureContent:(NSObject *)arg0;
- (void)webView:(NSObject *)arg0 didRunInsecureContent:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didDetectXSS:(id)arg1;
- (void)webView:(NSObject *)arg0 didClearWindowObjectForFrame:(NSObject *)arg1 inScriptWorld:(WebScriptWorld *)arg2;
- (void)webView:(NSObject *)arg0 didPushStateWithinPageForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didReplaceStateWithinPageForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didPopStateWithinPageForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didFinishDocumentLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didClearInspectorWindowObject:(NSObject *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didRemoveFrameFromHierarchy:(id)arg1;
- (void)webView:(NSObject *)arg0 didLayout:(unsigned int)arg1;

@end
