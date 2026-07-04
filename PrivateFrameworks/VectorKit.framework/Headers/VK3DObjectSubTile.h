/* Runtime dump - VK3DObjectSubTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VK3DObjectSubTile : NSObject
{
    NSMutableArray * _objectGroups;
    GEOVectorTile * _modelTile;
    VKStyleManager * _styleManager;
    VKSharedResources * _sharedResources;
    int _vectorType;
    float _contentScale;
    struct vector<VKBuildingHeightMap, std::__1::allocator<VKBuildingHeightMap> > _heights;
}

@property (copy, nonatomic) NSArray * objectGroups;
@property (retain, nonatomic) GEOVectorTile * modelTile;
@property (retain, nonatomic) VKStyleManager * styleManager;
@property (retain, nonatomic) VKSharedResources * sharedResources;
@property (nonatomic) float contentScale;

- (void)dealloc;
- (void).cxx_construct;
- (void)setContentScale:(float)arg0;
- (float)contentScale;
- (void).cxx_destruct;
- (VKStyleManager *)styleManager;
- (void)setStyleManager:(VKStyleManager *)arg0;
- (VKSharedResources *)sharedResources;
- (void)setSharedResources:(VKSharedResources *)arg0;
- (void)setModelTile:(GEOVectorTile *)arg0;
- (GEOVectorTile *)modelTile;
- (char)heightAtPoint:(struct Matrix<float, 2, 1> *)arg0 outZ:(struct Matrix<float, 2, 1>)arg1;
- (NSArray *)objectGroups;
- (VK3DObjectSubTile *)initWithKey:(struct VKTileKey *)arg0 modelTile:(struct VKTileKey)arg1 styleManager:(VKStyleManager *)arg2 sharedResources:(VKSharedResources *)arg3 contentScale:(float)arg4;
- (struct Box<float, 2>)shadowBounds;
- (void)fillShadowAreasInContext:(struct CGContext *)arg0;
- (void)setObjectGroups:(NSArray *)arg0;
- (void)_read3DObjects:(struct vector<GEO3DBuildingFeature, std::__1::allocator<GEO3DBuildingFeature> > *)arg0 fromDiskForTileKey:(struct ? *)arg1;
- (char)_createMeshForObjects:(struct ? *)arg0 count:(char *)arg1;

@end
