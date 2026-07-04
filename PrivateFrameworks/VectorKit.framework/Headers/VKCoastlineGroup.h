/* Runtime dump - VKCoastlineGroup
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCoastlineGroup : NSObject
{
    struct shared_ptr<md::StyleQuery> _styleQuery;
    unsigned int _tilePointSize;
    struct unique_ptr<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh> > > _coastlineMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::Glow::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Glow::MeshMesh> > > _innerGlowMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::Glow::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Glow::MeshMesh> > > _outerGlowMeshVendor;
}

@property (readonly, nonatomic) struct MeshVendor<ggl::PolygonMesh::MeshMesh> * coastlineMeshVendor;
@property (readonly, nonatomic) struct MeshVendor<ggl::Glow::MeshMesh> * innerGlowMeshVendor;
@property (readonly, nonatomic) struct MeshVendor<ggl::Glow::MeshMesh> * outerGlowMeshVendor;
@property (readonly, nonatomic) struct shared_ptr<md::StyleQuery> styleQuery;

- (void).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<md::StyleQuery>)styleQuery;
- (struct MeshVendor<ggl::PolygonMesh::MeshMesh> *)coastlineMeshVendor;
- (VKCoastlineGroup *)initWithStyleQuery:(struct shared_ptr<md::StyleQuery>)arg0 tilePointSize:(struct __shared_weak_count *)arg1;
- (void)addCoastlineFeature:(struct ? *)arg0;
- (struct MeshVendor<ggl::Glow::MeshMesh> *)innerGlowMeshVendor;
- (struct MeshVendor<ggl::Glow::MeshMesh> *)outerGlowMeshVendor;

@end
