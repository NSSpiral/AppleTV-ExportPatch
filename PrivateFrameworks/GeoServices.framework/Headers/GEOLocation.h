/* Runtime dump - GEOLocation
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocation : PBCodable <NSCopying>
{
    double _course;
    double _courseAccuracy;
    double _heading;
    double _horizontalAccuracy;
    double _speed;
    double _speedAccuracy;
    double _timestamp;
    double _verticalAccuracy;
    int _altitude;
    GEOLatLng * _latLng;
    int _type;
    char _isMatchedLocation;
    char _isShifted;
    struct ? _has;
}

@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, nonatomic) char hasAccurateCourse;
@property (nonatomic) char hasCourseAccuracy;
@property (nonatomic) double courseAccuracy;
@property (nonatomic) char hasSpeedAccuracy;
@property (nonatomic) double speedAccuracy;
@property (nonatomic) char hasIsMatchedLocation;
@property (nonatomic) char isMatchedLocation;
@property (nonatomic) char hasIsShifted;
@property (nonatomic) char isShifted;
@property (retain, nonatomic) GEOLatLng * latLng;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasAltitude;
@property (nonatomic) int altitude;
@property (nonatomic) char hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) char hasVerticalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) char hasSpeed;
@property (nonatomic) double speed;
@property (nonatomic) char hasHeading;
@property (nonatomic) double heading;
@property (nonatomic) char hasCourse;
@property (nonatomic) double course;

+ (NSObject *)locationWithCLLocation:(NSObject *)arg0 course:(double)arg1;

- (GEOLocation *)initWithCLLocation:(NSObject *)arg0;
- (GEOLocation *)initWithCLLocation:(NSObject *)arg0 useMatchInfo:(char)arg1;
- (GEOLocation *)initWithCLLocation:(NSObject *)arg0 course:(double)arg1;
- (NSObject *)_initWithCLClientLocation:(struct ? *)arg0;
- (GEOLocation *)initWithLocation:(NSObject *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setSpeed:(double)arg0;
- (double)timestamp;
- (void)setType:(int)arg0;
- (void)setTimestamp:(double)arg0;
- (int)type;
- (GEOLocation *)copyWithZone:(struct _NSZone *)arg0;
- (double)speed;
- (char)isShifted;
- (NSDictionary *)dictionaryRepresentation;
- (void)setHorizontalAccuracy:(double)arg0;
- (void)setAltitude:(int)arg0;
- (void)setVerticalAccuracy:(double)arg0;
- (void)setCourse:(double)arg0;
- (void)setHasHorizontalAccuracy:(char)arg0;
- (char)hasHorizontalAccuracy;
- (void)setHasAltitude:(char)arg0;
- (char)hasAltitude;
- (void)setHasVerticalAccuracy:(char)arg0;
- (char)hasVerticalAccuracy;
- (void)setHasCourse:(char)arg0;
- (char)hasCourse;
- (void)setHasSpeed:(char)arg0;
- (char)hasSpeed;
- (char)hasTimestamp;
- (GEOLatLng *)latLng;
- (double)courseAccuracy;
- (GEOLocation *)initWithGEOCoordinate:(struct ?)arg0;
- (char)hasAccurateCourse;
- (void)setHasTimestamp:(char)arg0;
- (void)setHeading:(double)arg0;
- (void)setHasHeading:(char)arg0;
- (char)hasHeading;
- (void)setCourseAccuracy:(double)arg0;
- (void)setHasCourseAccuracy:(char)arg0;
- (char)hasCourseAccuracy;
- (double)speedAccuracy;
- (void)setSpeedAccuracy:(double)arg0;
- (void)setHasSpeedAccuracy:(char)arg0;
- (char)hasSpeedAccuracy;
- (char)isMatchedLocation;
- (void)setIsMatchedLocation:(char)arg0;
- (void)setHasIsMatchedLocation:(char)arg0;
- (char)hasIsMatchedLocation;
- (void)setIsShifted:(char)arg0;
- (void)setHasIsShifted:(char)arg0;
- (char)hasIsShifted;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (double)horizontalAccuracy;
- (double)verticalAccuracy;
- (GEOLocation *)initWithLatitude:(double)arg0 longitude:(double)arg1;
- (void)setLatLng:(GEOLatLng *)arg0;
- (int)altitude;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (struct ?)coordinate;
- (double)course;
- (double)heading;

@end
