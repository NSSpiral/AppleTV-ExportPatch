/* Runtime dump - WKDateTimePicker
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDateTimePicker : NSObject <WKFormControl>
{
    struct RetainPtr<UIDatePicker> _datePicker;
    NSString * _formatString;
    char _shouldRemoveTimeZoneInformation;
    char _isTimeInput;
    WKContentView * _view;
}

- (struct RetainPtr<UIDatePicker>)datePicker;
- (void)dealloc;
- (void).cxx_construct;
- (NSObject *)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void).cxx_destruct;
- (int)_timeZoneOffsetFromGMT:(id)arg0;
- (void)_dateChangedSetAsString;
- (void)_dateChangedSetAsNumber;
- (void)_dateChanged;
- (void)_dateChangeHandler:(id /* block */)arg0;
- (NSObject *)_sanitizeInputValueForFormatter:(NSObject *)arg0;
- (struct RetainPtr<NSDateFormatter>)dateFormatterForPicker;
- (WKDateTimePicker *)initWithView:(WKContentView *)arg0 datePickerMode:(int)arg1;

@end
