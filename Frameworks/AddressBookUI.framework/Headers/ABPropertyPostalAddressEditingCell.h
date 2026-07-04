/* Runtime dump - ABPropertyPostalAddressEditingCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyPostalAddressEditingCell : ABPropertyEditingCell
{
    ABPostalAddressEditorView * _addressEditor;
}

@property (copy, nonatomic) UIColor * editorSeparatorColor;
@property (retain, nonatomic) ABPostalAddressEditorView * addressEditor;

- (void)setContactStyle:(CNContactStyle *)arg0;
- (NSArray *)constantConstraints;
- (float)rightContentMargin;
- (UIResponder *)firstResponderItem;
- (void)setEditorSeparatorColor:(UIColor *)arg0;
- (void)updateWithPropertyItem:(ABPropertyGroupItem *)arg0;
- (void)setPresentingDelegate:(<ABPresenterDelegate> *)arg0;
- (UIView<ABText> *)valueView;
- (float)leftValueMargin;
- (ABPostalAddressEditorView *)addressEditor;
- (void)layoutChanged:(NSNotification *)arg0;
- (UIColor *)editorSeparatorColor;
- (void)setAddressEditor:(ABPostalAddressEditorView *)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (void)valueChanged:(char)arg0;

@end
