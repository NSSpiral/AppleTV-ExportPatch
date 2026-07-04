/* Runtime dump - ABPostalAddressEditorView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPostalAddressEditorView : UIControl <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, ABCountryPickerControllerDelegate, ABText>
{
    CNPostalAddress * _address;
    NSDictionary * _valueTextAttributes;
    <ABPresenterDelegate> * _delegate;
    CNContactStyle * _contactStyle;
    UITableView * _tableView;
    NSDictionary * _addressFormats;
    NSArray * _cellsLayout;
    NSMutableDictionary * _textFields;
}

@property (copy, nonatomic) CNPostalAddress * address;
@property (copy, nonatomic) UIColor * separatorColor;
@property (readonly, nonatomic) int lineCount;
@property (nonatomic) <ABPresenterDelegate> * delegate;
@property (retain, nonatomic) CNContactStyle * contactStyle;
@property (retain, nonatomic) UITableView * tableView;
@property (copy, nonatomic) NSDictionary * addressFormats;
@property (copy, nonatomic) NSArray * cellsLayout;
@property (copy, nonatomic) NSMutableDictionary * textFields;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * ab_text;
@property (copy, nonatomic) NSDictionary * ab_textAttributes;

- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (void)setAb_textAttributes:(NSDictionary *)arg0;
- (void)setAb_text:(NSString *)arg0;
- (NSString *)_countryCode;
- (void)countryPickerDidCancel:(id)arg0;
- (void)countryPicker:(id)arg0 didPickCountryCode:(id)arg1;
- (NSArray *)cellsLayout;
- (void)_invalidateCellsLayout;
- (void)setCellsLayout:(NSArray *)arg0;
- (id)_cellsLayoutForCountryCode:(id)arg0;
- (void)_setAddressValue:(id)arg0 forKey:(NSString *)arg1;
- (NSString *)_addressValueForKey:(NSString *)arg0;
- (NSString *)_addressPlaceholderForKey:(NSString *)arg0;
- (void)textFieldChanged:(NSNotification *)arg0;
- (void)_setupCountryPickerOnLine:(id)arg0;
- (void)_setupCoutryPickerOnTextField:(id)arg0;
- (id)_normalizeCountryCodeToISO:(id)arg0;
- (NSDictionary *)addressFormats;
- (NSString *)ab_text;
- (NSDictionary *)ab_textAttributes;
- (void)setAddressFormats:(NSDictionary *)arg0;
- (void)setTextFields:(NSMutableDictionary *)arg0;
- (ABPostalAddressEditorView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (void)setDelegate:(<ABPresenterDelegate> *)arg0;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (<ABPresenterDelegate> *)delegate;
- (char)becomeFirstResponder;
- (void)setEnabled:(char)arg0;
- (char)canBecomeFirstResponder;
- (char)isFirstResponder;
- (struct CGSize)intrinsicContentSize;
- (UIColor *)separatorColor;
- (void)setTableView:(UITableView *)arg0;
- (void)setSeparatorColor:(UIColor *)arg0;
- (void)textFieldDidBeginEditing:(UITextField *)arg0;
- (NSMutableDictionary *)textFields;
- (UITableView *)tableView;
- (int)lineCount;
- (void)setAddress:(CNPostalAddress *)arg0;
- (CNPostalAddress *)address;

@end
