/* Runtime dump - RemoteUISectionHeader
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUISectionHeader : UIView <RemoteUITableHeader>
{
    UILabel * _headerLabel;
    UILabel * _detailHeaderLabel;
    UILabel * _subHeaderLabel;
    UIImageView * _iconView;
    int _imageAlignment;
    char _isFirstSection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setIconImage:(UIImage *)arg0;
- (void)setImageSize:(struct CGSize)arg0;
- (UILabel *)subHeaderLabel;
- (struct CGRect)_iconFrame;
- (void)setSectionIsFirst:(char)arg0;
- (float)headerHeightForWidth:(float)arg0 inTableView:(NSObject *)arg1;
- (void)setText:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (void)setDetailText:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (void)setSubHeaderText:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (void)setImageAlignment:(int)arg0;
- (UILabel *)headerLabel;
- (void)setHeaderAlignment:(int)arg0;
- (void)setHeaderColor:(UIColor *)arg0;
- (void)setSubHeaderAlignment:(int)arg0;
- (void)setSubHeaderColor:(UIColor *)arg0;
- (UILabel *)detailHeaderLabel;
- (RemoteUISectionHeader *)initWithAttributes:(NSDictionary *)arg0;

@end
