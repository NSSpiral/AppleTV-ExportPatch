/* Runtime dump - RUIWebView
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIWebView : RUIElement <UIWebViewDelegate>
{
    UIWebView * _webView;
    NSString * _html;
    NSURL * _baseURL;
    id _delegate;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString * html;
@property (retain, nonatomic) NSURL * baseURL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSURL *)sourceURL;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (UIWebView *)webView;
- (void)webView:(UIWebView *)arg0 didFailLoadWithError:(NSError *)arg1;
- (char)webView:(UIWebView *)arg0 shouldStartLoadWithRequest:(NSURLRequest *)arg1 navigationType:(int)arg2;
- (void)webViewDidFinishLoad:(UIWebView *)arg0;
- (NSURL *)baseURL;
- (void).cxx_destruct;
- (void)setBaseURL:(NSURL *)arg0;
- (NSObject *)userStyleSheet;
- (NSString *)html;
- (void)setHtml:(NSString *)arg0;

@end
