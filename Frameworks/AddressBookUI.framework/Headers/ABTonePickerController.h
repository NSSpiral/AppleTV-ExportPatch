/* Runtime dump - ABTonePickerController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABTonePickerController : UINavigationController
{
    CNContactStyle * _contactStyle;
    TKTonePickerViewController * _tonePicker;
}

@property (nonatomic) <ABPickerControllerDelegate> * delegate;
@property (retain, nonatomic) CNContactStyle * contactStyle;
@property (retain, nonatomic) TKTonePickerViewController * tonePicker;

- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (ABTonePickerController *)initWithAlertType:(int)arg0 selectedToneIdentifier:(NSString *)arg1 selectedVibrationIdentifier:(NSString *)arg2;
- (void)doneButton:(UIKeyboardDictationStarkDoneButton *)arg0;
- (void)cancelButton:(id)arg0;
- (TKTonePickerViewController *)tonePicker;
- (void)setTonePicker:(TKTonePickerViewController *)arg0;
- (void)dealloc;

@end
