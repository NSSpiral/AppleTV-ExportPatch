/* Runtime dump - ABBannerView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABBannerView : UITableViewCell
{
    NSString * _title;
    NSString * _value;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * value;

+ (float)defaultHeight;

- (void)cellWasLongPressed:(id)arg0;
- (void)cellWasDoubleTapped:(id)arg0;
- (void)menuDidHide:(id)arg0;
- (void)showMenu;
- (void)setTitle:(NSString *)arg0 value:(NSString *)arg1;
- (void)dealloc;
- (ABBannerView *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setTitle:(NSString *)arg0;
- (char)canPerformAction:(SEL)arg0 withSender:(NSObject *)arg1;
- (NSString *)title;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (char)canBecomeFirstResponder;
- (void)_updateLabel;
- (void)copy:(id)arg0;

@end
