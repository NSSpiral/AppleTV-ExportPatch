/* Runtime dump - PSTextEditingPane
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSTextEditingPane : PSEditingPane <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _table;
    PSTextEditingCell * _cell;
    UITextField * _textField;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (PSTextEditingPane *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)becomeFirstResponder;
- (void)setPreferenceSpecifier:(id)arg0;
- (void)setPreferenceValue:(id)arg0;
- (id)preferenceValue;

@end
