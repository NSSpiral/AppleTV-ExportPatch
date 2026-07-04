/* Runtime dump - ABPersonTableViewMultiCellDelegate
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableViewMultiCellDelegate : NSObject <ABMultiCellContentViewUpdateDelegate, ABPersonTableHeaderViewDelegate, ABDatePickerViewControllerDismissDelegate>
{
    UIDatePicker * _datePicker;
    ABPersonTableViewDataSource * _dataSource;
    ABStyleProvider * _styleProvider;
    ABPersonPickersDelegate * _pickersDelegate;
}

@property (retain, nonatomic) ABStyleProvider * styleProvider;
@property (nonatomic) ABPersonTableViewDataSource * dataSource;
@property (nonatomic) ABPersonPickersDelegate * pickersDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ABStyleProvider *)styleProvider;
- (void)setStyleProvider:(ABStyleProvider *)arg0;
- (id)datePickerForDateField:(id)arg0;
- (char)dateField:(ABDateField *)arg0 shouldPresentDatePicker:(id)arg1;
- (void)dateField:(ABDateField *)arg0 delegatePresentDatePicker:(id)arg1;
- (void)dateField:(ABDateField *)arg0 delegatePrepareToPresentDatePicker:(id)arg1;
- (void)dateField:(ABDateField *)arg0 delegateDismissDatePicker:(id)arg1;
- (void)datePickerViewControllerWillDisappear:(id)arg0;
- (char)ABTabToNextResponder:(char)arg0 fromView:(UIView *)arg1;
- (char)multiCellContentView:(ABMultiCellContentView *)arg0 entryFieldShouldBeginEditing:(id)arg1;
- (void)multiCellContentView:(ABMultiCellContentView *)arg0 entryFieldDidBeginEditing:(id)arg1;
- (void)multiCellContentView:(ABMultiCellContentView *)arg0 entryField:(SBUIPasscodeEntryField *)arg1 didUpdateValue:(id)arg2 forKey:(NSString *)arg3;
- (void)multiCellContentView:(ABMultiCellContentView *)arg0 entryFieldDidEndEditing:(id)arg1 forKey:(NSString *)arg2;
- (void)multiCellContentViewDidEndEditing:(id)arg0;
- (void)multiCellContentView:(ABMultiCellContentView *)arg0 touchesBeganForView:(NSObject *)arg1;
- (void)multiCellContentView:(ABMultiCellContentView *)arg0 touchesEndedForView:(NSObject *)arg1;
- (void)multiCellContentView:(ABMultiCellContentView *)arg0 touchesCancelledForView:(NSObject *)arg1;
- (char)tabToNextResponder:(char)arg0 fromView:(UIView *)arg1;
- (void)multiCellContentView:(ABMultiCellContentView *)arg0 willResizeAnimated:(char)arg1;
- (void)multiCellContentView:(ABMultiCellContentView *)arg0 didResizeAnimated:(char)arg1;
- (void)multiCellContentViewWillShowDeleteConfirmation:(id)arg0;
- (void)multiCellContentViewWillHideDeleteConfirmation:(id)arg0;
- (ABPersonPickersDelegate *)pickersDelegate;
- (void)personTableHeaderView:(NSObject *)arg0 imageViewWasSelected:(id)arg1;
- (void)setPickersDelegate:(ABPersonPickersDelegate *)arg0;
- (void)_multiCellContentView:(NSObject *)arg0 selectedAlert:(id)arg1;
- (void)_multiCellContentView:(NSObject *)arg0 selectedService:(NSString *)arg1;
- (void)_multiCellContentView:(NSObject *)arg0 selectedLabel:(NSString *)arg1;
- (void)_multiCellContentView:(NSObject *)arg0 selectedCountry:(id)arg1;
- (NSObject *)_capitalizedTitleForContentView:(NSObject *)arg0;
- (char)_tableView:(NSObject *)arg0 isValidIndexPath:(NSIndexPath *)arg1;
- (void)dealloc;
- (void)setDataSource:(ABPersonTableViewDataSource *)arg0;
- (ABPersonTableViewDataSource *)dataSource;

@end
