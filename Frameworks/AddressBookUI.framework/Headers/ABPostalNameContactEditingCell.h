/* Runtime dump - ABPostalNameContactEditingCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPostalNameContactEditingCell : ABContactCell <UITextFieldDelegate>
{
    UITextField * _editingTextField;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setCardGroupItem:(ABCardGroupItem *)arg0;
- (UIResponder *)firstResponderItem;
- (void)dealloc;
- (void)layoutSubviews;
- (ABPostalNameContactEditingCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)prepareForReuse;
- (char)textField:(UITextField *)arg0 shouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(NSString *)arg2;

@end
