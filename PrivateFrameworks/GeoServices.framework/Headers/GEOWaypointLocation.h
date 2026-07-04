/* Runtime dump - GEOWaypointLocation
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypointLocation : PBCodable <NSCopying>
{
    GEOLocation * _location;
}

@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOLocation * location;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOWaypointLocation *)copyWithZone:(struct _NSZone *)arg0;
- (GEOLocation *)location;
- (NSDictionary *)dictionaryRepresentation;
- (void)setLocation:(GEOLocation *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasLocation;

@end
