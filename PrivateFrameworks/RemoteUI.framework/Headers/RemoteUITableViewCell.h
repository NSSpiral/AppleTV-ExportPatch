/* Runtime dump - RemoteUITableViewCell
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUITableViewCell : UITableViewCell
{
    UIImageView * _invalidRowView;
    char _leftAlignDetailLabel;
    int _remoteUIAccessoryType;
    UIView * _remoteUIAccessoryView;
    UIButton * _detailLinkButton;
    id _detailLinkHandler;
    UIColor * _accessoryColor;
    char _forceFullSizeDetailLabel;
}

@property (nonatomic) char forceFullSizeDetailLabel;
@property (nonatomic) char leftAlignDetailLabel;
@property (nonatomic) int remoteUIAccessoryType;
@property (retain, nonatomic) UIView * remoteUIAccessoryView;

- (void)layoutSubviews;
- (void)prepareForReuse;
- (UIImage *)_checkmarkImage:(char)arg0;
- (UIImage *)_disclosureChevronImage:(char)arg0;
- (void).cxx_destruct;
- (void)setDetailLinkText:(NSString *)arg0 handler:(id /* block */)arg1;
- (void)setRemoteUIAccessoryView:(UIView *)arg0;
- (void)_setRemoteUIAccessoryType:(int)arg0 withColor:(UIColor *)arg1;
- (void)_accessoriesChanged;
- (void)_detailLinkPressed;
- (void)setRemoteUIAccessoryType:(int)arg0;
- (void)setRowInvalid:(char)arg0;
- (char)forceFullSizeDetailLabel;
- (void)setForceFullSizeDetailLabel:(char)arg0;
- (char)leftAlignDetailLabel;
- (void)setLeftAlignDetailLabel:(char)arg0;
- (int)remoteUIAccessoryType;
- (UIView *)remoteUIAccessoryView;

@end
