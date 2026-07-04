/* Runtime dump - RUIHTMLHeaderView
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIHTMLHeaderView : UIView <RUIWebContainerViewDelegate, RemoteUITableHeader>
{
    RUIWebContainerView * _webContainerView;
    char _isFirstSection;
    <RUITableHeaderDelegate> * _delegate;
    NSURL * _baseURL;
}

@property (weak, nonatomic) <RUITableHeaderDelegate> * delegate;
@property (retain, nonatomic) NSURL * baseURL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<RUITableHeaderDelegate> *)arg0;
- (void)layoutSubviews;
- (<RUITableHeaderDelegate> *)delegate;
- (NSURL *)baseURL;
- (void).cxx_destruct;
- (void)setBaseURL:(NSURL *)arg0;
- (void)setSectionIsFirst:(char)arg0;
- (float)headerHeightForWidth:(float)arg0 inTableView:(NSObject *)arg1;
- (void)setText:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (void)webContainerView:(RUIWebContainerView *)arg0 didClickLinkWithURL:(NSString *)arg1;
- (RUIHTMLHeaderView *)initWithAttributes:(NSDictionary *)arg0;

@end
