/* Runtime dump - ABPropertySimpleEditingCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertySimpleEditingCell : ABPropertyEditingCell <UITextFieldDelegate>
{
    UITextField * _textField;
}

@property (readonly, nonatomic) UITextField * textField;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setContactStyle:(CNContactStyle *)arg0;
- (NSArray *)variableConstraints;
- (NSArray *)constantConstraints;
- (UIResponder *)firstResponderItem;
- (UIView<ABText> *)valueView;
- (void)textFieldChanged:(NSNotification *)arg0;
- (void)updateValueWithPropertyItem:(ABPropertyGroupItem *)arg0;
- (void)dealloc;
- (void)prepareForReuse;
- (UITextField *)textField;

@end
