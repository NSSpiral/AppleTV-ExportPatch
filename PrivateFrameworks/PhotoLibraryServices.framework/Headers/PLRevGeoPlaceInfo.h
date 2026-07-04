/* Runtime dump - PLRevGeoPlaceInfo
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoPlaceInfo : NSObject
{
    NSMutableSet * _geoPlaceInfos;
    NSString * _placeName;
}

@property (readonly, copy, nonatomic) NSString * placeName;
@property (readonly, retain, nonatomic) NSSet * geoPlaceInfos;

- (void)dealloc;
- (NSString *)placeName;
- (NSSet *)geoPlaceInfos;
- (PLRevGeoPlaceInfo *)initWithPlaceName:(NSString *)arg0;
- (void)addPlaceInfo:(NSDictionary *)arg0;

@end
