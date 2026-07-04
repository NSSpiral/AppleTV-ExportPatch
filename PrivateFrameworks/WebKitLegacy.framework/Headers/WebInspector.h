/* Runtime dump - WebInspector
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebInspector : NSObject
{
    WebView * _webView;
    WebInspectorFrontend * _frontend;
}

- (void)show:(id)arg0;
- (void)dealloc;
- (void)detach:(id)arg0;
- (void)close:(id *)arg0;
- (void)showWindow;
- (char)isDebuggingJavaScript;
- (char)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:(char)arg0;
- (WebInspector *)initWithWebView:(WebView *)arg0;
- (void)webViewClosed;
- (void)showConsole:(id)arg0;
- (void)toggleDebuggingJavaScript:(id)arg0;
- (void)startDebuggingJavaScript:(id)arg0;
- (void)stopDebuggingJavaScript:(id)arg0;
- (char)isProfilingJavaScript;
- (void)toggleProfilingJavaScript:(id)arg0;
- (void)startProfilingJavaScript:(id)arg0;
- (void)stopProfilingJavaScript:(id)arg0;
- (char)isJavaScriptProfilingEnabled;
- (void)setJavaScriptProfilingEnabled:(char)arg0;
- (void)attach:(NSArray *)arg0;
- (void)evaluateInFrontend:(id)arg0 script:(NSString *)arg1;
- (void)setFrontend:(WebInspectorFrontend *)arg0;
- (void)releaseFrontend;

@end
