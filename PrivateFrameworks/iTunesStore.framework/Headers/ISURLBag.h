/* Runtime dump - ISURLBag
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLBag : NSObject
{
    SSURLBagContext * _context;
    SSNetworkConstraints * _defaultConstraints;
    NSDictionary * _dictionary;
    NSArray * _guidPatterns;
    NSSet * _guidSchemes;
    NSDictionary * _headerPatterns;
    double _invalidationTime;
    char _loadedFromDiskCache;
    NSString * _storeFrontIdentifier;
}

@property (readonly) NSSet * availableStorefrontItemKinds;
@property (readonly, nonatomic) char valid;
@property (nonatomic) double invalidationTime;
@property (nonatomic) char loadedFromDiskCache;
@property (copy, nonatomic) NSString * storeFrontIdentifier;
@property (copy, nonatomic) SSURLBagContext * URLBagContext;
@property (readonly, nonatomic) NSDictionary * URLBagDictionary;
@property (readonly, nonatomic) long long versionIdentifier;

+ (void)_loadItemKindURLBagKeyMap;
+ (char)_allowUnsignedBags;
+ (ISURLBag *)storeFrontURLBagKeyForItemKind:(id)arg0;
+ (NSURL *)copyExtraHeadersForURL:(NSURL *)arg0 inBagContext:(NSObject *)arg1;
+ (ISURLBag *)networkConstraintsForDownloadKind:(id)arg0 inBagContext:(NSObject *)arg1;
+ (char)shouldSendGUIDForURL:(NSURL *)arg0 inBagContext:(NSObject *)arg1;
+ (NSString *)urlBagForContext:(NSObject *)arg0;
+ (NSString *)urlForKey:(NSString *)arg0 inBagContext:(NSObject *)arg1;
+ (char)urlIsTrusted:(id)arg0 inBagContext:(NSObject *)arg1;
+ (NSString *)valueForKey:(NSString *)arg0 inBagContext:(NSObject *)arg1;

- (NSString *)storeFrontIdentifier;
- (ISURLBag *)initWithURLBagContext:(NSObject *)arg0;
- (NSString *)valueForKey:(NSString *)arg0;
- (void)dealloc;
- (ISURLBag *)init;
- (char)writeToFile:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (char)isValid;
- (ISURLBag *)initWithContentsOfFile:(NSString *)arg0;
- (char)urlIsTrusted:(id)arg0;
- (NSString *)urlForKey:(NSString *)arg0;
- (char)shouldSendAnonymousMachineIdentifierForURL:(NSURL *)arg0;
- (void)setStoreFrontIdentifier:(NSString *)arg0;
- (SSURLBagContext *)URLBagContext;
- (NSDictionary *)URLBagDictionary;
- (ISURLBag *)initWithRawDictionary:(NSDictionary *)arg0;
- (void)_setDictionary:(NSDictionary *)arg0;
- (NSDictionary *)_copyGUIDPatternsFromDictionary:(NSDictionary *)arg0;
- (NSDictionary *)_copyGUIDSchemesFromDictionary:(NSDictionary *)arg0;
- (NSDictionary *)_copyHeaderPatternsFromDictionary:(NSDictionary *)arg0;
- (NSString *)_networkConstraintsCachePath;
- (long long)versionIdentifier;
- (void)_writeNetworkConstraintsCacheFile;
- (void)_writeURLResolutionCacheFile;
- (id)networkConstraintsForDownloadKind:(id)arg0;
- (double)invalidationTime;
- (void)setInvalidationTime:(double)arg0;
- (NSURL *)copyExtraHeadersForURL:(NSURL *)arg0;
- (char)shouldSendGUIDForURL:(NSURL *)arg0;
- (void)_preprocessURLResolutionCacheDictionary:(NSDictionary *)arg0;
- (char)loadFromDictionary:(NSDictionary *)arg0 returningError:(id *)arg1;
- (NSSet *)availableStorefrontItemKinds;
- (NSString *)searchQueryParametersForClientIdentifier:(NSString *)arg0 networkType:(int)arg1;
- (void)setInvalidationTimeWithExprationInterval:(double)arg0;
- (NSURL *)URLForURL:(NSURL *)arg0 clientIdentifier:(NSString *)arg1;
- (NSURL *)sanitizedURLForURL:(NSURL *)arg0;
- (void)setURLBagContext:(NSObject *)arg0;
- (char)loadedFromDiskCache;
- (void)setLoadedFromDiskCache:(char)arg0;

@end
