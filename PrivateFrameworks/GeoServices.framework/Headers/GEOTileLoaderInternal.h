/* Runtime dump - GEOTileLoaderInternal
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoaderInternal : GEOTileLoader <GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>
{
    struct list<LoadItem, std::__1::allocator<LoadItem> > _loadItems;
    struct mutex _lock;
    GEOTilePool * _cache;
    GEOTilePool * _expiringCache;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> > _timer;
    NSObject<OS_dispatch_queue> * _loadQ;
    NSMutableSet * _openers;
    struct ? _sortPoint;
    GEOTileServerProxy * _proxy;
    int _memoryHits;
    int _diskHits;
    int _networkHits;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)> > > _shrinkCacheRequesters;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)> > > _freeableSizeRequesters;
    NSMutableArray * _tileDecoders;
    char _networkActive;
    <GEOTileLoaderInternalDelegate> * _internalDelegate;
    NSObject<OS_dispatch_queue> * _internalDelegateQ;
    GEOTileLoaderConfiguration * _config;
    struct mutex _usageLock;
    struct unordered_map<_GEOTileKey, UsageData, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<std::__1::pair<const _GEOTileKey, UsageData> > > _usageData;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> > _usageTimer;
    char _isUsageTimerScheduled;
    int _rollingBatchId;
    struct deque<ErrorInfo, std::__1::allocator<ErrorInfo> > _recentErrors;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (GEOTileLoaderInternal *)init;
- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;
- (GEOTileServerProxy *)proxy;
- (void)clearAllCaches;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg0 forClient:(struct _GEOTileKey)arg1 exclusive:(char)arg2;
- (void)endPreloadSessionForClient:(NSObject *)arg0;
- (int)memoryHits;
- (int)diskHits;
- (int)networkHits;
- (void)calculateFreeableSizeWithCallbackQ:(id /* block */)arg0 finished:(id /* block */)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg0 callbackQ:(id /* block */)arg1 finished:(id /* block */)arg2;
- (void)setInternalDelegate:(<GEOTileLoaderInternalDelegate> *)arg0;
- (<GEOTileLoaderInternalDelegate> *)internalDelegate;
- (void)setInternalDelegateQ:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)internalDelegateQ;
- (NSString *)cachedTileForKey:(struct _GEOTileKey *)arg0;
- (void)_tileEditionChanged:(NSNotification *)arg0;
- (void)_cancel:(struct __list_iterator<LoadItem, void *> *)arg0 err:(long)arg1;
- (char)_cancelIfNeeded:(struct __list_iterator<LoadItem, void *> *)arg0;
- (void)_updateNetworkActive;
- (void)loadKey:(struct _GEOTileKey *)arg0 priority:(struct _GEOTileKey)arg1 forClient:(unsigned int)arg2 proxyClient:(NSObject *)arg3 options:(NSDictionary *)arg4 callbackQ:(unsigned int)arg5 beginNetwork:(id)arg6 callback:(id /* block */)arg7;
- (void)_requestOnlineTiles;
- (void)_loadedTile:(id)arg0 forKey:(struct _GEOTileKey *)arg1 info:(struct _GEOTileKey)arg2;
- (NSCache *)_findInCache:(struct _GEOTileKey *)arg0;
- (void)proxy:(GEOTileServerProxy *)arg0 loadedTile:(id)arg1 forKey:(struct _GEOTileKey *)arg2 info:(struct _GEOTileKey)arg3;
- (void)proxy:(GEOTileServerProxy *)arg0 failedToLoadTiles:(id)arg1 error:(NSError *)arg2;
- (void)proxy:(GEOTileServerProxy *)arg0 failedToLoadAllPendingTilesWithError:(NSError *)arg1;
- (void)proxy:(GEOTileServerProxy *)arg0 willGoToNetworkForTiles:(id)arg1;
- (void)proxy:(GEOTileServerProxy *)arg0 canShrinkDiskCacheByAmount:(unsigned long long)arg1;
- (void)proxy:(GEOTileServerProxy *)arg0 didShrinkDiskCacheByAmount:(unsigned long long)arg1;
- (void)_usageTimerFired;
- (void)_timerFired;
- (void)_activeTileGroupChanged:(NSNotification *)arg0;
- (void)_loadedTile:(id)arg0 forKey:(struct _GEOTileKey *)arg1 fromOfflinePack:(struct _GEOTileKey)arg2;
- (GEOTileLoaderInternal *)initWithConfiguration:(NSDictionary *)arg0;
- (void)openForClient:(NSObject *)arg0;
- (void)closeForClient:(NSObject *)arg0;
- (void)_localeChanged:(NSNotification *)arg0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)experimentConfigurationDidChange:(NSDictionary *)arg0;
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
