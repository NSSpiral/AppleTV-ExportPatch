/* Runtime dump - PSInternationalStatistics
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSInternationalStatistics : NSObject

+ (void)clearScalar:(id)arg0;
+ (PSInternationalStatistics *)keyForReplaceLanguageViaDeviceLanguageSelection;
+ (PSInternationalStatistics *)keyForReplaceLanguageViaOtherLanguageSelection;
+ (void)incrementScalarForKey:(NSString *)arg0;
+ (void)setScalarValue:(int)arg0 forKey:(NSString *)arg1;
+ (PSInternationalStatistics *)keyForLanguageUsed:(id)arg0;
+ (void)setBoolean:(char)arg0 forKey:(NSString *)arg1;
+ (NSNumber *)keyForLanguageCount;
+ (NSString *)keyForTopLanguage:(NSString *)arg0 AndLocale:(NSObject *)arg1;
+ (NSObject *)keyForCalendar:(NSObject *)arg0;
+ (NSString *)keyForDeviceLanguage:(NSString *)arg0;
+ (PSInternationalStatistics *)keyForLocaleLanguageMatching;
+ (void)addScalarValue:(int)arg0 forKey:(NSString *)arg1;
+ (void)substractScalarValue:(int)arg0 forKey:(NSString *)arg1;
+ (void)decrementScalarForKey:(NSString *)arg0;
+ (void)logInternationalStatistics;

@end
