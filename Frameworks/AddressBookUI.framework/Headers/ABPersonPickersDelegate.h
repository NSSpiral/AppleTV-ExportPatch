/* Runtime dump - ABPersonPickersDelegate
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonPickersDelegate : NSObject <ABPickerViewControllerDelegate, ABImagePickerControllerDelegate>
{
    ABStyleProvider * _styleProvider;
    ABPersonTableViewDataSource * _dataSource;
    ABPersonViewControllerHelper * _helper;
    ABImagePickerController * _imagePicker;
}

@property (retain, nonatomic) ABStyleProvider * styleProvider;
@property (nonatomic) ABPersonTableViewDataSource * dataSource;
@property (nonatomic) ABPersonViewControllerHelper * helper;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char popoverSizeUpdatesDisabled;
@property (readonly, nonatomic) ABImagePickerController * imagePicker;

- (ABStyleProvider *)styleProvider;
- (void)setStyleProvider:(ABStyleProvider *)arg0;
- (void)imagePicker:(ABImagePickerController *)arg0 pickedPhoto:(UIImage *)arg1;
- (void)imagePickerWillBeRemoved:(id)arg0;
- (void)setPopoverSizeUpdatesDisabled:(char)arg0;
- (id)imagePickerControllerViewControllerToPresentModal:(id)arg0;
- (UIImageView *)personImageView;
- (void)imagePicker:(ABImagePickerController *)arg0 presentActionSheet:(NSObject *)arg1;
- (void)removeImagePickerControllerFromUI;
- (void)finishTearingDownImagePickerController;
- (void)imagePickerWillBeShown:(id)arg0;
- (NSObject *)imagePickerControllerViewForApplyImageAnimation:(NSObject *)arg0;
- (void)imagePicker:(ABImagePickerController *)arg0 didDismissActionSheet:(NSObject *)arg1;
- (void)labelPickerViewController:(BRController *)arg0 didDeleteLabel:(NSString *)arg1;
- (char)pickerViewControllerShouldDismissKeyboard:(id)arg0;
- (ABPersonViewControllerHelper *)helper;
- (id)_contentViewForPicker:(id)arg0;
- (id)_propertyGroupForPicker:(id)arg0;
- (void)_dismissRingtonePicker:(id)arg0 afterSelectingItem:(NSObject *)arg1;
- (void)_dismissCountryPicker:(id)arg0 afterSelectingItem:(NSObject *)arg1;
- (void)_dismissProfilesPicker:(id)arg0 afterSelectingItem:(NSObject *)arg1;
- (void)_dismissPropertyPicker:(id)arg0 afterSelectingItem:(NSObject *)arg1;
- (void)setHelper:(ABPersonViewControllerHelper *)arg0;
- (char)pickerViewController:(BRController *)arg0 shouldDismissAfterSelectingItem:(NSObject *)arg1;
- (id)selectedPeople;
- (void)showImageMenuForHelper:(NSObject *)arg0;
- (char)popoverSizeUpdatesDisabled;
- (ABImagePickerController *)imagePicker;
- (char)labelPickerViewController:(BRController *)arg0 shouldDismissAfterSelectingLabel:(NSString *)arg1;
- (void)dealloc;
- (void)setDataSource:(ABPersonTableViewDataSource *)arg0;
- (ABPersonTableViewDataSource *)dataSource;

@end
