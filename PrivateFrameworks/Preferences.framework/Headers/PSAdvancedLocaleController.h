/* Runtime dump - PSAdvancedLocaleController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAdvancedLocaleController : PSListController
{
    char _automaticLocaleDisabled;
}

@property (nonatomic) char automaticLocaleDisabled;

+ (char)automaticLanguageUpdateEnabled;

- (PSAdvancedLocaleController *)init;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)specifiers;
- (void)reloadLocale;
- (char)automaticLocaleDisabled;
- (void)setAutomaticLocaleDisabled:(char)arg0;
- (void)localeChangedAction;
- (void)setAutomatic:(char)arg0 specifier:(PSSpecifier *)arg1;
- (id)automatic:(char)arg0;

@end
