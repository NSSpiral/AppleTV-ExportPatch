/* Runtime dump - ABTonePickerViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABTonePickerViewController : ABPickerViewController
{
    TKTonePickerViewController * _tonePickerViewController;
}

@property (readonly, retain, nonatomic) TKTonePickerViewController * tonePickerViewController;

- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (float)ab_heightToFitForViewInPopoverView;
- (ABTonePickerViewController *)initWithAlertType:(int)arg0;
- (TKTonePickerViewController *)tonePickerViewController;
- (void)cancelButtonClicked:(id)arg0;
- (void)ringtoneSaveButtonClicked:(id)arg0;
- (ABTonePickerViewController *)init;
- (void)loadView;
- (void)_getRotationContentSettings:(struct ? *)arg0;

@end
