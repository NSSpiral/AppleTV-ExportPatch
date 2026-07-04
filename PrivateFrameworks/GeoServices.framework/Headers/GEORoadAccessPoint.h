/* Runtime dump - GEORoadAccessPoint
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoadAccessPoint : PBCodable <NSCopying>
{
    int _drivingDirection;
    GEOLatLng * _location;
    int _walkingDirection;
    char _isApproximate;
    struct ? _has;
}

@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOLatLng * location;
@property (nonatomic) char hasIsApproximate;
@property (nonatomic) char isApproximate;
@property (nonatomic) char hasWalkingDirection;
@property (nonatomic) int walkingDirection;
@property (nonatomic) char hasDrivingDirection;
@property (nonatomic) int drivingDirection;

- (void)setWalkingDirection:(int)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORoadAccessPoint *)copyWithZone:(struct _NSZone *)arg0;
- (GEOLatLng *)location;
- (NSDictionary *)dictionaryRepresentation;
- (void)setDrivingDirection:(int)arg0;
- (void)setIsApproximate:(char)arg0;
- (void)setHasIsApproximate:(char)arg0;
- (char)hasIsApproximate;
- (void)setHasWalkingDirection:(char)arg0;
- (char)hasWalkingDirection;
- (void)setHasDrivingDirection:(char)arg0;
- (char)hasDrivingDirection;
- (char)isApproximate;
- (int)walkingDirection;
- (int)drivingDirection;
- (void)setLocation:(GEOLatLng *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasLocation;

@end
