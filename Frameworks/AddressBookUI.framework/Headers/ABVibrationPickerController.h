/* Runtime dump - ABVibrationPickerController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABVibrationPickerController : UINavigationController
{
    CNContactStyle * _contactStyle;
    TKVibrationPickerViewController * _vibrationPicker;
}

@property (nonatomic) <ABPickerControllerDelegate> * delegate;
@property (retain, nonatomic) CNContactStyle * contactStyle;
@property (readonly, nonatomic) TKVibrationPickerViewController * vibrationPicker;

- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (ABVibrationPickerController *)initWithAlertType:(int)arg0 selectedVibrationIdentifier:(NSString *)arg1;
- (void)doneButton:(UIKeyboardDictationStarkDoneButton *)arg0;
- (void)cancelButton:(id)arg0;
- (TKVibrationPickerViewController *)vibrationPicker;
- (void)dealloc;

@end
