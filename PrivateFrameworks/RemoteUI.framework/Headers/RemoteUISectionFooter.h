/* Runtime dump - RemoteUISectionFooter
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter>
{
    UIButton * _linkButton;
    UILabel * _textLabel;
    int _textAlignment;
    char _usesCustomTextAlignment;
    <RUITableFooterDelegate> * _delegate;
    NSURL * _linkURL;
}

@property (weak, nonatomic) <RUITableFooterDelegate> * delegate;
@property (retain, nonatomic) NSURL * linkURL;
@property (readonly, nonatomic) UIButton * linkButton;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<RUITableFooterDelegate> *)arg0;
- (void)layoutSubviews;
- (<RUITableFooterDelegate> *)delegate;
- (void)setTextAlignment:(int)arg0;
- (void)setTextColor:(UIColor *)arg0;
- (void).cxx_destruct;
- (void)setText:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (UIButton *)linkButton;
- (void)setLinkURL:(NSURL *)arg0;
- (float)footerHeightForWidth:(float)arg0 inTableView:(NSObject *)arg1;
- (void)_linkPressed;
- (NSURL *)linkURL;
- (RemoteUISectionFooter *)initWithAttributes:(NSDictionary *)arg0;

@end
