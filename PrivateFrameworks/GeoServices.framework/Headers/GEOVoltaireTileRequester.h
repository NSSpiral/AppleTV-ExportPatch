/* Runtime dump - GEOVoltaireTileRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOVoltaireMultiTileDownloaderDelegate, GEOTileRequesterDelegate, GEOResourceManifestTileGroupObserver>
{
    NSMutableArray * _activeDownloads;
    NSThread * _startThread;
    NSTimer * _activeTileGroupTimeoutTimer;
    NSMutableArray * _errors;
    GEOVoltaireSimpleTileRequester * _simpleRequester;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (unsigned int)expiringTilesetsCount;
+ (struct ? *)newExpiringTilesets;
+ (char)skipNetworkForKeysWhenPreloading:(id)arg0;
+ (Class)multiDownloaderClass;
+ (Class)simpleRequesterClass;
+ (unsigned char)tileProviderIdentifier;

- (void)cancel;
- (void)dealloc;
- (void)start;
- (void)cleanup;
- (void)_startWithTileKeys:(struct ? *)arg0;
- (void)_failedToReceiveActiveTileGroup:(NSObject *)arg0;
- (NSString *)multiTileURLStringForTileKey:(struct _GEOTileKey *)arg0 useStatusCodes:(char *)arg1;
- (void)tryFinish;
- (void)tileDownloadFinished:(id)arg0;
- (void)tileDownload:(id)arg0 didReceiveData:(char)arg1 edition:(unsigned int)arg2 forKey:(struct _GEOTileKey)arg3;
- (void)tileDownload:(id)arg0 didFailWithError:(char)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)tileRequester:(GEOTileRequester *)arg0 receivedError:(NSError *)arg1;
- (unsigned int)tileSetForKey:(struct _GEOTileKey *)arg0;
- (void)tileRequester:(GEOTileRequester *)arg0 receivedData:(NSMutableData *)arg1 tileEdition:(unsigned int)arg2 tileSet:(unsigned int)arg3 etag:(NSString *)arg4 forKey:(struct _GEOTileKey)arg5 userInfo:(NSDictionary *)arg6;
- (void)tileRequesterFinished:(id)arg0;

@end
