/* Runtime dump - GEOMapRoadImpl
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapRoadImpl : NSObject <GEOMapRoad>
{
    GEOMapAccess * _map;
    struct shared_ptr<geo::MapEdgeRoad> _edge;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> > _coords;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned long coordinateCount;
@property (readonly, nonatomic) struct ? * coordinates;
@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) int formOfWay;

- (void)dealloc;
- (NSString *)description;
- (double)length;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct ? *)coordinates;
- (int)formOfWay;
- (GEOMapRoadImpl *)initWithMap:(GEOMapAccess *)arg0 edge:(struct shared_ptr<geo::MapEdgeRoad>)arg1;
- (NSObject *)findRoadsFrom:(NSObject *)arg0 completionHandler:(/* block */ id)arg1;
- (unsigned long)coordinateCount;
- (int)roadClass;

@end
