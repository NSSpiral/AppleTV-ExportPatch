/* Runtime dump - WebHighlightLayer
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHighlightLayer : CALayer
{
    WebNodeHighlightView * _view;
    WebView * _webView;
}

- (NSString *)actionForKey:(NSString *)arg0;
- (void)layoutSublayers;
- (WebHighlightLayer *)initWithHighlightView:(NSObject *)arg0 webView:(WebView *)arg1;

@end
