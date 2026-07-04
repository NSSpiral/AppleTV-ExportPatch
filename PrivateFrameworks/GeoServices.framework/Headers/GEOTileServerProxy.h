/* Runtime dump - GEOTileServerProxy
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileServerProxy : NSObject
{
    <GEOTileServerProxyDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQ;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    NSLocale * _locale;
}

@property (nonatomic) <GEOTileServerProxyDelegate> * delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> * delegateQ;

- (void)dealloc;
- (void)setDelegate:(<GEOTileServerProxyDelegate> *)arg0;
- (<GEOTileServerProxyDelegate> *)delegate;
- (void)close;
- (void)open;
- (GEOTileServerProxy *)initWithCacheLocation:(NSString *)arg0 manifestConfiguration:(GEOResourceManifestConfiguration *)arg1 locale:(NSLocale *)arg2;
- (void)setDelegateQ:(NSObject<OS_dispatch_queue> *)arg0;
- (void)cancel:(struct _GEOTileKey *)arg0;
- (void)loadTiles:(id)arg0 priorities:(unsigned int *)arg1 options:(unsigned int)arg2 client:(NSObject *)arg3;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg0 exclusive:(char)arg1;
- (void)endPreloadSession;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg0;
- (void)calculateFreeableSize;
- (void)flushPendingWrites;
- (char)skipNetworkForKeysWhenPreloading:(id)arg0;
- (NSObject<OS_dispatch_queue> *)delegateQ;
- (void)reportCorruptTile:(struct _GEOTileKey *)arg0;

@end
