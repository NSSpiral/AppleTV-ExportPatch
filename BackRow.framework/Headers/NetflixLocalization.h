/* Runtime dump - NetflixLocalization
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface NetflixLocalization : NSObject

+ (NSString *)localizedStringForKey:(NSString *)arg0 value:(NSObject *)arg1 table:(_UIAlertSheetTable *)arg2 bundle:(NSObject *)arg3;
+ (NetflixLocalization *)fallbackLaungauegFor:(id)arg0;
+ (NetflixLocalization *)providerForTable:(id)arg0;
+ (NetflixLocalization *)localizationTable:(id)arg0 fromBundle:(NSObject *)arg1;
+ (NSString *)pseudoLocalizeString:(NSString *)arg0 withValue:(NSValue *)arg1;
+ (NSBundle *)preferredLocalizationsFromBundle:(NSObject *)arg0;
+ (void)setPseudoLocalization:(char)arg0;
+ (NSString *)localizationTableForFilePath:(NSString *)arg0;
+ (Class)lookupProviderClassFor:(id)arg0 tableName:(NSString *)arg1;
+ (void)setPreferredLanguages:(NSArray *)arg0;
+ (void)initialize;
+ (NSArray *)preferredLanguages;

@end
