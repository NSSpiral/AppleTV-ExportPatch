/* Runtime dump - GEOTileServerRemoteProxy
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileServerRemoteProxy : GEOTileServerProxy
{
    NSObject<OS_dispatch_queue> * _connQueue;
    NSObject<OS_xpc_object> * _conn;
    NSLock * _connLock;
    int _suspendCount;
    unsigned long long _handleCounter;
    NSHashTable * _cancellingConnections;
    NSLock * _cancellingConnectionsLock;
}

- (void)dealloc;
- (void)close;
- (void)open;
- (GEOTileServerRemoteProxy *)initWithCacheLocation:(NSString *)arg0 manifestConfiguration:(GEOResourceManifestConfiguration *)arg1 locale:(NSLocale *)arg2;
- (void)cancel:(struct _GEOTileKey *)arg0;
- (void)loadTiles:(id)arg0 priorities:(unsigned int *)arg1 options:(unsigned int)arg2 client:(NSObject *)arg3;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg0 exclusive:(char)arg1;
- (void)endPreloadSession;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg0;
- (void)calculateFreeableSize;
- (void)flushPendingWrites;
- (char)skipNetworkForKeysWhenPreloading:(id)arg0;
- (void)_handleTile:(id)arg0;
- (void)_handleError:(NSError *)arg0;
- (void)_handleNetworkBegan:(id)arg0;
- (void)_handleEditionUpgrade:(id)arg0;
- (void)_handleEvent:(NSObject *)arg0 fromConnection:(NSURLConnection *)arg1;
- (void)reportCorruptTile:(struct _GEOTileKey *)arg0;

@end
