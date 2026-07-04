/* Runtime dump - CKDPLocationCoordinate
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLocationCoordinate : PBCodable <NSCopying>
{
    double _altitude;
    double _course;
    double _horizontalAccuracy;
    double _latitude;
    double _longitude;
    double _speed;
    double _verticalAccuracy;
    CKDPDate * _timestamp;
    struct ? _has;
}

@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) char hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) char hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) char hasVerticalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) char hasCourse;
@property (nonatomic) double course;
@property (nonatomic) char hasSpeed;
@property (nonatomic) double speed;
@property (readonly, nonatomic) char hasTimestamp;
@property (retain, nonatomic) CKDPDate * timestamp;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setSpeed:(double)arg0;
- (CKDPDate *)timestamp;
- (void)setTimestamp:(CKDPDate *)arg0;
- (CKDPLocationCoordinate *)copyWithZone:(struct _NSZone *)arg0;
- (double)speed;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setLatitude:(double)arg0;
- (void)setLongitude:(double)arg0;
- (void)setHorizontalAccuracy:(double)arg0;
- (void)setAltitude:(double)arg0;
- (void)setVerticalAccuracy:(double)arg0;
- (void)setCourse:(double)arg0;
- (double)latitude;
- (double)longitude;
- (void)setHasLatitude:(char)arg0;
- (char)hasLatitude;
- (void)setHasLongitude:(char)arg0;
- (char)hasLongitude;
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
- (double)horizontalAccuracy;
- (double)verticalAccuracy;
- (double)altitude;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (double)course;

@end
