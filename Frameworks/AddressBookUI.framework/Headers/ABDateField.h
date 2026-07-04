/* Runtime dump - ABDateField
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABDateField : ABUILabelWithPlaceholder
{
    UIButton * _clearButton;
    char _isClearButtonEnabled;
    NSDate * _date;
    UIDatePicker * _datePicker;
    struct CGSize _datePickerSize;
    char _usesDatePickerAsInputView;
    char _isFirstResponder;
    char _inBecomeFirstResponder;
    char _editable;
    <ABDateFieldDelegate> * _delegate;
    <ABDatePickerPresentationDelegate> * _presentationDelegate;
}

@property (retain, nonatomic) NSDate * date;
@property (nonatomic) char editable;
@property (nonatomic) struct CGSize datePickerSize;
@property (nonatomic) <ABDateFieldDelegate> * delegate;
@property (nonatomic) <ABDatePickerPresentationDelegate> * presentationDelegate;

- (void)_updateLabelText;
- (void)_dettachFromDatePicker:(id)arg0;
- (float)_extraWidthForClearButton;
- (struct CGRect)_clearButtonRectForBounds:(id)arg0;
- (struct CGRect)_contentRectForBounds:(id)arg0 isClearButtonPresent:(SEL)arg1;
- (void)_clearButtonPressed:(id)arg0;
- (char)_shouldEnableClearButton;
- (void)_setClearButtonEnabled:(char)arg0;
- (void)_setDate:(NSDate *)arg0 andInformDelegate:(char)arg1;
- (void)_updateClearButton;
- (void)datePickerDateDidChange:(NSDictionary *)arg0;
- (void)_attachToDatePicker:(id)arg0;
- (struct CGSize)datePickerSize;
- (void)setDatePickerSize:(struct CGSize)arg0;
- (<ABDatePickerPresentationDelegate> *)presentationDelegate;
- (void)setPresentationDelegate:(<ABDatePickerPresentationDelegate> *)arg0;
- (ABDateField *)initWithFrame:(struct CGRect)arg0;
- (void)setUserInteractionEnabled:(char)arg0;
- (void)dealloc;
- (void)setDelegate:(<ABDateFieldDelegate> *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (<ABDateFieldDelegate> *)delegate;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (NSDate *)date;
- (char)isEditable;
- (char)canBecomeFirstResponder;
- (void)endEditing;
- (char)canResignFirstResponder;
- (UIView *)inputView;
- (struct CGRect)_contentRectForBounds:(id)arg0;
- (void)setEditable:(char)arg0;
- (void)setDate:(NSDate *)arg0;
- (UIBarButtonItem *)_clearButton;
- (struct CGSize)_clearButtonSize;

@end
