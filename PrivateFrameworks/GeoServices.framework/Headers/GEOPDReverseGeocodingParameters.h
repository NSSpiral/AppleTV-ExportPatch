/* Runtime dump - GEOPDReverseGeocodingParameters
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDReverseGeocodingParameters : PBCodable <NSCopying>
{
    NSMutableArray * _locations;
    int _placeTypeLimit;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * locations;
@property (nonatomic) char hasPlaceTypeLimit;
@property (nonatomic) int placeTypeLimit;

- (void)dealloc;
- (void)setLocations:(NSMutableArray *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDReverseGeocodingParameters *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setPlaceTypeLimit:(int)arg0;
- (void)setHasPlaceTypeLimit:(char)arg0;
- (char)hasPlaceTypeLimit;
- (int)placeTypeLimit;
- (unsigned int)locationsCount;
- (NSObject *)locationAtIndex:(unsigned int)arg0;
- (NSMutableArray *)locations;
- (void)addLocation:(NSObject *)arg0;
- (void)clearLocations;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
