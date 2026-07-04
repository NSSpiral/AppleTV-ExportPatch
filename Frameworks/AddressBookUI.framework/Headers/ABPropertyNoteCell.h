/* Runtime dump - ABPropertyNoteCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyNoteCell : ABPropertyCell
{
    UITextView * _textView;
    UILabel * _labelLabel;
}

@property (retain, nonatomic) UITextView * textView;
@property (readonly, nonatomic) UILabel * labelLabel;

- (void)performDefaultAction;
- (void)setContactStyle:(CNContactStyle *)arg0;
- (void)setLabelTextAttributes:(NSDictionary *)arg0;
- (UIView<ABText> *)labelView;
- (char)shouldPerformDefaultAction;
- (void)setValueTextAttributes:(NSDictionary *)arg0;
- (UIView<ABText> *)valueView;
- (float)bottomBaselineConstant;
- (void)textViewChanged:(NSNotification *)arg0;
- (void)textViewEditingDidEnd:(id)arg0;
- (UILabel *)labelLabel;
- (void)dealloc;
- (ABPropertyNoteCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setTextView:(UITextView *)arg0;
- (void)setAllowsEditing:(char)arg0;
- (UITextView *)textView;

@end
