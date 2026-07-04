/* Runtime dump - GEOMapItemAdditionalPlaceInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemAdditionalPlaceInfo : NSObject
{
    GEOPlace * _place;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) int placeType;
@property (readonly, nonatomic) double areaInMeters;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, nonatomic) GEOMapRegion * mapRegion;

- (void)dealloc;
- (NSString *)name;
- (GEOMapItemAdditionalPlaceInfo *)initWithPlace:(GEOPlace *)arg0;
- (double)areaInMeters;
- (GEOMapItemAdditionalPlaceInfo *)initWithName:(NSString *)arg0 placeType:(int)arg1 areaInMeters:(double)arg2;
- (int)placeType;
- (GEOMapRegion *)mapRegion;
- (struct ?)coordinate;

@end
