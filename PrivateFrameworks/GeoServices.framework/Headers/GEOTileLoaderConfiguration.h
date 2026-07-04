/* Runtime dump - GEOTileLoaderConfiguration
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoaderConfiguration : NSObject <NSCopying>
{
    Class _serverProxyClass;
    char _trackUsage;
    unsigned int _memoryCacheCountLimit;
    unsigned int _memoryCacheCostLimit;
    NSString * _diskCacheLocation;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    NSLocale * _locale;
}

@property (nonatomic) Class serverProxyClass;
@property (nonatomic) char trackUsage;
@property (nonatomic) unsigned int memoryCacheCountLimit;
@property (nonatomic) unsigned int memoryCacheCostLimit;
@property (copy, nonatomic) NSString * diskCacheLocation;
@property (retain, nonatomic) GEOResourceManifestConfiguration * manifestConfiguration;
@property (retain, nonatomic) NSLocale * locale;

- (void)dealloc;
- (GEOTileLoaderConfiguration *)init;
- (GEOTileLoaderConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLocale:(NSLocale *)arg0;
- (NSLocale *)locale;
- (Class)serverProxyClass;
- (void)setServerProxyClass:(Class)arg0;
- (char)trackUsage;
- (void)setTrackUsage:(char)arg0;
- (unsigned int)memoryCacheCountLimit;
- (void)setMemoryCacheCountLimit:(unsigned int)arg0;
- (unsigned int)memoryCacheCostLimit;
- (void)setMemoryCacheCostLimit:(unsigned int)arg0;
- (NSString *)diskCacheLocation;
- (GEOResourceManifestConfiguration *)manifestConfiguration;
- (void)setManifestConfiguration:(GEOResourceManifestConfiguration *)arg0;
- (void)setDiskCacheLocation:(NSString *)arg0;

@end
