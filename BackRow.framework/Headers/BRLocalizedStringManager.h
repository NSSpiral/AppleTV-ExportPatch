/* Runtime dump - BRLocalizedStringManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRLocalizedStringManager : BRSingleton
{
    NSString * _currentLanguage;
    NSMutableDictionary * _stringFileCache;
}

@property (retain, nonatomic) NSString * currentLanguage;
@property (retain, nonatomic) NSMutableDictionary * stringFileCache;

+ (BRLocalizedStringManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (NSString *)accessibilityLocalizedStringForKey:(NSString *)arg0;
+ (NSString *)localizedStringForKey:(NSString *)arg0 inFile:(NSString *)arg1 fromBundle:(NSObject *)arg2;
+ (NSString *)backRowLocalizedStringForKey:(NSString *)arg0 inFile:(NSString *)arg1;
+ (NSObject *)pathForResource:(NSObject *)arg0 ofType:(NSString *)arg1 forBundle:(NSObject *)arg2;
+ (NSString *)applicationLocalizedStringForKey:(NSString *)arg0 inFile:(NSString *)arg1;
+ (BRLocalizedStringManager *)localizedLanguageForCode:(id)arg0;
+ (BRLocalizedStringManager *)appliance:(<BRAppliance> *)arg0 localizedStringForKey:(NSString *)arg1 inFile:(NSString *)arg2;
+ (NSString *)localizedLanguageForIdentifier:(NSString *)arg0;

- (void)resouceBundleHasChangedAtPath:(NSString *)arg0;
- (void)_systemLanguageUpdated:(id)arg0;
- (NSString *)_hashKeyForStringKey:(NSString *)arg0 inFile:(NSString *)arg1 fromBundlePath:(NSString *)arg2;
- (NSBundle *)_currentLanguageNameForBundle:(NSObject *)arg0;
- (char)_doesHashKey:(NSString *)arg0 belongToBundleWithPath:(NSString *)arg1;
- (NSMutableDictionary *)stringFileCache;
- (void)setStringFileCache:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (BRLocalizedStringManager *)init;
- (void).cxx_destruct;
- (void)setCurrentLanguage:(NSString *)arg0;
- (NSString *)currentLanguage;

@end
