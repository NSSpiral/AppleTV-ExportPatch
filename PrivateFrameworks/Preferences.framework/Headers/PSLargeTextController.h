/* Runtime dump - PSLargeTextController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLargeTextController : PSListController
{
    UILabel * _bodyExampleLabel;
    UILabel * _headlineExampleLabel;
    int _selectedCategoryIndex;
    NSArray * _contentSizeCategories;
    PSSpecifier * _sliderGroupSpecifier;
    char _usesExtendedRange;
    char _showsExtendedRangeSwitch;
}

@property (nonatomic) char showsExtendedRangeSwitch;

- (void)dealloc;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (float)tableView:(UITableView *)arg0 heightForHeaderInSection:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (NSArray *)specifiers;
- (void)sizeCategoryDidChange:(NSDictionary *)arg0;
- (void)setUsesExtendedRange:(char)arg0 forSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)usesExtendedRangeForSpecifier:(id)arg0;
- (void)setDynamicTypeValue:(id)arg0 forSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)getDynamicTypeValueForSpecifier:(id)arg0;
- (void)setShowsExtendedRangeSwitch:(char)arg0;
- (char)showsExtendedRangeSwitch;

@end
