/* Runtime dump - RUIWebContainerView
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIWebContainerView : UIView <UIWebViewDelegate>
{
    char _highlighted;
    char _reallyHighlighted;
    UIWebView * _webView;
    <RUIWebContainerViewDelegate> * _delegate;
}

@property (readonly, nonatomic) UIWebView * webView;
@property (nonatomic) char highlighted;
@property (weak, nonatomic) <RUIWebContainerViewDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<RUIWebContainerViewDelegate> *)arg0;
- (void)layoutSubviews;
- (<RUIWebContainerViewDelegate> *)delegate;
- (void)setHighlighted:(char)arg0;
- (char)isHighlighted;
- (UIWebView *)webView;
- (void)setUserStyleSheet:(NSObject *)arg0;
- (char)webView:(UIWebView *)arg0 shouldStartLoadWithRequest:(NSURLRequest *)arg1 navigationType:(int)arg2;
- (void)webViewDidFinishLoad:(UIWebView *)arg0;
- (void).cxx_destruct;
- (float)heightForWidth:(float)arg0;
- (void)_setHighlightedNow;
- (RUIWebContainerView *)initWithContent:(NSObject *)arg0 baseURL:(NSURL *)arg1;

@end
