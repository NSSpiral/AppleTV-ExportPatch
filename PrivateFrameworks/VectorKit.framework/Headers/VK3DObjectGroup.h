/* Runtime dump - VK3DObjectGroup
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VK3DObjectGroup : NSObject
{
    struct unique_ptr<ggl::MeshVendor<ggl::Building::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Building::BuildingMesh> > > _meshVendor;
    struct shared_ptr<md::StyleQuery> _styleQuery;
    BOOL _hasBounds;
    struct Box<float, 3> _bounds;
}

@property (readonly, nonatomic) struct MeshVendor<ggl::Building::BuildingMesh> * meshVendor;
@property (nonatomic) struct shared_ptr<md::StyleQuery> styleQuery;
@property (readonly, nonatomic) struct Box<float, 3> bounds;

- (struct Box<float, 3>)bounds;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<md::StyleQuery>)styleQuery;
- (void)setStyleQuery:(struct shared_ptr<md::StyleQuery>)arg0;
- (struct MeshVendor<ggl::Building::BuildingMesh> *)meshVendor;
- (VK3DObjectGroup *)initWithStyleQuery:(struct shared_ptr<md::StyleQuery>)arg0;
- (void)addBoundingBox:(struct Box<float, 3>)arg0;

@end
