/* Runtime dump - ATVVendorBag
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVVendorBag : NSObject
{
    NSDictionary * _bag;
    char _originatesFromStore;
}

@property (readonly, nonatomic) char isTrusted;
@property (nonatomic) char originatesFromStore;
@property (readonly, nonatomic) char isEnabled;
@property (readonly, nonatomic) NSString * merchantID;
@property (readonly, nonatomic) NSString * requiresProfileId;
@property (retain, nonatomic) NSDictionary * bag;
@property (readonly, retain, nonatomic) NSDictionary * metadata;
@property (readonly, retain, nonatomic) NSDictionary * feedResources;
@property (readonly, retain, nonatomic) NSDictionary * appConfiguration;
@property (readonly, nonatomic) NSString * minimumRequiredVersion;
@property (readonly, nonatomic) NSString * maximumVersion;

+ (ATVVendorBag *)vendorBagWithDictionary:(NSDictionary *)arg0;
+ (ATVVendorBag *)vendorBagsWithDictionaries:(id)arg0;

- (NSString *)merchantID;
- (NSDictionary *)feedResources;
- (NSString *)requiresProfileId;
- (char)_originatesFromStore:(NSObject *)arg0;
- (void)setOriginatesFromStore:(char)arg0;
- (id)_normalizeBag:(id)arg0;
- (char)originatesFromStore;
- (NSDictionary *)appConfiguration;
- (id)_minimumRequiredVersionWithBag:(NSDictionary *)arg0;
- (id)_maximumVersionWithBag:(NSDictionary *)arg0;
- (NSDictionary *)_rehydrateDictionary:(NSDictionary *)arg0 fromBag:(id)arg1;
- (char)_bagValidForCurrentVersion:(NSString *)arg0;
- (NSString *)feedResourceForKey:(NSString *)arg0;
- (NSString *)appConfigurationForKey:(NSString *)arg0;
- (NSString *)minimumRequiredVersion;
- (NSString *)maximumVersion;
- (void)dealloc;
- (NSString *)description;
- (ATVVendorBag *)initWithDictionary:(NSDictionary *)arg0;
- (char)isEnabled;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (NSDictionary *)bag;
- (char)isTrusted;
- (NSString *)metadatumForKey:(NSString *)arg0;
- (NSDictionary *)metadata;
- (void)setBag:(NSDictionary *)arg0;

@end
