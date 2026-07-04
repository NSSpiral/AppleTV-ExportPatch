/* Runtime dump - GEORPCorrectedCoordinate
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCorrectedCoordinate : PBCodable <NSCopying>
{
    GEOLatLng * _correctedCoordinate;
    GEOLatLng * _originalCoordinate;
}

@property (readonly, nonatomic) char hasOriginalCoordinate;
@property (retain, nonatomic) GEOLatLng * originalCoordinate;
@property (readonly, nonatomic) char hasCorrectedCoordinate;
@property (retain, nonatomic) GEOLatLng * correctedCoordinate;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPCorrectedCoordinate *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setCorrectedCoordinate:(GEOLatLng *)arg0;
- (char)hasCorrectedCoordinate;
- (GEOLatLng *)correctedCoordinate;
- (GEOLatLng *)originalCoordinate;
- (void)setOriginalCoordinate:(GEOLatLng *)arg0;
- (char)hasOriginalCoordinate;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
