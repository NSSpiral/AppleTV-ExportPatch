/* Runtime dump - GEOURLCamera
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLCamera : PBCodable <NSCopying>
{
    double _altitude;
    double _heading;
    double _latitude;
    double _longitude;
    double _pitch;
    struct ? _has;
}

@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) char hasHeading;
@property (nonatomic) double heading;
@property (nonatomic) char hasPitch;
@property (nonatomic) double pitch;
@property (nonatomic) char hasAltitude;
@property (nonatomic) double altitude;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOURLCamera *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setLatitude:(double)arg0;
- (void)setLongitude:(double)arg0;
- (void)setAltitude:(double)arg0;
- (double)latitude;
- (double)longitude;
- (void)setHasLatitude:(char)arg0;
- (char)hasLatitude;
- (void)setHasLongitude:(char)arg0;
- (char)hasLongitude;
- (void)setHasAltitude:(char)arg0;
- (char)hasAltitude;
- (void)setHeading:(double)arg0;
- (void)setHasHeading:(char)arg0;
- (char)hasHeading;
- (void)setHasPitch:(char)arg0;
- (char)hasPitch;
- (double)pitch;
- (double)altitude;
- (void)setPitch:(double)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (double)heading;

@end
