/* Runtime dump - GEOURLCenterSpan
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLCenterSpan : PBCodable <NSCopying>
{
    double _latitude;
    double _latitudeDelta;
    double _longitude;
    double _longitudeDelta;
    struct ? _has;
}

@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) char hasLatitudeDelta;
@property (nonatomic) double latitudeDelta;
@property (nonatomic) char hasLongitudeDelta;
@property (nonatomic) double longitudeDelta;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOURLCenterSpan *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setLatitude:(double)arg0;
- (void)setLongitude:(double)arg0;
- (double)latitude;
- (double)longitude;
- (void)setHasLatitude:(char)arg0;
- (char)hasLatitude;
- (void)setHasLongitude:(char)arg0;
- (char)hasLongitude;
- (void)setLatitudeDelta:(double)arg0;
- (void)setLongitudeDelta:(double)arg0;
- (char)hasLatitudeDelta;
- (char)hasLongitudeDelta;
- (double)latitudeDelta;
- (double)longitudeDelta;
- (void)setHasLatitudeDelta:(char)arg0;
- (void)setHasLongitudeDelta:(char)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
