/* Runtime dump - ATVStoreFront
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVStoreFront : NSObject
{
    ATVDocumentLoader * _availableSFDocument;
    char _changingStoreFront;
    char _loadAvailableStoreFrontsChangedLocale;
    NSDictionary * _availableStoreFronts;
    NSDictionary * _storeFrontDictionary;
    ATVStoreFrontLocale * _locale;
    ATVStoreEnvironment * _environment;
    unsigned int _loadStoreFrontRetryAttempt;
    unsigned int _loadAvailableStoreFrontRetryAttempt;
}

@property char changingStoreFront;
@property (retain) ATVStoreFrontLocale * locale;
@property (readonly, retain) NSArray * menuDefinitions;
@property (readonly, retain) NSArray * vendorBags;
@property (retain) ATVStoreEnvironment * environment;
@property (retain) NSDictionary * availableStoreFronts;
@property (retain) NSDictionary * storeFrontDictionary;
@property char loadAvailableStoreFrontsChangedLocale;
@property unsigned int loadStoreFrontRetryAttempt;
@property unsigned int loadAvailableStoreFrontRetryAttempt;

+ (NSArray *)allLanguages;
+ (ATVStoreFront *)sharedInstance;
+ (void)connect;
+ (void)changeLanguage:(NSString *)arg0;
+ (char)_switchToStoreFrontWithLocale:(ATVStoreFrontLocale *)arg0 force:(char)arg1;
+ (ATVStoreFront *)availableLocales;
+ (char)switchToStoreFrontWithLocale:(ATVStoreFrontLocale *)arg0;

- (NSArray *)allLanguages;
- (void)dealloc;
- (ATVStoreEnvironment *)environment;
- (void)setLocale:(ATVStoreFrontLocale *)arg0;
- (ATVStoreFrontLocale *)locale;
- (void).cxx_destruct;
- (ATVStoreFront *)initInstance;
- (void)_retry:(unsigned int)arg0 withSelector:(SEL)arg1;
- (void)_urlBagLoaded:(id)arg0;
- (void)_loadAvailableStoreFronts;
- (void)_handleSystemLanguageUpdated;
- (char)loadAvailableStoreFrontsChangedLocale;
- (void)setLoadAvailableStoreFrontsChangedLocale:(char)arg0;
- (NSArray *)menuDefinitions;
- (NSString *)valueForStoreFrontKey:(NSString *)arg0;
- (void)setChangingStoreFront:(char)arg0;
- (void)_updateDateAndTimeFromResponse:(NSURLResponse *)arg0;
- (void)setLoadAvailableStoreFrontRetryAttempt:(unsigned int)arg0;
- (void)setAvailableStoreFronts:(NSDictionary *)arg0;
- (void)_inspectCurrentStoreFront;
- (void)_loadStoreFront;
- (unsigned int)loadAvailableStoreFrontRetryAttempt;
- (void)setLoadStoreFrontRetryAttempt:(unsigned int)arg0;
- (void)setStoreFrontDictionary:(NSDictionary *)arg0;
- (unsigned int)loadStoreFrontRetryAttempt;
- (NSDictionary *)availableStoreFronts;
- (id)availableLocales;
- (char)isChangingStoreFront;
- (NSDictionary *)storeFrontDictionary;
- (NSObject *)menuDefinitionForMediaType:(NSObject *)arg0;
- (NSArray *)vendorBags;
- (void)setEnvironment:(ATVStoreEnvironment *)arg0;

@end
