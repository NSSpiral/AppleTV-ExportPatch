/* Runtime dump - VKRealisticRoadGroup
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRealisticRoadGroup : NSObject
{
    struct VKTileKey _tileKey;
    int _renderZ;
    VKRealisticPolygonMaker * _roadPolygonMaker;
    float _roadZ;
    float _casingHeight;
    float _casingWidth;
    float _casingTopLift;
    float _sidewalkShadowWidth;
    float _casingShadowWidth;
    float _casingShadowLift;
    float _roadShadowRamp;
    float _roadShadowWidth;
    float _roadShadowTaperLength;
    struct Matrix<float, 2, 1> _tileSize;
    struct Matrix<float, 2, 1> _tileOrigin;
    struct shared_ptr<md::StyleQuery> _styleQuery;
    float _casingShadowRamp;
    struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > > _roadDrawableIndices;
    struct /* ? */ _roadDrawables;
    struct fast_shared_ptr<ggl::PolygonBase::CompressedMeshMesh> _topMesh;
    struct fast_shared_ptr<ggl::RealisticCasingFacade::RealisticMesh> _facadeMesh;
    struct fast_shared_ptr<ggl::RealisticCasingFacade::RealisticMesh> _shadowMesh;
    struct fast_shared_ptr<ggl::PolygonBase::CompressedMeshMesh> _sidewalkShadowMesh;
    struct fast_shared_ptr<ggl::RealisticRoadShadow::RealisticMesh> _roadShadowMesh;
}

@property (nonatomic) int renderZ;
@property (readonly, nonatomic) float roadShadowRamp;
@property (readonly, nonatomic) float roadShadowWidth;
@property (readonly, nonatomic) float roadShadowTaperLength;
@property (readonly, nonatomic) struct Matrix<float, 2, 1> origin;
@property (readonly, nonatomic) struct Matrix<float, 2, 1> size;
@property (nonatomic) struct shared_ptr<md::StyleQuery> styleQuery;
@property (readonly, nonatomic) float casingShadowRamp;
@property (readonly, nonatomic) struct /* ? */ * roadMeshDrawables;
@property (readonly, nonatomic) struct RealisticMesh * casingShadowMesh;
@property (readonly, nonatomic) struct RealisticMesh * casingFacadeMesh;
@property (readonly, nonatomic) struct CompressedMeshMesh * casingTopMesh;
@property (readonly, nonatomic) struct CompressedMeshMesh * casingSidewalkShadowMesh;
@property (readonly, nonatomic) struct RealisticMesh * roadShadowMesh;

- (void)dealloc;
- (struct Matrix<float, 2, 1>)size;
- (struct Matrix<float, 2, 1>)origin;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)extractLinesWithPoints:(struct Matrix<float, 2, 1> *)arg0 count:(struct Matrix<float, 2, 1>)arg1;
- (void)extractShadowsWithPoints:(struct Matrix<float, 2, 1> *)arg0 count:(struct Matrix<float, 2, 1>)arg1;
- (struct TexturedDrawable *)_meshForStyleQuery:(struct /* ? */)arg0 scale:(struct vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > *)arg1 sharedResources:(struct /* ? */)arg2;
- (void)extractRoadPolygonWithPoints:(struct Matrix<float, 2, 1> *)arg0 pointCount:(struct Matrix<float, 2, 1>)arg1 indices:(unsigned int)arg2 indexCount:(unsigned short *)arg3 styleQuery:(unsigned short)arg4 contentScale:(unsigned int)arg5 sharedResources:(struct shared_ptr<md::StyleQuery>)arg6;
- (VKRealisticRoadGroup *)initWithTile:(VKLabelTile *)arg0;
- (struct RealisticMesh *)casingShadowMesh;
- (struct RealisticMesh *)casingFacadeMesh;
- (struct CompressedMeshMesh *)casingTopMesh;
- (struct CompressedMeshMesh *)casingSidewalkShadowMesh;
- (struct RealisticMesh *)roadShadowMesh;
- (void)addRoadForPolygon:(struct Matrix<float, 2, 1> *)arg0 pointCount:(struct Matrix<float, 2, 1>)arg1 characteristicPoints:(unsigned int)arg2 characteristicPointCount:(struct ? *)arg3 withStyleQuery:(struct ?)arg4;
- (void)updateComponentsWithContentScale:(float)arg0 sharedResources:(VKSharedResources *)arg1;
- (int)renderZ;
- (void)setRenderZ:(int)arg0;
- (float)roadShadowRamp;
- (float)roadShadowWidth;
- (float)roadShadowTaperLength;
- (struct shared_ptr<md::StyleQuery>)styleQuery;
- (void)setStyleQuery:(struct shared_ptr<md::StyleQuery>)arg0;
- (float)casingShadowRamp;
- (struct /* ? */ *)roadMeshDrawables;

@end
