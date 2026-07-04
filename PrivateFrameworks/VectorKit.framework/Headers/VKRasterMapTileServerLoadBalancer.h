/* Runtime dump - VKRasterMapTileServerLoadBalancer
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileServerLoadBalancer : NSObject
{
    NSArray * _tileServers;
    unsigned int _superTileSize;
    NSArray * _snapshotServers;
}

- (void)dealloc;
- (NSString *)description;
- (VKRasterMapTileServerLoadBalancer *)initWithTileServers:(NSArray *)arg0 snapshotServers:(NSArray *)arg1;
- (void)renderSnapshotRequest:(NSURLRequest *)arg0 completion:(id /* block */)arg1;
- (void)renderTileRequest:(NSURLRequest *)arg0 completion:(id /* block */)arg1;

@end
