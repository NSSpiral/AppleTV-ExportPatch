/* Runtime dump - KeychainSyncHeaderView
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncHeaderView : UIView <PSHeaderFooterView>
{
    UILabel * _titleLabel;
    UILabel * _detailLabel;
    char _usesCompactLayout;
}

@property (nonatomic) char usesCompactLayout;

- (KeychainSyncHeaderView *)initWithSpecifier:(PSPhoneNumberSpecifier *)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setTitleText:(NSString *)arg0;
- (float)preferredHeightForWidth:(float)arg0 inTableView:(NSObject *)arg1;
- (void)setUsesCompactLayout:(char)arg0;
- (void)setDetailText:(NSString *)arg0;
- (char)usesCompactLayout;

@end
