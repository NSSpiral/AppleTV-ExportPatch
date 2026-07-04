/* Runtime dump - CLHeading
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLHeading : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) char hasGeomagneticVector;
@property (readonly, retain, nonatomic) NSString * compactDescription;
@property (readonly, nonatomic) double magneticHeading;
@property (readonly, nonatomic) double trueHeading;
@property (readonly, nonatomic) double headingAccuracy;
@property (readonly, nonatomic) double x;
@property (readonly, nonatomic) double y;
@property (readonly, nonatomic) double z;
@property (readonly, copy, nonatomic) NSDate * timestamp;
@property (readonly, copy, nonatomic) NSString * description;

+ (char)supportsSecureCoding;

- (NSString *)compactDescription;
- (char)hasGeomagneticVector;
- (CLHeading *)initWithHeading:(double)arg0 accuracy:(double)arg1;
- (double)heading;
- (CLHeading *)initWithClientHeading:(struct ?)arg0;
- (void)dealloc;
- (CLHeading *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSDate *)timestamp;
- (CLHeading *)copyWithZone:(struct _NSZone *)arg0;
- (double)x;
- (double)y;
- (double)z;
- (NSString *)shortDescription;
- (double)headingAccuracy;
- (double)trueHeading;
- (double)magneticHeading;

@end
