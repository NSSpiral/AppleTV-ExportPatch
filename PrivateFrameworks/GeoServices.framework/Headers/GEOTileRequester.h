/* Runtime dump - GEOTileRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileRequester : NSObject
{
    GEOResourceManifestConfiguration * _manifestConfiguration;
    NSLocale * _locale;
    GEOTileKeyList * _keyList;
    GEOTileKeyMap * _cachedEtags;
    GEOTileKeyMap * _cachedData;
    <GEOTileRequesterDelegate> * _delegate;
    id _context;
    NSThread * _thread;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSData * _auditToken;
    char _requireWiFi;
}

@property (readonly, nonatomic) GEOTileKeyList * keyList;
@property (readonly, nonatomic) GEOTileKeyMap * cachedEtags;
@property (readonly, nonatomic) GEOTileKeyMap * cachedData;
@property (retain, nonatomic) <GEOTileRequesterDelegate> * delegate;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSThread * thread;
@property (retain, nonatomic) NSString * bundleIdentifier;
@property (retain, nonatomic) NSString * bundleVersion;
@property (retain, nonatomic) NSData * auditToken;
@property (nonatomic) char requireWiFi;

+ (unsigned int)expiringTilesetsCount;
+ (struct ? *)newExpiringTilesets;
+ (char)skipNetworkForKeysWhenPreloading:(id)arg0;
+ (unsigned char)tileProviderIdentifier;

- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<GEOTileRequesterDelegate> *)arg0;
- (<GEOTileRequesterDelegate> *)delegate;
- (NSString *)bundleIdentifier;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (void)start;
- (NSData *)auditToken;
- (void)setBundleIdentifier:(NSString *)arg0;
- (GEOTileRequester *)initWithKeyList:(GEOTileKeyList *)arg0 manifestConfiguration:(GEOResourceManifestConfiguration *)arg1 locale:(NSLocale *)arg2 cachedEtags:(GEOTileKeyMap *)arg3 cachedData:(GEOTileKeyMap *)arg4;
- (void)setAuditToken:(NSData *)arg0;
- (GEOTileKeyMap *)cachedData;
- (GEOTileKeyMap *)cachedEtags;
- (NSThread *)thread;
- (void)setThread:(NSThread *)arg0;
- (NSString *)bundleVersion;
- (void)setBundleVersion:(NSString *)arg0;
- (void)setRequireWiFi:(char)arg0;
- (char)requireWiFi;
- (GEOTileKeyList *)keyList;
- (unsigned int)tileSetForKey:(struct _GEOTileKey *)arg0;

@end
