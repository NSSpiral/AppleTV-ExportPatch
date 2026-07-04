/* Runtime dump - ABDatePickerViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABDatePickerViewController : UIViewController
{
    void * _context;
    UIDatePicker * _datePicker;
    <ABDatePickerViewControllerDismissDelegate> * _dismissDelegate;
}

@property (nonatomic) void * context;
@property (retain, nonatomic) UIDatePicker * datePicker;
@property (nonatomic) <ABDatePickerViewControllerDismissDelegate> * dismissDelegate;

+ (struct CGSize)datePickerSize;

- (float)ab_heightToFitForViewInPopoverView;
- (UIDatePicker *)datePicker;
- (void)setDatePicker:(UIDatePicker *)arg0;
- (void)dealloc;
- (void *)context;
- (void)setContext:(void *)arg0;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(char)arg0;
- (<ABDatePickerViewControllerDismissDelegate> *)dismissDelegate;
- (void)setDismissDelegate:(<ABDatePickerViewControllerDismissDelegate> *)arg0;

@end
