/* Runtime dump - ABPickerItemCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPickerItemCell : UITableViewCell
{
    UITextField * _textField;
    CNContactStyle * _contactStyle;
}

@property (retain, nonatomic) UITextField * textField;
@property (retain, nonatomic) CNContactStyle * contactStyle;

- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (void)dealloc;
- (void)layoutSubviews;
- (ABPickerItemCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)beginEditing;
- (void)endEditing;
- (UITextField *)textField;
- (void)setTextField:(UITextField *)arg0;

@end
