/* Runtime dump - GEOTileLoader
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoader : NSObject

@property (readonly, nonatomic) int memoryHits;
@property (readonly, nonatomic) int diskHits;
@property (readonly, nonatomic) int networkHits;

+ (GEOTileLoader *)alloc;
+ (GEOTileLoader *)allocWithZone:(struct _NSZone *)arg0;
+ (void)setServerProxyClass:(Class)arg0;
+ (void)setTrackUsage:(char)arg0;
+ (void)setMemoryCacheCountLimit:(unsigned int)arg0;
+ (NSString *)diskCacheLocation;
+ (GEOTileLoader *)singletonConfiguration;
+ (void)useRemoteLoader;
+ (void)setMemoryCacheTotalCostLimit:(unsigned int)arg0;
+ (void)setMemoryCacheMinCapacity:(unsigned int)arg0;
+ (GEOTileLoader *)sharedLoader;
+ (NSString *)modernLoaderForTileGroupIdentifier:(unsigned int)arg0 locale:(NSObject *)arg1;
+ (NSDictionary *)modernLoaderForResourceManifestConfiguration:(NSDictionary *)arg0 locale:(NSObject *)arg1;
+ (GEOTileLoader *)modernLoader;
+ (void)setDiskCacheLocation:(NSString *)arg0;
+ (void)useLocalLoader;

- (void)clearAllCaches;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg0 forClient:(struct _GEOTileKey)arg1 exclusive:(char)arg2;
- (void)endPreloadSessionForClient:(NSObject *)arg0;
- (int)memoryHits;
- (int)diskHits;
- (int)networkHits;
- (void)calculateFreeableSizeWithCallbackQ:(id /* block */)arg0 finished:(id /* block */)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg0 callbackQ:(id /* block */)arg1 finished:(id /* block */)arg2;
- (void)setInternalDelegate:(NSObject *)arg0;
- (NSObject *)internalDelegate;
- (void)setInternalDelegateQ:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)internalDelegateQ;
- (NSString *)cachedTileForKey:(struct _GEOTileKey *)arg0;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg0;
- (void)cancelRequest:(_UIAsyncInvocation *)arg0;
- (void)_loadTiles:(id)arg0 options:(unsigned int)arg1 progress:(NSProgress *)arg2 finished:(/* block */ id)arg3 error:(NSError *)arg4;
- (void)closeDatabase;
- (void)openDatabase;
- (NSString *)renderDataForKey:(struct _GEOTileKey *)arg0;
- (NSString *)renderDataForKey:(struct _GEOTileKey *)arg0 asyncHandler:(id /* block */)arg1;
- (void)loadTiles:(id)arg0 progress:(NSProgress *)arg1 finished:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)loadTilesFromCacheAndNetwork:(id)arg0 progress:(NSProgress *)arg1 finished:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)loadTilesFromCache:(NSObject *)arg0 progress:(NSProgress *)arg1 finished:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)preloadTiles:(id)arg0 requireWiFi:(char)arg1 progress:(NSProgress *)arg2 finished:(/* block */ id)arg3 error:(NSError *)arg4;
- (NSObject *)expireTilesWithType:(unsigned char)arg0 provider:(unsigned short)arg1 olderThan:(double)arg2;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg0 finished:(id /* block */)arg1;
- (void)openForClient:(NSObject *)arg0;
- (void)closeForClient:(NSObject *)arg0;
- (void)setSortPoint:(struct ? *)arg0;
- (void)cancelAllForClient:(NSObject *)arg0;
- (void)registerTileDecoder:(NSObject *)arg0;
- (void)loadKey:(struct _GEOTileKey *)arg0 priority:(struct _GEOTileKey)arg1 forClient:(unsigned int)arg2 options:(NSDictionary *)arg3 callbackQ:(unsigned int)arg4 beginNetwork:(id)arg5 callback:(id /* block */)arg6;
- (void)cancelKey:(struct _GEOTileKey *)arg0 forClient:(struct _GEOTileKey)arg1;
- (void)reportCorruptTile:(struct _GEOTileKey *)arg0;
- (void)registerTileLoader:(Class)arg0;
- (void)expireTilesWithPredicate:(NSPredicate *)arg0;
- (char)reprioritizeKey:(struct _GEOTileKey *)arg0 forClient:(struct _GEOTileKey)arg1 newPriority:(id)arg2;

@end
