/* Runtime dump - RemoteUIWebViewController
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView * _webView;
    UIToolbar * _toolbar;
    id _loadCompletion;
    _UIBackdropView * _statusBarBackdrop;
    char _scalesPageToFit;
    <RemoteUIWebViewControllerDelegate> * _delegate;
}

@property (weak, nonatomic) <RemoteUIWebViewControllerDelegate> * delegate;
@property (readonly, nonatomic) UIToolbar * toolbar;
@property (readonly, nonatomic) UIWebView * webView;
@property (nonatomic) char scalesPageToFit;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<RemoteUIWebViewControllerDelegate> *)arg0;
- (<RemoteUIWebViewControllerDelegate> *)delegate;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (UIToolbar *)toolbar;
- (UIWebView *)webView;
- (char)scalesPageToFit;
- (void)setScalesPageToFit:(char)arg0;
- (void)webView:(UIWebView *)arg0 didFailLoadWithError:(NSError *)arg1;
- (void)webViewDidFinishLoad:(UIWebView *)arg0;
- (void).cxx_destruct;
- (void)loadURL:(NSURL *)arg0 completion:(id /* block */)arg1;
- (void)donePressed:(id)arg0;
- (void)loadURL:(NSURL *)arg0;

@end
