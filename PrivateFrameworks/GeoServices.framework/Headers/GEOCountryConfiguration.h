/* Runtime dump - GEOCountryConfiguration
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate>
{
    NSString * _countryCode;
    NSLock * _countryCodeLock;
    NSMutableArray * _updateCompletionHandlers;
    NSLock * _supportedFeaturesLock;
    NSMutableDictionary * _supportedFeatures;
    double _urlAuthenticationTimeToLive;
    char _hasURLAuthenticationTimeToLive;
    <_GEOCountryConfigurationServerProxy> * _serverProxy;
}

@property (copy, nonatomic) NSString * countryCode;
@property (readonly, nonatomic) char currentCountrySupportsTraffic;
@property (readonly, nonatomic) char currentCountrySupportsDirections;
@property (readonly, nonatomic) char currentCountrySupportsNavigation;
@property (readonly, nonatomic) char currentCountrySupportsRouteGenius;
@property (readonly, nonatomic) char currentCountrySupportsCarIntegration;
@property (readonly, nonatomic) double urlAuthenticationTimeToLive;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)disableServerConnection;
+ (void)setUseLocalProxy:(char)arg0;
+ (GEOCountryConfiguration *)sharedConfiguration;

- (void)dealloc;
- (GEOCountryConfiguration *)init;
- (NSString *)defaultForKey:(NSString *)arg0 defaultValue:(NSString *)arg1;
- (void)updateCountryConfiguration:(NSDictionary *)arg0;
- (void)updateCountryConfiguration:(NSDictionary *)arg0 callbackQueue:(/* block */ id)arg1;
- (void)_updateCountryConfiguration:(NSDictionary *)arg0 callbackQueue:(/* block */ id)arg1;
- (NSString *)_defaultForKey:(NSString *)arg0 inCountry:(ABCountry *)arg1 defaultValue:(NSString *)arg2 sourcePtr:(int *)arg3;
- (char)countryCode:(NSString *)arg0 supportsFeature:(int)arg1;
- (char)currentCountrySupportsFeature:(int)arg0;
- (char)currentCountrySupportsTraffic;
- (char)currentCountrySupportsNavigation;
- (NSString *)_countryDefaultForKey:(NSString *)arg0 inCountry:(ABCountry *)arg1 sourcePtr:(int *)arg2;
- (NSString *)defaultForKey:(NSString *)arg0 defaultValue:(NSString *)arg1 sourcePtr:(int *)arg2;
- (void)_resetSupportedFeatures;
- (void)serverProxyProvidersDidChange:(NSDictionary *)arg0;
- (void)serverProxy:(<_GEOCountryConfigurationServerProxy> *)arg0 countryCodeDidChange:(NSDictionary *)arg1;
- (char)currentCountrySupportsDirections;
- (char)currentCountrySupportsRouteGenius;
- (char)currentCountrySupportsCarIntegration;
- (double)urlAuthenticationTimeToLive;
- (void)setCountryCode:(NSString *)arg0;
- (void)updateProvidersForCurrentCountry;
- (NSString *)countryCode;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;

@end
