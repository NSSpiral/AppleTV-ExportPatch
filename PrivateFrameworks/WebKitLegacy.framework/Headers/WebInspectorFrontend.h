/* Runtime dump - WebInspectorFrontend
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebInspectorFrontend : NSObject
{
    struct WebInspectorFrontendClient * m_frontendClient;
}

- (void)setDebuggingEnabled:(char)arg0;
- (void)detach;
- (void)attach;
- (void)showConsole;
- (char)isDebuggingEnabled;
- (char)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:(char)arg0;
- (char)isProfilingJavaScript;
- (WebInspectorFrontend *)initWithFrontendClient:(struct WebInspectorFrontendClient *)arg0;
- (void)startProfilingJavaScript;
- (void)stopProfilingJavaScript;

@end
