/* Runtime dump - WebDefaultUIDelegate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDefaultUIDelegate : NSObject

+ (WebDefaultUIDelegate *)sharedUIDelegate;

- (void)webView:(NSObject *)arg0 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg1 totalSpaceNeeded:(unsigned int)arg2;
- (void)webView:(NSObject *)arg0 printFrameView:(NSObject *)arg1;
- (void)webViewSupportedOrientationsUpdated:(id)arg0;
- (void)webViewClose:(id)arg0;
- (void)webView:(NSObject *)arg0 runJavaScriptAlertPanelWithMessage:(NSString *)arg1 initiatedByFrame:(NSObject *)arg2;
- (char)webView:(NSObject *)arg0 runJavaScriptConfirmPanelWithMessage:(NSString *)arg1 initiatedByFrame:(NSObject *)arg2;
- (NSObject *)webView:(NSObject *)arg0 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg1 defaultText:(NSString *)arg2 initiatedByFrame:(NSObject *)arg3;
- (void)webViewFocus:(id)arg0;
- (void)webViewUnfocus:(id)arg0;
- (NSObject *)webView:(NSObject *)arg0 createWebViewWithRequest:(NSURLRequest *)arg1 windowFeatures:(WKWindowFeatures *)arg2;
- (void)webViewShow:(id)arg0;
- (void)webView:(NSObject *)arg0 setToolbarsVisible:(char)arg1;
- (char)webViewAreToolbarsVisible:(id)arg0;
- (void)webView:(NSObject *)arg0 setStatusBarVisible:(char)arg1;
- (char)webViewIsStatusBarVisible:(id)arg0;
- (void)webView:(NSObject *)arg0 setResizable:(char)arg1;
- (void)webView:(NSObject *)arg0 setStatusText:(NSString *)arg1;
- (void)webView:(NSObject *)arg0 runOpenPanelForFileButtonWithResultListener:(NSObject<WebOpenPanelResultListener> *)arg1;
- (NSObject *)webViewFirstResponder:(NSObject *)arg0;
- (void)webView:(NSObject *)arg0 makeFirstResponder:(NSObject *)arg1;
- (char)webView:(NSObject *)arg0 shouldReplaceUploadFile:(NSString *)arg1 usingGeneratedFilename:(id *)arg2;
- (NSObject *)webView:(NSObject *)arg0 generateReplacementFile:(NSString *)arg1;
- (NSObject *)webView:(NSObject *)arg0 createWebViewWithRequest:(NSURLRequest *)arg1 userGesture:(char)arg2;
- (NSString *)webViewStatusText:(NSString *)arg0;
- (void)webView:(NSObject *)arg0 mouseDidMoveOverElement:(NSObject *)arg1 modifierFlags:(unsigned int)arg2;
- (char)webViewIsResizable:(id)arg0;
- (void)webView:(NSObject *)arg0 setFrame:(struct CGRect)arg1;
- (struct CGRect)webViewFrame:(NSObject *)arg0;
- (void)webView:(NSObject *)arg0 didDrawRect:(struct CGRect)arg1;
- (void)webView:(NSObject *)arg0 didScrollDocumentInFrameView:(NSObject *)arg1;

@end
