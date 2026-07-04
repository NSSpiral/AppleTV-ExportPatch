/* Runtime dump - UIWebDefaultDateTimePicker
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl>
{
    DOMHTMLInputElement * _inputElement;
    UIDatePicker * _datePicker;
    NSString * _formatString;
    char _shouldRemoveTimeZoneInformation;
    char _isTimeInput;
}

@property (retain, nonatomic) DOMHTMLInputElement * _inputElement;
@property (retain, nonatomic) UIDatePicker * _datePicker;

- (void)dealloc;
- (NSObject *)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (int)_timeZoneOffsetFromGMT:(id)arg0;
- (void)_dateChangedSetAsString;
- (void)_dateChangedSetAsNumber;
- (void)_dateChanged;
- (void)set_inputElement:(DOMHTMLInputElement *)arg0;
- (void)set_datePicker:(UIDatePicker *)arg0;
- (void)_dateChangeHandler:(id /* block */)arg0;
- (NSObject *)_sanitizeInputValueForFormatter:(NSObject *)arg0;
- (UIWebDefaultDateTimePicker *)initWithDOMHTMLInputElement:(NSObject *)arg0 datePickerMode:(int)arg1;
- (DOMHTMLInputElement *)_inputElement;
- (UIDatePicker *)_datePicker;

@end
