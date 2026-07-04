/* Runtime dump - ABPropertyDateEditingCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyDateEditingCell : ABPropertySimpleEditingCell <UITextFieldDelegate, ABPickerControllerDelegate>
{
    UIDatePicker * _datePicker;
    UIViewController * _contentViewController;
}

@property (retain, nonatomic) UIDatePicker * datePicker;
@property (retain, nonatomic) UIViewController * contentViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (UIDatePicker *)datePicker;
- (void)setDatePicker:(UIDatePicker *)arg0;
- (void)pickerDidCancel:(id)arg0;
- (void)picker:(SAUIDomainObjectPicker *)arg0 didPickItem:(NSObject *)arg1;
- (void)labelButtonClicked:(id)arg0;
- (void)localeUpdated:(id)arg0;
- (void)dateChanged:(char)arg0;
- (char)_shouldUseYearlessPickerForDateComponents:(NSArray *)arg0;
- (void)dealloc;
- (ABPropertyDateEditingCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)prepareForReuse;
- (UIViewController *)contentViewController;
- (char)textFieldShouldBeginEditing:(UITextField *)arg0;
- (char)textField:(UITextField *)arg0 shouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(NSString *)arg2;
- (void)setContentViewController:(UIViewController *)arg0;

@end
