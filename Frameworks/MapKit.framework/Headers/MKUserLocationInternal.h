/* Runtime dump - MKUserLocationInternal
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationInternal : NSObject
{
    CLLocation * location;
    CLLocation * fixedLocation;
    CLLocation * predictedLocation;
    CLHeading * heading;
    NSString * title;
    NSString * subtitle;
    <MKUserLocationAnnotation> * _annotation;
    double timestamp;
    char updating;
    double course;
    <MKAnnotation> * annotation;
}

@property (retain, nonatomic) CLLocation * location;
@property (retain, nonatomic) CLLocation * fixedLocation;
@property (retain, nonatomic) CLLocation * predictedLocation;
@property (retain, nonatomic) CLHeading * heading;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * subtitle;
@property (readonly, nonatomic) <MKAnnotation> * annotation;
@property (nonatomic) double timestamp;
@property (nonatomic) char updating;
@property (nonatomic) double course;

- (void)setFixedLocation:(CLLocation *)arg0;
- (char)isUpdating;
- (void)setUpdating:(char)arg0;
- (CLLocation *)predictedLocation;
- (void)setPredictedLocation:(CLLocation *)arg0;
- (CLLocation *)fixedLocation;
- (void)setTitle:(NSString *)arg0;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (NSString *)title;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (CLLocation *)location;
- (void).cxx_destruct;
- (<MKAnnotation> *)annotation;
- (void)setCourse:(double)arg0;
- (void)setHeading:(CLHeading *)arg0;
- (void)setLocation:(CLLocation *)arg0;
- (double)course;
- (CLHeading *)heading;

@end
