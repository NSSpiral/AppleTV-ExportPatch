/* Runtime dump - MKUserLocation
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocation : NSObject <MKAnnotation>
{
    MKUserLocationInternal * _internal;
    double _expectedCoordinateUpdateInterval;
    double _expectedHeadingUpdateInterval;
}

@property (nonatomic) char updating;
@property (retain, nonatomic) CLLocation * location;
@property (retain, nonatomic) CLHeading * heading;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * subtitle;
@property (nonatomic) struct ? coordinate;
@property (readonly, nonatomic) double headingDegrees;
@property (readonly, nonatomic) double accuracy;
@property (retain, nonatomic) CLLocation * fixedLocation;
@property (retain, nonatomic) CLLocation * predictedLocation;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) NSString * shortDescription;
@property (nonatomic) double expectedCoordinateUpdateInterval;
@property (nonatomic) double expectedHeadingUpdateInterval;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)_setAnnotationClass:(Class)arg0;
+ (NSString *)title;
+ (NSString *)keyPathsForValuesAffectingSubtitle;

- (char)isEqualToLocation:(NSObject *)arg0;
- (void)setFixedLocation:(CLLocation *)arg0;
- (char)isUpdating;
- (void)setUpdating:(char)arg0;
- (CLLocation *)predictedLocation;
- (void)setPredictedLocation:(CLLocation *)arg0;
- (void)setExpectedCoordinateUpdateInterval:(double)arg0;
- (void)setExpectedHeadingUpdateInterval:(double)arg0;
- (CLLocation *)fixedLocation;
- (void)_updateCoordinate;
- (void)dealloc;
- (MKUserLocation *)init;
- (void)setTitle:(NSString *)arg0;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (NSString *)title;
- (void)reset;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (CLLocation *)location;
- (NSString *)shortDescription;
- (void).cxx_destruct;
- (<MKAnnotation> *)annotation;
- (void)setCourse:(double)arg0;
- (void)setHeading:(CLHeading *)arg0;
- (void)setLocation:(CLLocation *)arg0;
- (struct ?)coordinate;
- (void)setCoordinate:(struct ?)arg0;
- (double)accuracy;
- (double)headingDegrees;
- (double)expectedCoordinateUpdateInterval;
- (double)expectedHeadingUpdateInterval;
- (double)course;
- (CLHeading *)heading;

@end
