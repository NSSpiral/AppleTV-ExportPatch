/* Runtime dump - PSLocaleSelector
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLocaleSelector : NSObject

+ (PSLocaleSelector *)sharedInstance;

- (NSLocale *)currentLocale;
- (void)setLocaleFromLanguageIdentifier:(NSString *)arg0;
- (void)setLocaleFromRegionCode:(id)arg0;
- (NSString *)availableLocaleIdentifiers;

@end
