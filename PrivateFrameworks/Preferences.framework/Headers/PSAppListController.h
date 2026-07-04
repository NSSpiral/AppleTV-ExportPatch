/* Runtime dump - PSAppListController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAppListController : PSListController
{
    PSSystemPolicyForApp * _systemPolicy;
}

@property (retain, nonatomic) PSSystemPolicyForApp * systemPolicy;

+ (NSDictionary *)groupSpecifierFromDictionary:(NSDictionary *)arg0 stringsTable:(NSDictionary *)arg1 parentSpecifier:(id)arg2 target:(NSObject *)arg3;
+ (PSAppListController *)_localizedTitlesFromUnlocalizedTitles:(id)arg0 stringsTable:(NSDictionary *)arg1 parentSpecifier:(id)arg2;
+ (NSDictionary *)textFieldSpecifierFromDictionary:(NSDictionary *)arg0 stringsTable:(NSDictionary *)arg1 parentSpecifier:(id)arg2 target:(NSObject *)arg3;
+ (NSDictionary *)toggleSwitchSpecifierFromDictionary:(NSDictionary *)arg0 stringsTable:(NSDictionary *)arg1 parentSpecifier:(id)arg2 target:(NSObject *)arg3;
+ (NSDictionary *)sliderSpecifierFromDictionary:(NSDictionary *)arg0 stringsTable:(NSDictionary *)arg1 parentSpecifier:(id)arg2 target:(NSObject *)arg3;
+ (NSDictionary *)titleValueSpecifierFromDictionary:(NSDictionary *)arg0 stringsTable:(NSDictionary *)arg1 parentSpecifier:(id)arg2 target:(NSObject *)arg3;
+ (NSDictionary *)multiValueSpecifierFromDictionary:(NSDictionary *)arg0 stringsTable:(NSDictionary *)arg1 parentSpecifier:(id)arg2 target:(NSObject *)arg3;
+ (NSDictionary *)childPaneSpecifierFromDictionary:(NSDictionary *)arg0 stringsTable:(NSDictionary *)arg1 parentSpecifier:(id)arg2 target:(NSObject *)arg3;
+ (NSDictionary *)radioGroupSpecifiersFromDictionary:(NSDictionary *)arg0 stringsTable:(NSDictionary *)arg1 parentSpecifier:(id)arg2 target:(NSObject *)arg3;
+ (NSDictionary *)specifiersFromDictionary:(NSDictionary *)arg0 stringsTable:(NSDictionary *)arg1 parentSpecifier:(id)arg2 target:(NSObject *)arg3;

- (void)dealloc;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (NSBundle *)bundle;
- (NSArray *)specifiers;
- (void)setPreferenceValue:(id)arg0 specifier:(PSSpecifier *)arg1;
- (id)_uiValueFromValue:(id)arg0 specifier:(PSSpecifier *)arg1;
- (id)_valueFromUIValue:(id)arg0 specifier:(PSSpecifier *)arg1;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg0;
- (id)_readToggleSwitchSpecifierValue:(id)arg0;
- (void)_setToggleSwitchSpecifierValue:(id)arg0 specifier:(PSSpecifier *)arg1;
- (void)setSystemPolicy:(PSSystemPolicyForApp *)arg0;
- (PSSystemPolicyForApp *)systemPolicy;

@end
