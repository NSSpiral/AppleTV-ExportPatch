/* Runtime dump - ABPropertyNameCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyNameCell : ABContactCell
{
    UITextField * _textField;
    UIResponder * _firstResponderItem;
    <ABPropertyCellDelegate> * _delegate;
}

@property (retain, nonatomic) ABPropertyGroupItem * propertyItem;
@property (readonly, nonatomic) UITextField * textField;
@property (readonly, nonatomic) UIResponder * firstResponderItem;
@property (nonatomic) <ABPropertyCellDelegate> * delegate;

- (void)setContactStyle:(CNContactStyle *)arg0;
- (void)setCardGroupItem:(ABCardGroupItem *)arg0;
- (NSArray *)constantConstraints;
- (UIResponder *)firstResponderItem;
- (ABPropertyGroupItem *)propertyItem;
- (void)textFieldChanged:(NSNotification *)arg0;
- (void)setPropertyItem:(ABPropertyGroupItem *)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (void)setDelegate:(<ABPropertyCellDelegate> *)arg0;
- (ABPropertyNameCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (<ABPropertyCellDelegate> *)delegate;
- (UITextField *)textField;

@end
