/* Runtime dump - CLLocation
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocation : NSObject <NSCopying, NSSecureCoding, CKRecordValue>
{
    id _internal;
}

@property (readonly, nonatomic) double courseAccuracy;
@property (readonly, nonatomic) double speedAccuracy;
@property (readonly, nonatomic) char hasMatch;
@property (readonly, nonatomic) char legacyHasMatch;
@property (readonly, nonatomic) int _mapkit_source;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CLLocationMatchInfo * matchInfo;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) double verticalAccuracy;
@property (readonly, nonatomic) double course;
@property (readonly, nonatomic) double speed;
@property (readonly, copy, nonatomic) NSDate * timestamp;
@property (readonly, copy, nonatomic) CLFloor * floor;
@property (readonly, copy, nonatomic) NSString * description;
@property (readonly, nonatomic) struct ? clientLocation;
@property (readonly, nonatomic) NSString * iso6709Notation;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) struct ? rawCoordinate;
@property (readonly, nonatomic) double rawCourse;
@property (readonly, nonatomic) unsigned int integrity;

+ (CLLocation *)_mapKit_locationWithPlace:(id)arg0;
+ (NSObject *)_mapkit_stringWithType:(int)arg0;
+ (char)supportsSecureCoding;

- (NSDictionary *)cam_videoMetadataRepresentation;
- (char)hasValidCourse;
- (char)hasMatch;
- (CLLocation *)initWithCoordinate:(struct ?)arg0 rawCoordinate:(struct ?)arg1 course:(double)arg2 rawCourse:(double)arg3 courseAccuracy:(double)arg4 speed:(double)arg5 speedAccuracy:(double)arg6 altitude:(double)arg7 timestamp:(double)arg8 horizontalAccuracy:(double)arg9 verticalAccuracy:(double)arg10 type:(int)arg11 matchInfo:(CLLocationMatchInfo *)arg12;
- (char)isEqualToLocationCoordinate:(struct ?)arg0;
- (char)legacyHasMatch;
- (double)courseAccuracy;
- (double)speedAccuracy;
- (NSString *)locationDescription;
- (char)isStale;
- (GEORouteMatch *)routeMatch;
- (int)_mapkit_source;
- (int)pl_locationHash;
- (id)pl_newSurroundingLocationsHashes;
- (id)plistArchiveWithCPLArchiver:(id)arg0;
- (CLLocation *)initWithCPLArchiver:(CPLArchiver *)arg0;
- (char)cplSpecialIsEqual:(id)arg0;
- (unsigned int)cplSpecialHash;
- (CLLocation *)_initWithCoordinate:(struct ?)arg0 altitude:(double)arg1 horizontalAccuracy:(double)arg2 verticalAccuracy:(double)arg3 course:(double)arg4 speed:(double)arg5 timestamp:(NSDate *)arg6 floor:(int)arg7;
- (struct ?)rawCoordinate;
- (unsigned int)integrity;
- (double)getDistanceFrom:(NSObject *)arg0;
- (id)propagateLocationToTime:(double)arg0;
- (CLLocation *)initWithClientLocation:(struct ?)arg0;
- (id)snapToResolution:(double)arg0;
- (CLLocationMatchInfo *)matchInfo;
- (CLLocation *)initWithClientLocation:(struct ?)arg0 matchInfo:(double)arg1;
- (double)rawCourse;
- (CLFloor *)floor;
- (void)dealloc;
- (CLLocation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CLLocation *)init;
- (NSString *)description;
- (NSDate *)timestamp;
- (int)type;
- (CLLocation *)copyWithZone:(struct _NSZone *)arg0;
- (double)speed;
- (NSString *)shortDescription;
- (void)setHorizontalAccuracy:(double)arg0;
- (double)horizontalAccuracy;
- (double)verticalAccuracy;
- (CLLocation *)initWithCoordinate:(struct ?)arg0 altitude:(double)arg1 horizontalAccuracy:(double)arg2 verticalAccuracy:(double)arg3 course:(double)arg4 speed:(double)arg5 timestamp:(NSDate *)arg6;
- (CLLocation *)initWithCoordinate:(struct ?)arg0 altitude:(double)arg1 horizontalAccuracy:(double)arg2 verticalAccuracy:(double)arg3 timestamp:(NSDate *)arg4;
- (NSString *)iso6709Notation;
- (CLLocation *)initWithLatitude:(double)arg0 longitude:(double)arg1;
- (double)distanceFromLocation:(NSObject *)arg0;
- (double)altitude;
- (struct ?)coordinate;
- (double)course;
- (struct ?)clientLocation;

@end
