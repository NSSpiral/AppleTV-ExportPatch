/* Runtime dump - GEOResourceManifestServerLocalProxy
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLConnectionDelegate, GEOResourceManifestServerProxy>
{
    <GEOResourceManifestServerProxyDelegate> * _delegate;
    NSURLConnection * _connection;
    NSMutableData * _responseData;
    NSString * _responseETag;
    GEOResourceManifestConfiguration * _configuration;
    char _wantsManifestUpdateOnReachabilityChange;
    NSTimer * _manifestUpdateTimer;
    char _wantsTileGroupUpdateOnReachabilityChange;
    NSTimer * _tileGroupUpdateTimer;
    GEOResourceManifestDownload * _resourceManifest;
    GEOActiveTileGroup * _activeTileGroup;
    GEOResourceLoader * _resourceLoader;
    NSString * _loadingTileGroupUniqueIdentifier;
    char _started;
    unsigned int _manifestRetryCount;
    double _lastManifestRetryTimestamp;
    unsigned int _tileGroupRetryCount;
    double _lastTileGroupRetryTimestamp;
    NSString * _authToken;
    NSLock * _authTokenLock;
    NSError * _lastResourceManifestLoadError;
    NSMutableArray * _manifestUpdateCompletionHandlers;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <GEOResourceManifestServerProxyDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<GEOResourceManifestServerProxyDelegate> *)arg0;
- (<GEOResourceManifestServerProxyDelegate> *)delegate;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(char)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (GEOResourceManifestConfiguration *)configuration;
- (NSString *)authToken;
- (void)_countryProvidersDidChange:(NSDictionary *)arg0;
- (void)_cleanupConnection;
- (GEOResourceManifestServerLocalProxy *)initWithDelegate:(<GEOResourceManifestServerProxyDelegate> *)arg0 configuration:(GEOResourceManifestConfiguration *)arg1;
- (void)openConnection;
- (void)closeConnection;
- (NSObject<OS_dispatch_queue> *)serverQueue;
- (void)setManifestToken:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)updateIfNecessary:(id)arg0;
- (void)forceUpdate:(NSDate *)arg0;
- (void)getResourceManifestWithHandler:(id /* block */)arg0;
- (void)setActiveTileGroupIdentifier:(SEL)arg0;
- (void)resetActiveTileGroup;
- (void)_cancelConnection;
- (void)_startServer;
- (void)_updateManifest;
- (void)_activeTileGroupOverridesChanged:(NSNotification *)arg0;
- (void)_loadFromDisk;
- (void)_considerChangingActiveTileGroup;
- (char)_updateManifestIfNecessary:(id)arg0;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg0;
- (void)_writeActiveTileGroupToDisk:(id)arg0;
- (void)_purgeOldResources;
- (void)_purgeOldRegionalResources;
- (void)_notifyManifestUpdateCompletionHandlers:(id)arg0;
- (id)_idealTileGroupToUse;
- (void)_forceChangeActiveTileGroup:(NSObject *)arg0 flushTileCache:(char)arg1 ignoreIdentifier:(char)arg2;
- (void)_tileGroupTimerFired:(id)arg0;
- (NSObject *)_resourceInfosForTileGroup:(NSObject *)arg0;
- (void)_changeActiveTileGroup:(NSObject *)arg0 flushTileCache:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg0;
- (NSURL *)_manifestURL;
- (void)_updateManifest:(id)arg0;
- (void)_updateTimerFired:(id)arg0;
- (void)_writeManifestToDisk:(id)arg0;
- (void)_reachabilityChanged:(NSNotification *)arg0;

@end
