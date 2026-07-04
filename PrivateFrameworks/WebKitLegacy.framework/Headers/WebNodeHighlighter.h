/* Runtime dump - WebNodeHighlighter
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNodeHighlighter : NSObject
{
    WebView * _inspectedWebView;
    WebNodeHighlight * _currentHighlight;
}

- (void)dealloc;
- (void)highlight;
- (WebNodeHighlighter *)initWithInspectedWebView:(WebView *)arg0;
- (void)hideHighlight;
- (void)didAttachWebNodeHighlight:(id)arg0;
- (void)willDetachWebNodeHighlight:(id)arg0;

@end
