/* Runtime dump - VKUntexturedPolygonGroup
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKUntexturedPolygonGroup : VKPolygonGroup
{
    NSMutableOrderedSet * _attributeSets;
    struct vector<std::__1::shared_ptr<md::StyleQuery>, std::__1::allocator<std::__1::shared_ptr<md::StyleQuery> > > _styleQueries;
    struct vector<std::__1::shared_ptr<md::StyleQuery>, std::__1::allocator<std::__1::shared_ptr<md::StyleQuery> > > _flatRoofStyleQueries;
    NSMutableArray * _buildingDrawStyles;
    NSMutableArray * _flatRoofBuildingDrawStyles;
}

@property (readonly, nonatomic) NSOrderedSet * attributeSets;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)updateWithStyleResolutionSession:(struct StyleResolutionSession<geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > *)arg0;
- (id)buildingDrawStylesForPointyRoofs:(char)arg0;
- (unsigned char)indexForGeoFeatureAttributes:(NSDictionary *)arg0;
- (VKUntexturedPolygonGroup *)initWithStyleQuery:(struct shared_ptr<md::StyleQuery> *)arg0 tile:(struct __shared_weak_count *)arg1 fixedAroundCentroid:(id)arg2 contentScale:(float)arg3;
- (NSOrderedSet *)attributeSets;
- (char)canAcceptPolygon:(struct ? *)arg0;

@end
