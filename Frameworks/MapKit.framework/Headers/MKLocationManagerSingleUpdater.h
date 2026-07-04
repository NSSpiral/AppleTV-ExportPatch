/* Runtime dump - MKLocationManagerSingleUpdater
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocationManagerSingleUpdater : NSObject <MKLocationManagerObserver, MKLocationManagerOperation>
{
    id _handler;
    char _active;
    double _desiredAccuracy;
    MKLocationManagerSingleUpdater * _selfReference;
    MKLocationManager * _locationManager;
}

@property (copy, nonatomic) id handler;
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
- (MKLocationManagerSingleUpdater *)initWithLocationManager:(MKLocationManager *)arg0 handler:(id /* block */)arg1;
- (MKLocationManagerSingleUpdater *)initWithLocationManager:(MKLocationManager *)arg0 desiredAccuracy:(double)arg1 handler:(id /* block */)arg2;
- (void)cancel;
- (void)dealloc;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void)start;
- (void).cxx_destruct;
- (void)locationManagerDidPauseLocationUpdates:(CLLocationManager *)arg0;
- (void)locationManagerDidResumeLocationUpdates:(CLLocationManager *)arg0;

@end
