/* Runtime dump - VKRealisticTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRealisticTile : VKVectorTile
{
    NSMapTable * _realisticRoadGroupsTable;
    NSMutableArray * _realisticRoadGroups;
    float _roadZ;
    float _laneMarkingZ;
    float _landZ;
    float _waterZ;
    char _shouldBlend;
    float _alpha;
    VKRealisticPolygonMaker * _landPolygonMaker;
    VKRealisticPolygonMaker * _waterPolygonMaker;
    VKAnimation * _startDrawingAnimation;
    struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > > _landDrawableIndices;
    struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > > _waterDrawableIndices;
    struct /* ? */ _landDrawables;
    struct /* ? */ _waterDrawables;
    struct shared_ptr<ggl::RealisticCasingFacade::RealisticMesh> _coastlineMesh;
    struct shared_ptr<md::StyleQuery> _landTextureStyleQuery;
    struct shared_ptr<ggl::Texture2D> _defaultLandTexture;
    struct shared_ptr<ggl::Texture2D> _defaultLandTextureVariant;
    struct vector<_VKRealisticPolygonMetaData, std::__1::allocator<_VKRealisticPolygonMetaData> > _polygonMetaData;
    struct shared_ptr<ggl::RealisticTexture::RealisticUniformData> _realisticTextureUniformData;
    struct FogInfo _fogInfo;
}

@property (readonly, nonatomic) NSArray * realisticRoadGroups;
@property (readonly, nonatomic) float roadZ;
@property (readonly, nonatomic) float landZ;
@property (readonly, nonatomic) float waterZ;
@property (nonatomic) char shouldBlend;
@property (nonatomic) float alpha;
@property (retain, nonatomic) VKAnimation * startDrawingAnimation;
@property (readonly, nonatomic) struct shared_ptr<ggl::Texture2D> defaultLandTexture;
@property (readonly, nonatomic) struct shared_ptr<ggl::Texture2D> defaultLandTextureVariant;
@property (readonly, nonatomic) struct /* ? */ * landDrawables;
@property (readonly, nonatomic) struct /* ? */ * waterDrawables;
@property (readonly, nonatomic) struct RealisticMesh * coastlineMesh;
@property (readonly, nonatomic) struct shared_ptr<ggl::RealisticTexture::RealisticUniformData> realisticTextureUniformData;
@property (readonly, nonatomic) struct FogInfo * fogInfo;

- (void)dealloc;
- (float)alpha;
- (void)setAlpha:(float)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)updateViewDependentStateWithContext:(NSObject *)arg0;
- (void)updateViewDependentStateIfNecessaryWithContext:(NSObject *)arg0;
- (VKRealisticTile *)initWithKey:(struct VKTileKey *)arg0 modelTile:(struct VKTileKey)arg1 styleManager:(VKStyleManager *)arg2 sharedResources:(VKSharedResources *)arg3 contentScale:(float)arg4 device:(float)arg5;
- (int)vectorType;
- (float)roadZ;
- (struct FogInfo *)fogInfo;
- (void)createMeshes;
- (void)_parseCoastlines;
- (void)_parsePolygons;
- (void)addTriangulatedPointsToDrawableInMap:(struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > > *)arg0 vendors:(struct /* ? */)arg1 zIndex:(struct CGSize)arg2 points:(struct CGPoint *)arg3 pointCount:(struct /* ? */)arg4 indices:(struct ObjectState)arg5 indexCount:(NSObject *)arg6 styleQuery:(struct /* ? */ *)arg7;
- (void)_updateDefaultLandTextures;
- (NSArray *)realisticRoadGroups;
- (id)_groupForRenderZ:(int)arg0;
- (struct shared_ptr<ggl::Texture2D>)_createDefaultTextureForLevelOfDetail:(id)arg0 takeVariant:(SEL)arg1;
- (void)_addCoastlineMeshForPoints:(struct Matrix<float, 2, 1> *)arg0 pointCount:(struct Matrix<float, 2, 1>)arg1;
- (struct TexturedDrawable *)_drawableInMap:(struct /* ? */)arg0 vendors:(struct vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > *)arg1 forStyleQuery:(struct /* ? */)arg2;
- (struct /* ? */ *)landDrawables;
- (struct /* ? */ *)waterDrawables;
- (struct RealisticMesh *)coastlineMesh;
- (void)updateTextures;
- (struct shared_ptr<ggl::Texture2D>)defaultLandTextureVariant;
- (struct shared_ptr<ggl::Texture2D>)defaultLandTexture;
- (struct shared_ptr<ggl::RealisticTexture::RealisticUniformData>)realisticTextureUniformData;
- (float)landZ;
- (float)waterZ;
- (char)shouldBlend;
- (void)setShouldBlend:(char)arg0;
- (VKAnimation *)startDrawingAnimation;
- (void)setStartDrawingAnimation:(VKAnimation *)arg0;

@end
