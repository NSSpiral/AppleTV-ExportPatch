/* Runtime dump - VKRasterTrafficTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterTrafficTile : VKTile
{
    GEOVoltaireRasterTileTrafficData * _modelTile;
    NSMutableArray * _incidents;
    VKSharedResources * _sharedResources;
    struct unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer> > _trafficLayer;
}

@property (readonly, nonatomic) NSArray * incidents;
@property (readonly, nonatomic) struct TrafficLayer * trafficLayer;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct TrafficLayer *)trafficLayer;
- (NSArray *)incidents;
- (VKRasterTrafficTile *)initWithKey:(struct VKTileKey *)arg0 downloadKey:(struct VKTileKey)arg1 sharedResources:(struct _GEOTileKey *)arg2 trafficData:(struct _GEOTileKey)arg3;
- (void)_buildGGLLayer:(struct Device *)arg0;
- (void)_buildIncidents;

@end
