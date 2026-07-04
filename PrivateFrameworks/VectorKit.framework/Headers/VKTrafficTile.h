/* Runtime dump - VKTrafficTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficTile : VKVectorTile
{
    struct unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer> > _trafficLayer;
    struct _GEOTileKey _dataKey;
    NSData * _data;
    VKTileKeyMap * _dynamicTiles;
    struct /* ? */ * _trafficCollection;
    NSMutableArray * _incidents;
    struct TrafficSkeletonTile _trafficData;
}

@property (nonatomic) struct _GEOTileKey * dataKey;
@property (readonly, nonatomic) NSArray * incidents;
@property (readonly, nonatomic) VKTileKeyMap * dynamicTiles;
@property (readonly, nonatomic) struct TrafficLayer * trafficLayer;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct TrafficLayer *)trafficLayer;
- (char)_buildStartOffset:(float *)arg0 endOffset:(float *)arg1 forLine:(struct ? *)arg2 forSkeleton:(unsigned int)arg3 forRange:(unsigned int)arg4 forFlow:(int)arg5 forPoints:(int)arg6;
- (void)buildIncidentsForDynamic:(id)arg0 withRoadData:(struct StyleData *)arg1 styleSession:(struct StyleResolutionSession<geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > *)arg2;
- (void)buildTrafficMeshWithRoadData:(struct StyleData *)arg0 dynamicTile:(VKTrafficDynamicTile *)arg1 trafficAccum:(struct TrafficAccum *)arg2 styleSession:(struct Matrix<float, 2, 1> *)arg3;
- (void)setDataKey:(struct _GEOTileKey *)arg0;
- (struct _GEOTileKey *)dataKey;
- (VKTrafficTile *)initWithKey:(struct VKTileKey *)arg0 downloadKey:(struct VKTileKey)arg1 data:(struct _GEOTileKey *)arg2 styleManager:(struct _GEOTileKey)arg3 sharedResources:(VKSharedResources *)arg4 contentScale:(float)arg5 device:(NSObject *)arg6;
- (void)buildSkeletonMap;
- (void)enumerateTrafficRoadPiecesForTile:(id)arg0 usingFunction:(struct function<void (const vk::RoadPiece &)> *)arg1;
- (void)buildTrafficMeshWithRoadData:(struct StyleData *)arg0 withDevice:(struct Device *)arg1;
- (NSArray *)incidents;
- (VKTileKeyMap *)dynamicTiles;

@end
