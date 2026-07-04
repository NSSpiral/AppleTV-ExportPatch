/* Runtime dump - ABCustomContentCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCustomContentCell : UITableViewCell
{
    UIView * _customContentView;
}

@property (retain, nonatomic) UIView * customContentView;

- (void)setCustomContentView:(UIView *)arg0;
- (UIView *)customContentView;
- (void)dealloc;
- (void)prepareForReuse;

@end
