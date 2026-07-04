/* Runtime dump - MKStarkCompassView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStarkCompassView : UIView <MKLocationManagerObserver>
{
    UIView * _contentsView;
    char _monitoringCourse;
    UILabel * _label;
    MKLocationManager * _locationManager;
    int _compassPoint;
    double _heading;
}

@property (nonatomic) int compassPoint;
@property (nonatomic) double heading;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)locationManagerUpdatedLocation:(MKLocationManager *)arg0;
- (void)locationManagerFailedToUpdateLocation:(MKLocationManager *)arg0 withError:(NSError *)arg1;
- (void)locationManagerDidReset:(MKLocationManager *)arg0;
- (char)locationManagerShouldPauseLocationUpdates:(MKLocationManager *)arg0;
- (void)locationManager:(MKLocationManager *)arg0 didUpdateVehicleSpeed:(double)arg1 timestamp:(NSDate *)arg2;
- (void)locationManager:(MKLocationManager *)arg0 didUpdateVehicleHeading:(double)arg1 timestamp:(NSDate *)arg2;
- (void)_startLocationUpdates;
- (void)_updateStyling;
- (void)_updateContents;
- (void)setCompassPoint:(int)arg0;
- (void)_updateDisplayedHeadingWithHeading:(double)arg0;
- (MKStarkCompassView *)initWithSharedMKLocationManager;
- (int)compassPoint;
- (void)_createSubviews;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (struct CGSize)intrinsicContentSize;
- (void).cxx_destruct;
- (MKStarkCompassView *)initWithEffectiveBundleIdentifier:(NSString *)arg0;
- (void)setHeading:(double)arg0;
- (void)locationManagerDidPauseLocationUpdates:(CLLocationManager *)arg0;
- (void)locationManagerDidResumeLocationUpdates:(CLLocationManager *)arg0;
- (double)heading;

@end
