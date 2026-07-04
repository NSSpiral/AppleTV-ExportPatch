/* Runtime dump - PSWebContainerView
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSWebContainerView : UIView
{
    UIWebView * _webView;
    NSData * _content;
}

@property (readonly, nonatomic) UIWebView * webView;
@property (retain, nonatomic) NSData * content;

- (void)dealloc;
- (PSWebContainerView *)init;
- (void)layoutSubviews;
- (UIWebView *)webView;
- (void)setUserStyleSheet:(NSObject *)arg0;
- (NSData *)content;
- (void)setContent:(NSData *)arg0;
- (float)heightForWidth:(float)arg0;

@end
