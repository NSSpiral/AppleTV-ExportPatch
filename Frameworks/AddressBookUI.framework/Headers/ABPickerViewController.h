/* Runtime dump - ABPickerViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPickerViewController : UITableViewController
{
    void * _context;
    id _defaultValue;
    SEL _selectionAction;
    <ABPickerViewControllerDelegate> * _delegate;
    <ABPickerViewControllerDismissDelegate> * _dismissDelegate;
    <ABStyleProvider> * _styleProvider;
}

@property (nonatomic) void * context;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic) SEL selectionAction;
@property (nonatomic) <ABPickerViewControllerDelegate> * delegate;
@property (nonatomic) <ABPickerViewControllerDismissDelegate> * dismissDelegate;
@property (readonly, nonatomic) UIBarButtonItem * cancelBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem * doneBarButtonItem;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (UIBarButtonItem *)cancelBarButtonItem;
- (void)attemptDismissAfterSelectingItem:(NSObject *)arg0;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setSelectionAction:(SEL)arg0;
- (void)cancelButtonClicked:(id)arg0;
- (SEL)selectionAction;
- (UIBarButtonItem *)doneBarButtonItem;
- (void)dealloc;
- (void)setDelegate:(<ABPickerViewControllerDelegate> *)arg0;
- (<ABPickerViewControllerDelegate> *)delegate;
- (void *)context;
- (void)setContext:(void *)arg0;
- (void)viewDidLoad;
- (char)_isSupportedInterfaceOrientation:(int)arg0;
- (char)_allowsAutorotation;
- (<ABPickerViewControllerDismissDelegate> *)dismissDelegate;
- (void)setDismissDelegate:(<ABPickerViewControllerDismissDelegate> *)arg0;
- (NSString *)defaultValue;
- (void)setDefaultValue:(NSString *)arg0;

@end
