/* Runtime dump - WebIndicateLayer
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebIndicateLayer : CALayer
{
    WebView * _webView;
}

- (NSString *)actionForKey:(NSString *)arg0;
- (void)layoutSublayers;
- (WebIndicateLayer *)initWithWebView:(WebView *)arg0;

@end
