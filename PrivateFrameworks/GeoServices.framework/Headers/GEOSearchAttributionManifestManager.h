/* Runtime dump - GEOSearchAttributionManifestManager
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionManifestManager : NSObject
{
    <GEOSearchAttributionServerProxy> * _serverProxy;
}

@property (readonly, nonatomic) <GEOSearchAttributionServerProxy> * serverProxy;

+ (void)useLocalProxy;
+ (void)useRemoteProxy;
+ (GEOSearchAttributionManifestManager *)sharedManager;

- (void)dealloc;
- (GEOSearchAttributionManifestManager *)init;
- (void)loadAttributionInfoForIdentifier:(NSString *)arg0 version:(unsigned int)arg1 completionHandler:(id /* block */)arg2 errorHandler:(/* block */ id)arg3;
- (<GEOSearchAttributionServerProxy> *)serverProxy;

@end
