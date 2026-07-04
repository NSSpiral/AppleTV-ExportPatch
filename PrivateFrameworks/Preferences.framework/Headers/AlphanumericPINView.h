/* Runtime dump - AlphanumericPINView
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface AlphanumericPINView : PINView <UITableViewDataSource>
{
    UITextField * _passcodeField;
    AlphanumericPINTableViewCell * _cell;
    UITableView * _table;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (AlphanumericPINView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (void)appendString:(NSString *)arg0;
- (char)canBecomeFirstResponder;
- (char)isFirstResponder;
- (char)keyboardInputChanged:(NSNotification *)arg0;
- (char)textFieldShouldReturn:(UITextField *)arg0;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (void)deleteLastCharacter;
- (void)setBlocked:(char)arg0;
- (void)setTextFieldKeyboardType:(int)arg0;
- (void)setTextFieldKeyboardAppearance:(int)arg0;
- (void)showError:(NSError *)arg0 animate:(char)arg1;
- (void)hidePasscodeField:(char)arg0;
- (void)okButtonPressed:(id)arg0;

@end
