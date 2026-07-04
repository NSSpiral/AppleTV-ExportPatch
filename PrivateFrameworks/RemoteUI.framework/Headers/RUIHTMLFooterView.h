/* Runtime dump - RUIHTMLFooterView
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter>
{
    RUIWebContainerView * _webContainerView;
    <RUITableFooterDelegate> * _delegate;
    NSURL * _baseURL;
}

@property (weak, nonatomic) <RUITableFooterDelegate> * delegate;
@property (retain, nonatomic) NSURL * baseURL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<RUITableFooterDelegate> *)arg0;
- (<RUITableFooterDelegate> *)delegate;
- (NSURL *)baseURL;
- (void).cxx_destruct;
- (void)setBaseURL:(NSURL *)arg0;
- (void)setText:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (void)webContainerView:(RUIWebContainerView *)arg0 didClickLinkWithURL:(NSString *)arg1;
- (float)footerHeightForWidth:(float)arg0 inTableView:(NSObject *)arg1;
- (RUIHTMLFooterView *)initWithAttributes:(NSDictionary *)arg0;

@end
