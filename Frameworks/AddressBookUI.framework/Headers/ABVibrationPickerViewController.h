/* Runtime dump - ABVibrationPickerViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABVibrationPickerViewController : ABPickerViewController
{
    TKVibrationPickerViewController * _vibrationPickerViewController;
    char _canEnterEditingMode;
    UIBarButtonItem * _saveButton;
}

@property (readonly, retain, nonatomic) TKVibrationPickerViewController * vibrationPickerViewController;
@property (retain, nonatomic) UIBarButtonItem * _saveButton;

- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (float)ab_heightToFitForViewInPopoverView;
- (ABVibrationPickerViewController *)initWithAlertType:(int)arg0;
- (TKVibrationPickerViewController *)vibrationPickerViewController;
- (void)_vibrationSaveButtonClicked:(id)arg0;
- (void)_setSaveButton:(id)arg0;
- (UIBarButtonItem *)_saveButton;
- (void)dealloc;
- (void)setEditing:(char)arg0 animated:(char)arg1;
- (void)loadView;
- (void)_getRotationContentSettings:(struct ? *)arg0;

@end
