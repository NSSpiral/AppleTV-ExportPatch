/* Runtime dump - GEOResourceManifestManager
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestManager : NSObject <GEOResourceManifestServerProxyDelegate>
{
    <GEOResourceManifestServerProxy> * _serverProxy;
    NSHashTable * _serverProxyObservers;
    GEOActiveTileGroup * _activeTileGroup;
    NSLock * _activeTileGroupLock;
    NSDictionary * _resourceNamesToPaths;
    NSSet * _allResourceNames;
    char _needsToLoadTileGroupFromDisk;
    NSMutableArray * _tileGroupObservers;
    NSLock * _tileGroupObserversLock;
    NSLock * _closedCountLock;
    int _closedCount;
    GEOLocalizationRegionsInfo * _localizationRegionsInfo;
    NSMutableArray * _networkActivityHandlers;
    char _isUpdatingManifest;
    char _isLoadingResources;
    NSLock * _resourceNamesToPathsLock;
    GEOResourceManifestConfiguration * _configuration;
}

@property (readonly, nonatomic) <GEOResourceManifestServerProxy> * serverProxy;
@property (readonly, nonatomic) char hasActiveTileGroup;
@property (readonly, nonatomic) GEOActiveTileGroup * activeTileGroup;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)setServerProxyClass:(Class)arg0;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;
+ (void)disableServerConnection;
+ (void)setHiDPI:(char)arg0;
+ (NSObject *)modernManager;
+ (GEOResourceManifestManager *)sharedManager;
+ (NSDictionary *)modernManagerForConfiguration:(NSDictionary *)arg0;
+ (NSString *)modernManagerForTileGroupIdentifier:(unsigned int)arg0;

- (void)dealloc;
- (GEOResourceManifestManager *)init;
- (NSString *)authToken;
- (void)forceUpdate;
- (NSString *)multiTileURLStringForTileKey:(struct _GEOTileKey *)arg0 useStatusCodes:(struct _GEOTileKey)arg1;
- (NSString *)localizationURLStringIfNecessaryForTileKey:(struct _GEOTileKey *)arg0 overrideLocale:(struct _GEOTileKey)arg1;
- (NSString *)languageForTileKey:(struct _GEOTileKey *)arg0 overrideLocale:(struct _GEOTileKey)arg1;
- (void)startObservingDevResources;
- (void)stopObservingDevResources;
- (void)serverProxy:(SEL)arg0 didChangeActiveTileGroup:(NSObject *)arg1 finishedCallback:(id /* block */)arg2;
- (int)mapMatchingTileSetStyle;
- (double)timeToLiveForTileKey:(struct _GEOTileKey *)arg0;
- (NSString *)languageForTileKey:(struct _GEOTileKey *)arg0;
- (char)supportsTileStyle:(int)arg0 size:(int)arg1 scale:(int)arg2;
- (void)_buildResourceNamesToPaths;
- (void)serverProxyWillStartUpdatingResourceManifest:(SEL)arg0;
- (void)serverProxyDidStopUpdatingResourceManifest:(SEL)arg0;
- (void)serverProxyWillStartLoadingResources:(SEL)arg0;
- (void)serverProxyDidStopLoadingResources:(SEL)arg0;
- (void)setManifestToken:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (char)hasResourceManifest;
- (void)getResourceManifestWithHandler:(id /* block */)arg0;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg0;
- (void)resetActiveTileGroup;
- (void)_notifyObserversOfResourcesChange;
- (void)addServerProxyObserver:(NSObject *)arg0;
- (void)removeServerProxyObserver:(NSObject *)arg0;
- (unsigned int)mapMatchingZoomLevel;
- (NSString *)_activeTileSetForKey:(struct _GEOTileKey *)arg0;
- (void)addNetworkActivityHandler:(id /* block */)arg0;
- (unsigned int)activeTileGroupIdentifier;
- (void)devResourcesFolderDidChange;
- (<GEOResourceManifestServerProxy> *)serverProxy;
- (GEOResourceManifestManager *)initWithConfiguration:(GEOResourceManifestConfiguration *)arg0;
- (void)updateManifest:(id)arg0;
- (GEOActiveTileGroup *)activeTileGroup;
- (char)isAvailableForTileKey:(struct _GEOTileKey *)arg0;
- (unsigned int)versionForTileKey:(struct _GEOTileKey *)arg0;
- (void)openServerConnection;
- (void)closeServerConnection;
- (NSString *)detailedDescription;
- (char)hasActiveTileGroup;
- (void)removeTileGroupObserver:(NSObject *)arg0;
- (void)addTileGroupObserver:(NSObject *)arg0 queue:(NSObject *)arg1;
- (void)_localeChanged:(NSNotification *)arg0;
- (NSSet *)allResourceNames;
- (void)updateManifestIfNecessary:(id)arg0;
- (NSString *)baseURLStringForTileKey:(struct _GEOTileKey *)arg0;
- (NSString *)pathForResourceWithName:(NSString *)arg0;

@end
