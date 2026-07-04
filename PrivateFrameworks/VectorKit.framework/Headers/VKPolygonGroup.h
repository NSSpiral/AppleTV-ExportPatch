/* Runtime dump - VKPolygonGroup
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolygonGroup : NSObject
{
    VKPolygonDrawStyle * _cachedPolygonStyle;
    VKVectorTile * _tile;
    float _contentScale;
    struct unique_ptr<ggl::MeshVendor<ggl::Building::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Building::BuildingMesh> > > _extrusionFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> > > _extrusionStrokeMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::Building::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Building::BuildingMesh> > > _extrusionFillMeshVendorForPointyRoofs;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> > > _extrusionStrokeMeshVendorForPointyRoofs;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh> > > _pointyRoofFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> > > _pointyRoofStrokeMeshVendor;
    unsigned int _cullingMask;
    struct MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVboVertexElement> _fillMeshInfo;
    struct MeshSet<ggl::PolygonMesh::MeshMesh, ggl::PolygonMesh::DefaultVboVertexElement> _strokeMeshInfo;
    struct MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVboVertexElement> _fillMeshInfoForPointyRoofs;
    struct /* ? */ _polygonEdges;
    struct shared_ptr<md::StyleQuery> _styleQuery;
    struct vector<ggl::RenderItemBatcher, std::__1::allocator<ggl::RenderItemBatcher> > _fillRenderItemBatchers;
    struct vector<ggl::RenderItemBatcher, std::__1::allocator<ggl::RenderItemBatcher> > _strokeRenderItemBatchers;
    struct /* ? */ _fillCullingGroups;
    struct /* ? */ _strokeCullingGroups;
    struct /* ? */ _extrusionFillCullingGroups;
    struct /* ? */ _extrusionStrokeCullingGroups;
    struct /* ? */ _fillCullingGroupsForPointyRoofs;
    struct /* ? */ _extrusionFillCullingGroupsForPointyRoofs;
    struct /* ? */ _extrusionStrokeCullingGroupsForPointyRoofs;
    struct /* ? */ _pointyRoofFillCullingGroups;
    struct /* ? */ _pointyRoofStrokeCullingGroups;
    struct Box<float, 3> _boundingBox;
    char _isFixedSize;
    struct Matrix<float, 2, 1> _centroid;
}

@property (readonly, nonatomic) char isFixedSize;
@property (readonly, nonatomic) struct Matrix<float, 2, 1> centroid;
@property (readonly, nonatomic) float tileZoom;
@property (readonly, nonatomic) struct Matrix<float, 3, 1> origin;
@property (readonly, nonatomic) struct Matrix<float, 3, 1> size;
@property (readonly, nonatomic) unsigned int cullingMask;
@property (readonly, nonatomic) struct shared_ptr<md::StyleQuery> * styleQuery;
@property (readonly, nonatomic) struct vector<ggl::PolygonBase::CompressedMeshMesh, std::__1::allocator<ggl::PolygonBase::CompressedMeshMesh> > * fillMeshes;
@property (readonly, nonatomic) struct vector<ggl::PolygonMesh::MeshMesh, std::__1::allocator<ggl::PolygonMesh::MeshMesh> > * strokeMeshes;
@property (readonly, nonatomic) struct MeshVendor<ggl::Building::BuildingMesh> * extrusionFillMeshVendor;
@property (readonly, nonatomic) struct MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> * extrusionStrokeMeshVendor;
@property (readonly, nonatomic) struct vector<ggl::PolygonBase::CompressedMeshMesh, std::__1::allocator<ggl::PolygonBase::CompressedMeshMesh> > * fillMeshesForPointyRoofs;
@property (readonly, nonatomic) struct MeshVendor<ggl::Building::BuildingMesh> * extrusionFillMeshVendorForPointyRoofs;
@property (readonly, nonatomic) struct MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> * extrusionStrokeMeshVendorForPointyRoofs;
@property (readonly, nonatomic) struct MeshVendor<ggl::BuildingPointyRoof::BuildingMesh> * pointyRoofFillMeshVendor;
@property (readonly, nonatomic) struct MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> * pointyRoofStrokeMeshVendor;

- (void)dealloc;
- (struct Matrix<float, 3, 1>)size;
- (struct Matrix<float, 3, 1>)origin;
- (void).cxx_construct;
- (struct Matrix<float, 2, 1>)centroid;
- (void).cxx_destruct;
- (struct shared_ptr<md::StyleQuery> *)styleQuery;
- (struct vector<ggl::PolygonBase::CompressedMeshMesh, std::__1::allocator<ggl::PolygonBase::CompressedMeshMesh> > *)fillMeshes;
- (void)addRangesToFillRenderItemBatcher:(struct RenderItemBatcher *)arg0 forMeshAtIndex:(struct Range *)arg1 cullingMask:(struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> >)arg2;
- (struct vector<ggl::PolygonBase::CompressedMeshMesh, std::__1::allocator<ggl::PolygonBase::CompressedMeshMesh> > *)fillMeshesForPointyRoofs;
- (void)addRangesToPointyRoofTopRenderItemBatcher:(struct RenderItemBatcher *)arg0 forMeshAtIndex:(struct Range *)arg1 cullingMask:(struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> >)arg2;
- (struct vector<ggl::PolygonMesh::MeshMesh, std::__1::allocator<ggl::PolygonMesh::MeshMesh> > *)strokeMeshes;
- (void)addRangesToStrokeRenderItemBatcher:(struct RenderItemBatcher *)arg0 forMeshAtIndex:(struct Range *)arg1 cullingMask:(struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> >)arg2;
- (struct MeshVendor<ggl::Building::BuildingMesh> *)extrusionFillMeshVendor;
- (void)addRangesToExtrusionFillRenderItemBatcher:(struct RenderItemBatcher *)arg0 forMeshAtIndex:(struct Range *)arg1 cullingMask:(struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> >)arg2;
- (struct MeshVendor<ggl::Building::BuildingMesh> *)extrusionFillMeshVendorForPointyRoofs;
- (void)addRangesToPointyRoofExtrusionFillRenderItemBatcher:(struct RenderItemBatcher *)arg0 forMeshAtIndex:(struct Range *)arg1 cullingMask:(struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> >)arg2;
- (struct MeshVendor<ggl::BuildingPointyRoof::BuildingMesh> *)pointyRoofFillMeshVendor;
- (void)addRangesToPointyRoofFillRenderItemBatcher:(struct RenderItemBatcher *)arg0 forMeshAtIndex:(struct Range *)arg1 cullingMask:(struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> >)arg2;
- (struct MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> *)extrusionStrokeMeshVendor;
- (void)addRangesToExtrusionStrokeRenderItemBatcher:(struct RenderItemBatcher *)arg0 forMeshAtIndex:(struct Range *)arg1 cullingMask:(struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> >)arg2;
- (struct MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> *)extrusionStrokeMeshVendorForPointyRoofs;
- (void)addRangesToPointyRoofExtrusionStrokeRenderItemBatcher:(struct RenderItemBatcher *)arg0 forMeshAtIndex:(struct Range *)arg1 cullingMask:(struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> >)arg2;
- (struct MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> *)pointyRoofStrokeMeshVendor;
- (void)addRangesToPointyRoofStrokeRenderItemBatcher:(struct RenderItemBatcher *)arg0 forMeshAtIndex:(struct Range *)arg1 cullingMask:(struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> >)arg2;
- (char)isFixedSize;
- (float)tileZoom;
- (unsigned int)cullingMask;
- (void)updateCachedStyle;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg0;
- (void)didFinishAddingData;
- (void)addPolygon:(struct ? *)arg0 building:(unsigned int)arg1 index:(unsigned int)arg2 ofTotal:(int)arg3 hasNonWaterStyle:(int)arg4 accessor:(int)arg5 triangulator:(unsigned int)arg6 prepareExtrusion:(unsigned int)arg7 forRoofStyle:(NSObject *)arg8 scaleThreshold:(/* block */ id)arg9;
- (void)prepareForPolygon:(struct ? *)arg0 building:(unsigned int)arg1 hasNonWaterStyle:(unsigned int)arg2 forRoofStyle:(int)arg3 scaleThreshold:(int)arg4;
- (unsigned char)indexForGeoFeatureAttributes:(NSDictionary *)arg0;
- (char)canConstructPointyRoofForPolygon:(struct ? *)arg0 building:(unsigned int)arg1 buildingModel:(unsigned int)arg2 scaleThreshold:(int)arg3;
- (char)addPointyRoofForPolygon:(struct ? *)arg0 building:(unsigned int)arg1 buildingModel:(unsigned int)arg2 scaleThreshold:(int)arg3 styleIndex:(int)arg4;
- (void)addExtrusionForPolygon:(struct ? *)arg0 building:(unsigned int)arg1 index:(unsigned int)arg2 ofTotal:(int)arg3 hasNonWaterStyle:(int)arg4 triangulator:(int)arg5 forRoofStyle:(unsigned int)arg6;
- (VKPolygonGroup *)initWithStyleQuery:(struct shared_ptr<md::StyleQuery> *)arg0 tile:(struct __shared_weak_count *)arg1 fixedAroundCentroid:(id)arg2 contentScale:(float)arg3;

@end
