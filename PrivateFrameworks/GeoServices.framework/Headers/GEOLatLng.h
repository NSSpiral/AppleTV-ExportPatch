/* Runtime dump - GEOLatLng
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLatLng : PBCodable <NSCopying>
{
    double _lat;
    double _lng;
}

@property (readonly, nonatomic) struct ? coordinate;
@property (nonatomic) double lat;
@property (nonatomic) double lng;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOLatLng *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setLat:(double)arg0;
- (void)setLng:(double)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (struct ?)coordinate;
- (double)lat;
- (double)lng;

@end
