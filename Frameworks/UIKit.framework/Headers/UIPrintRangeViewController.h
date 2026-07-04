/* Runtime dump - UIPrintRangeViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintRangeViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIPrintPanelViewController * _printPanelViewController;
    int _pageCount;
    struct _NSRange _pageRange;
    UIPickerView * _fromPicker;
    UIPickerView * _toPicker;
    UITableView * _tableView;
    float _pickerWidth;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (int)numberOfComponentsInPickerView:(NSObject *)arg0;
- (int)pickerView:(UIView *)arg0 numberOfRowsInComponent:(int)arg1;
- (NSObject *)pickerView:(UIView *)arg0 titleForRow:(int)arg1 forComponent:(int)arg2;
- (float)pickerView:(UIView *)arg0 widthForComponent:(int)arg1;
- (void)pickerView:(UIView *)arg0 didSelectRow:(int)arg1 inComponent:(int)arg2;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (unsigned int)supportedInterfaceOrientations;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(char)arg0;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (UIPrintRangeViewController *)initWithPrintPanelViewController:(UIPrintPanelViewController *)arg0;

@end
