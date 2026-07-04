/* Runtime dump - MKMapCamera
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying>
{
    struct ? _centerCoordinate;
    double _heading;
    double _pitch;
    double _altitude;
    MKMapView * _mapView;
}

@property (nonatomic) struct ? centerCoordinate;
@property (nonatomic) double heading;
@property (nonatomic) float pitch;
@property (nonatomic) double altitude;
@property (nonatomic) double precisePitch;

+ (NSObject *)_cameraLookingAtGEOMapRect:(struct ? *)arg0 aspectRatio:(struct ?)arg1;
+ (MKMapCamera *)cameraLookingAtCenterCoordinate:(struct ?)arg0 fromEyeCoordinate:(struct ?)arg1 eyeAltitude:(double)arg2;
+ (NSObject *)_cameraLookingAtMapRect:(struct ?)arg0 forViewSize:(struct ?)arg1;
+ (char)supportsSecureCoding;
+ (SCNCamera *)camera;

- (void)_setMapView:(NSObject *)arg0;
- (MKMapView *)_mapView;
- (void)_setPrecisePitch:(double)arg0;
- (struct ?)_enclosingGEOMapRectForAspectRatio:(id)arg0;
- (double)_precisePitch;
- (MKMapCamera *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (MKMapCamera *)copyWithZone:(struct _NSZone *)arg0;
- (void)_updateState;
- (void).cxx_destruct;
- (char)_validate;
- (void)setAltitude:(double)arg0;
- (void)setHeading:(double)arg0;
- (float)pitch;
- (double)altitude;
- (struct ?)centerCoordinate;
- (void)setCenterCoordinate:(struct ?)arg0;
- (void)setPitch:(float)arg0;
- (double)heading;

@end
