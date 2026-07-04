/* Runtime dump - WKMultipleSelectPicker
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKMultipleSelectPicker : UIPickerView <WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate>
{
    WKContentView * _view;
    int _textAlignment;
    unsigned int _singleSelectionIndex;
    BOOL _allowsMultipleSelection;
    float _layoutWidth;
    float _fontSize;
    float _maximumTextWidth;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)pickerView:(UIView *)arg0 row:(int)arg1 column:(int)arg2 checked:(char)arg3;
- (int)numberOfComponentsInPickerView:(NSObject *)arg0;
- (int)pickerView:(UIView *)arg0 numberOfRowsInComponent:(int)arg1;
- (void)layoutSubviews;
- (NSObject *)pickerView:(UIView *)arg0 viewForRow:(int)arg1 forComponent:(int)arg2 reusingView:(NSObject *)arg3;
- (WKMultipleSelectPicker *)initWithView:(WKContentView *)arg0;
- (NSObject *)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (int)findItemIndexAt:(int)arg0;

@end
