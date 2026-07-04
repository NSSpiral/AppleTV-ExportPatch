/* Runtime dump - VKLabelNavTileData
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavTileData : NSObject
{
    VKLabelTile * _tile;
    NSMapTable * _geoJunctionToJunctionMap;
    NSMutableArray * _tileEdgeJunctions;
    char _foundTileEdgeJunctions;
    char _oppositeCarriagewayJunctionsValid;
    NSMutableArray * _oppositeCarriagewayJunctions;
    struct vector<LabelNavJunctionInfo, std::__1::allocator<LabelNavJunctionInfo> > _junctionInfos;
}

@property (readonly, retain, nonatomic) VKLabelTile * tile;
@property (nonatomic) char oppositeCarriagewayJunctionsValid;
@property (readonly, retain, nonatomic) NSMutableArray * oppositeCarriagewayJunctions;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (VKLabelNavTileData *)initWithTile:(VKLabelTile *)arg0;
- (VKLabelTile *)tile;
- (NSMutableArray *)oppositeCarriagewayJunctions;
- (void)addJunction:(MKJunction *)arg0;
- (void)_findTileEdgeJunctions;
- (void)initializeJunctionInfos;
- (id)junctionForGeoJunction:(struct ? *)arg0;
- (id)junctionAtCoordinate:(struct Matrix<float, 2, 1>)arg0;
- (id)findTileEdgeJunctionAtCoordinate:(struct Matrix<float, 2, 1>)arg0;
- (void)appendNavJunctionsInWorldRect:(struct Box<double, 2> *)arg0 junctions:(struct Box<double, 2>)arg1;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:(struct /* ? */ *)arg0 distanceThreshold:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> >)arg1;
- (char)oppositeCarriagewayJunctionsValid;
- (void)setOppositeCarriagewayJunctionsValid:(char)arg0;

@end
