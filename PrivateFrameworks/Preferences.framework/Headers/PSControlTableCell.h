/* Runtime dump - PSControlTableCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSControlTableCell : PSTableCell
{
    UIControl * _control;
}

@property (retain, nonatomic) UIControl * control;

- (UILabel *)valueLabel;
- (void)dealloc;
- (char)canReload;
- (PSControlTableCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (void)refreshCellContentsWithSpecifier:(PSSpecifier *)arg0;
- (id)newControl;
- (void)setControl:(UIControl *)arg0;
- (void)controlChanged:(NSNotification *)arg0;
- (id)controlValue;
- (UIControl *)control;

@end
