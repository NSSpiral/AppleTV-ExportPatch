/* Runtime dump - GEOResourceManifestServerRemoteProxy
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy>
{
    <GEOResourceManifestServerProxyDelegate> * _delegate;
    NSObject<OS_xpc_object> * _conn;
    NSLock * _connLock;
    NSHashTable * _cancellingConnections;
    NSLock * _cancellingConnectionsLock;
    unsigned int _retryCount;
    char _isUpdatingManifest;
    char _isLoadingResources;
    NSObject<OS_dispatch_queue> * _serverQueue;
    GEOResourceManifestConfiguration * _configuration;
    NSLock * _authTokenLock;
    NSString * _authToken;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <GEOResourceManifestServerProxyDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<GEOResourceManifestServerProxyDelegate> *)arg0;
- (<GEOResourceManifestServerProxyDelegate> *)delegate;
- (GEOResourceManifestConfiguration *)configuration;
- (NSString *)authToken;
- (GEOResourceManifestServerRemoteProxy *)initWithDelegate:(<GEOResourceManifestServerProxyDelegate> *)arg0 configuration:(GEOResourceManifestConfiguration *)arg1;
- (void)openConnection;
- (void)closeConnection;
- (NSObject<OS_dispatch_queue> *)serverQueue;
- (void)setManifestToken:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)updateIfNecessary:(id)arg0;
- (void)forceUpdate:(NSDate *)arg0;
- (void)getResourceManifestWithHandler:(id /* block */)arg0;
- (void)setActiveTileGroupIdentifier:(SEL)arg0;
- (void)resetActiveTileGroup;
- (void)_setupConnection;
- (void)_handleMessage:(NSString *)arg0 xpcMessage:(NSString *)arg1;

@end
