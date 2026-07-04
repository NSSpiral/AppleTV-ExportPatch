/* Runtime dump - WKSelectSinglePicker
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSelectSinglePicker : UIPickerView <WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate>
{
    WKContentView * _view;
    int _selectedIndex;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (int)numberOfComponentsInPickerView:(NSObject *)arg0;
- (int)pickerView:(UIView *)arg0 numberOfRowsInComponent:(int)arg1;
- (NSObject *)pickerView:(UIView *)arg0 attributedTitleForRow:(int)arg1 forComponent:(int)arg2;
- (void)pickerView:(UIView *)arg0 didSelectRow:(int)arg1 inComponent:(int)arg2;
- (WKSelectSinglePicker *)initWithView:(WKContentView *)arg0;
- (NSObject *)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;

@end
