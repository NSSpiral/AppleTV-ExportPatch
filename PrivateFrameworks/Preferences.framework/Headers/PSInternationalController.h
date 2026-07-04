/* Runtime dump - PSInternationalController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSInternationalController : PSListController
{
    NSLocale * _locale;
    char _shouldReloadSpecifiers;
    unsigned int _deviceLanguageIndex;
    NSString * _topMostLanguage;
    char _changePrimaryLanguage;
    PSSpecifier * _addLanguageSpecifier;
    NSArray * _deviceLanguageGroup;
    NSArray * _preferredLanguagesGroup;
    NSArray * _regionFormatGroup;
    NSArray * _regionFormatExampleGroup;
    NSMutableArray * _updatedAppleLanguages;
}

@property (nonatomic) char shouldReloadSpecifiers;
@property (retain, nonatomic) PSSpecifier * addLanguageSpecifier;
@property (retain, nonatomic) NSArray * deviceLanguageGroup;
@property (retain, nonatomic) NSArray * preferredLanguagesGroup;
@property (retain, nonatomic) NSArray * regionFormatGroup;
@property (retain, nonatomic) NSArray * regionFormatExampleGroup;
@property (retain, nonatomic) NSMutableArray * updatedAppleLanguages;
@property (nonatomic) char changePrimaryLanguage;

+ (void)setLocale:(NSLocale *)arg0;
+ (void)setLanguage:(NSString *)arg0;
+ (NSDate *)formattedDate:(NSDate *)arg0;
+ (void)setLocaleAfterLanguageChange:(NSDictionary *)arg0;
+ (void)setCountryForLocale:(NSObject *)arg0;
+ (NSLocale *)reloadLocale:(NSObject *)arg0;
+ (NSLocale *)validateLocale:(NSObject *)arg0;
+ (void)postNotificationForLanguageChange;
+ (PSInternationalController *)formattedTime:(id)arg0;
+ (PSInternationalController *)formattedMoneyAndNumbers:(id)arg0 country:(NSString *)arg1;
+ (NSArray *)canonicalLocaleIdentifierWithValidCalendarForComponents:(NSArray *)arg0;
+ (void)setLocaleOnly:(id)arg0;
+ (void)setLocaleAndResetTimeFormat:(NSString *)arg0;
+ (void)resetTimeFormatPreferences;
+ (double)sampleTime;
+ (PSInternationalController *)capitalizeFirstPartOfCountry:(id)arg0;
+ (PSInternationalController *)shortTitlesForLanguageIdentifiers:(id)arg0;
+ (PSInternationalController *)titlesForLanguageIdentifiers:(id)arg0;

- (void)dealloc;
- (PSInternationalController *)init;
- (int)tableView:(UITableView *)arg0 editingStyleForRowAtIndexPath:(NSIndexPath *)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (char)tableView:(UITableView *)arg0 canEditRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 canMoveRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 commitEditingStyle:(int)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 moveRowAtIndexPath:(NSIndexPath *)arg1 toIndexPath:(NSIndexPath *)arg2;
- (void)setEditing:(char)arg0 animated:(char)arg1;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)changeLanguage:(NSString *)arg0;
- (NSArray *)specifiers;
- (void)setCountryForLocale:(NSObject *)arg0;
- (void)reloadLocale;
- (void)localeChangedAction;
- (void)_removeBlackFrame;
- (void)setLanguage:(NSString *)arg0 specifier:(PSSpecifier *)arg1;
- (NSString *)language:(NSString *)arg0;
- (void)setShouldReloadSpecifiers:(char)arg0;
- (void)logStatistics;
- (char)shouldReloadSpecifiers;
- (unsigned int)sectionIndexForTableView:(NSObject *)arg0 fromSuperSectionIndex:(unsigned int)arg1;
- (NSMutableArray *)updatedAppleLanguages;
- (void)updateCell:(NSObject *)arg0 forPreferredLanguageAtIndex:(unsigned int)arg1;
- (char)onlyOneSystemLanguageInPreferredLanguages;
- (void)setUpdatedAppleLanguages:(NSMutableArray *)arg0;
- (char)canEditLanguageAtIndexPath:(NSIndexPath *)arg0 tableView:(UITableView *)arg1;
- (void)showOfficialLanguageSheet:(NSObject *)arg0;
- (void)toggleEdit;
- (NSString *)updatedDeviceLanguage;
- (void)cancelChangeLanguage:(NSString *)arg0;
- (NSArray *)deviceLanguageGroup;
- (NSArray *)regionFormatGroup;
- (NSArray *)regionFormatExampleGroup;
- (PSSpecifier *)addLanguageSpecifier;
- (void)setDeviceLanguageGroup:(NSArray *)arg0;
- (void)setRegionFormatGroup:(NSArray *)arg0;
- (void)setRegionFormatExampleGroup:(NSArray *)arg0;
- (void)setPreferredLanguagesGroup:(NSArray *)arg0;
- (void)setAddLanguageSpecifier:(PSSpecifier *)arg0;
- (void)cancelEdits;
- (void)updateSelectionStyleForVisibleCells;
- (void)showBlackViewWithLabel:(NSString *)arg0 withLanguageIdentifier:(NSString *)arg1;
- (void)showLanguageSheet:(NSObject *)arg0;
- (NSString *)localizedLanguage:(NSString *)arg0;
- (void)setLocale:(NSLocale *)arg0 specifier:(PSSpecifier *)arg1;
- (NSLocale *)locale:(NSLocale *)arg0;
- (void)setCalendar:(NSCalendar *)arg0 specifier:(PSSpecifier *)arg1;
- (NSObject *)calendar:(NSCalendar *)arg0;
- (NSArray *)preferredLanguagesGroup;
- (char)changePrimaryLanguage;
- (void)setChangePrimaryLanguage:(char)arg0;

@end
