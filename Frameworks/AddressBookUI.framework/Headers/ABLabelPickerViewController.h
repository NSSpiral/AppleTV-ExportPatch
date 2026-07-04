/* Runtime dump - ABLabelPickerViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABLabelPickerViewController : ABPickerViewController
{
    NSArray * _additionalLabels;
    NSString * _selectedLabel;
    void * _addressBook;
    ABPropertyGroup * _propertyGroup;
    int _itemIndex;
    ABItemLabelPicker * _labelPicker;
    char _didCreateNewLabel;
}

@property (retain, nonatomic) NSString * selectedLabel;
@property (nonatomic) char didCreateNewLabel;

- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (float)ab_heightToFitForViewInPopoverView;
- (NSString *)selectedLabel;
- (void)setSelectedLabel:(NSString *)arg0;
- (void)itemLabelPicker:(ABItemLabelPicker *)arg0 endedWithSelectionConfirmed:(char)arg1 animate:(char)arg2;
- (void)setDidCreateNewLabel:(char)arg0;
- (char)itemLabelPickerShouldDismissKeyboard:(id)arg0;
- (void)itemLabelPickerDidChangeSelection:(id)arg0;
- (void)itemLabelPicker:(ABItemLabelPicker *)arg0 deletedCustomLabel:(NSString *)arg1;
- (void)itemLabelPickerDeletedLastCustomLabel:(NSString *)arg0;
- (char)didCreateNewLabel;
- (struct CGSize)fullScreenContentSize;
- (ABItemLabelPicker *)labelPicker;
- (ABLabelPickerViewController *)initWithAddressBook:(void *)arg0 propertyGroup:(ABPropertyGroup *)arg1 itemIndex:(int)arg2 additionalLabels:(NSArray *)arg3;
- (void)dealloc;
- (void)setDelegate:(<ABPickerViewControllerDelegate> *)arg0;
- (void)setEditing:(char)arg0 animated:(char)arg1;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (char)_allowsAutorotation;
- (void)_getRotationContentSettings:(struct ? *)arg0;

@end
