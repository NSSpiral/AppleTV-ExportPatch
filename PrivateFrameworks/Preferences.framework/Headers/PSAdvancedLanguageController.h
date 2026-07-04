/* Runtime dump - PSAdvancedLanguageController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAdvancedLanguageController : PSListItemsController
{
    PSSpecifier * _checkedSpecifier;
}

- (void)dealloc;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)viewWillAppear:(char)arg0;
- (NSArray *)specifiers;
- (void)updateChecked:(id)arg0;
- (void)setLocaleLanguage:(NSString *)arg0 specifier:(PSSpecifier *)arg1;

@end
