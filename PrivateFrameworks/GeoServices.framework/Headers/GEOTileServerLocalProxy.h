/* Runtime dump - GEOTileServerLocalProxy
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOResourceManifestTileGroupObserver>
{
    GEODBWriter * _dbWriter;
    GEODBReader * _dbReader;
    NSString * _cacheLocation;
    NSMapTable * _providers;
    NSMutableArray * _inProgress;
    NSLock * _inProgressLock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)close;
- (void)open;
- (GEOTileServerLocalProxy *)initWithCacheLocation:(NSString *)arg0 manifestConfiguration:(GEOResourceManifestConfiguration *)arg1 locale:(NSLocale *)arg2;
- (void)cancel:(struct _GEOTileKey *)arg0;
- (void)loadTiles:(id)arg0 priorities:(unsigned int *)arg1 options:(unsigned int)arg2 client:(NSObject *)arg3;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg0 exclusive:(char)arg1;
- (void)endPreloadSession;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg0;
- (void)calculateFreeableSize;
- (void)registerProvider:(Class)arg0;
- (void)flushPendingWrites;
- (char)skipNetworkForKeysWhenPreloading:(id)arg0;
- (void)_registerBuiltInProviders;
- (void)_updateExpiringTilesets;
- (NSDictionary *)userInfoForRequesterUserInfo:(NSDictionary *)arg0 tileEdition:(unsigned int)arg1 tileSet:(unsigned int)arg2 eTag:(NSString *)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)reportCorruptTile:(struct _GEOTileKey *)arg0;
- (void)tileRequester:(GEOTileRequester *)arg0 receivedError:(NSError *)arg1;
- (void)tileRequester:(GEOTileRequester *)arg0 receivedData:(NSMutableData *)arg1 tileEdition:(unsigned int)arg2 tileSet:(unsigned int)arg3 etag:(NSString *)arg4 forKey:(struct _GEOTileKey)arg5 userInfo:(NSDictionary *)arg6;
- (void)tileRequesterFinished:(id)arg0;

@end
