/* Runtime dump - GEOPolyLocationShiftRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPolyLocationShiftRequest : PBRequest <NSCopying>
{
    GEOLatLng * _location;
}

@property (retain, nonatomic) GEOLatLng * location;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPolyLocationShiftRequest *)copyWithZone:(struct _NSZone *)arg0;
- (GEOLatLng *)location;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setLocation:(GEOLatLng *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (struct ?)coordinate;

@end
