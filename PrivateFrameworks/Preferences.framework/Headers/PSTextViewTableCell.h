/* Runtime dump - PSTextViewTableCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate>
{
    PSTextView * _textView;
}

@property (retain, nonatomic) PSTextView * textView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (void)setValue:(NSObject *)arg0;
- (char)canBecomeFirstResponder;
- (void)setTextView:(PSTextView *)arg0;
- (void)textContentViewDidEndEditing:(id)arg0;
- (void)textContentViewDidChange:(NSDictionary *)arg0;
- (PSTextView *)textView;
- (PSTextViewTableCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (void)cellRemovedFromView;
- (void)_adjustTextView:(NSObject *)arg0 updateTable:(char)arg1 withSpecifier:(PSPhoneNumberSpecifier *)arg2;
- (void)drawTitleInRect:(struct CGRect)arg0 selected:(struct CGSize)arg1;

@end
