/* Runtime dump - NSValidationErrorLocalizationPolicy
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying>
{
    NSURL * _url;
    NSBundle * _localizationBundle;
    NSString * _modelStringsFileName;
    NSDictionary * _localizationDictionary;
    char _hasSetLocalizationDictionary;
}

- (NSObject *)localizedEntityNameForEntity:(NSObject *)arg0;
- (NSObject *)localizedPropertyNameForProperty:(NSString *)arg0;
- (NSString *)localizedModelStringForKey:(NSString *)arg0;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (NSDictionary *)localizationDictionary;
- (void)setLocalizationDictionary:(NSDictionary *)arg0;
- (void)_ensureLocalizationDictionaryIsInitialized;
- (NSString *)_localizedStringForKey:(NSString *)arg0 value:(void *)arg1;
- (NSString *)_cachedObjectForKey:(NSString *)arg0 value:(void *)arg1;
- (NSObject *)_localizedPropertyNameForProperty:(NSString *)arg0 entity:(NSObject *)arg1;
- (void)dealloc;
- (NSValidationErrorLocalizationPolicy *)copyWithZone:(struct _NSZone *)arg0;
- (NSValidationErrorLocalizationPolicy *)initWithURL:(NSString *)arg0;

@end
