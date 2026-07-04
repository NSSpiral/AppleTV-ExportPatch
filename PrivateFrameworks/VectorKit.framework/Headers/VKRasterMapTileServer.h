/* Runtime dump - VKRasterMapTileServer
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileServer : NSObject
{
    VKRasterMapTileCache * _superTileCache;
    NSMutableDictionary * _activeTileCreators;
    NSMutableDictionary * _pendingRequests;
    NSMutableSet * _tileCreators;
    unsigned int _superTileSize;
    char _softwareRendering;
    NSObject<OS_dispatch_queue> * _homeQueue;
}

@property (readonly, nonatomic) unsigned int superTileSize;

- (void)dealloc;
- (VKRasterMapTileServer *)init;
- (NSString *)detailedDescription;
- (unsigned int)superTileSize;
- (void)renderRequest:(NSURLRequest *)arg0 completion:(id /* block */)arg1;
- (void)_renderRequest:(NSURLRequest *)arg0 completion:(id /* block */)arg1;
- (VKRasterMapTileServer *)initWithSuperTileSize:(unsigned int)arg0 cache:(NSObject *)arg1 softwareRendering:(char)arg2 homeQueue:(NSObject<OS_dispatch_queue> *)arg3;

@end
