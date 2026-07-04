/* Runtime dump - PLTableViewEditableCell
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate>
{
    PLTextView * _textView;
    UITextField * _textField;
    UILabel * _sizeTextLabel;
    id _delegate;
    char _forceFirstResponder;
    int _cellStyle;
}

@property (nonatomic) int style;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)posterCellIdentifier;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)layoutSubviews;
- (struct CGSize)contentSize;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (int)style;
- (void)setStyle:(int)arg0;
- (char)isEditing;
- (void)textFieldDidBeginEditing:(UITextField *)arg0;
- (char)textFieldShouldEndEditing:(UITextField *)arg0;
- (char)textFieldShouldReturn:(UITextField *)arg0;
- (void)textViewDidBeginEditing:(UITextView *)arg0;
- (char)textViewShouldEndEditing:(UITextView *)arg0;
- (void)textViewDidChange:(UITextView *)arg0;
- (void)setPlaceholderText:(NSAttributedString *)arg0;
- (void)_textFieldChanged;
- (PLTableViewEditableCell *)initWithFrame:(struct CGRect)arg0 multiLine:(struct CGSize)arg1;
- (PLTableViewEditableCell *)initHDSDCell;
- (PLTableViewEditableCell *)initWithFrame:(struct CGRect)arg0 cellStyle:(struct CGSize)arg1;
- (void)forceFirstResponder:(char)arg0;
- (UILabel *)sizeTextLabel;

@end
