/* Runtime dump - MKDistanceDetailProvider
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDistanceDetailProvider : NSObject <MKLocationManagerObserver>
{
    GEOPlace * _place;
    NSString * _distanceToPlace;
    char _useMetric;
    char _useYardsForShortDistances;
    id _updateHandler;
}

@property (retain) GEOPlace * place;
@property (copy) id updateHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)infoAvailable;

- (void)locationManagerUpdatedLocation:(MKLocationManager *)arg0;
- (void)locationManagerFailedToUpdateLocation:(MKLocationManager *)arg0 withError:(NSError *)arg1;
- (void)locationManagerDidReset:(MKLocationManager *)arg0;
- (char)locationManagerShouldPauseLocationUpdates:(MKLocationManager *)arg0;
- (void)locationManager:(MKLocationManager *)arg0 didUpdateVehicleSpeed:(double)arg1 timestamp:(NSDate *)arg2;
- (void)locationManager:(MKLocationManager *)arg0 didUpdateVehicleHeading:(double)arg1 timestamp:(NSDate *)arg2;
- (void)beginUpdateWithHandler:(id /* block */)arg0;
- (void)setUpdateHandler:(id /* block */)arg0;
- (void)_handleLocaleChangeNotification:(NSNotification *)arg0;
- (void)_updateDistanceToPlace;
- (void)dealloc;
- (void)endUpdates;
- (void).cxx_destruct;
- (id /* block */)updateHandler;
- (void)setPlace:(GEOPlace *)arg0;
- (GEOPlace *)place;
- (void)locationManagerDidPauseLocationUpdates:(CLLocationManager *)arg0;
- (void)locationManagerDidResumeLocationUpdates:(CLLocationManager *)arg0;

@end
