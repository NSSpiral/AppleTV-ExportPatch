/* Runtime dump - UIWebSelectSinglePicker
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectSinglePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate>
{
    DOMHTMLSelectElement * _selectNode;
    NSArray * _optionItems;
    <UIWebSelectedItemPrivate> * _selectedOptionItem;
    int _selectedIndex;
    <UIWebSelectedItemPrivate> * _optionToSelectWhenDone;
    int _indexToSelectWhenDone;
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
- (NSObject *)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (UIWebSelectSinglePicker *)initWithDOMHTMLSelectElement:(NSObject *)arg0 allItems:(NSArray *)arg1;

@end
