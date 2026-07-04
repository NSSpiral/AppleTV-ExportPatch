/* Runtime dump - MKCoreLocationProvider
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MKLocationProvider>
{
    CLLocationManager * _clLocationManager;
    <MKLocationProviderDelegate> * _delegate;
    char _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSBundle * _effectiveBundle;
    NSString * _effectiveBundleIdentifier;
    id _authorizationRequestBlock;
    char _waitingForAuthorization;
    char _hasQueriedAuthorization;
    NSLock * _authorizationLock;
}

@property (readonly, nonatomic) CLLocationManager * _clLocationManager;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) <MKLocationProviderDelegate> * delegate;
@property (retain, nonatomic) NSBundle * effectiveBundle;
@property (copy, nonatomic) NSString * effectiveBundleIdentifier;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) char locationServicesPreferencesDialogEnabled;
@property (nonatomic) double distanceFilter;
@property (nonatomic) char matchInfoEnabled;
@property (nonatomic) int headingOrientation;
@property (copy, nonatomic) id authorizationRequestBlock;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly, nonatomic) char airplaneModeBlocksLocation;
@property (nonatomic) int activityType;
@property (readonly, nonatomic) char usesCLMapCorrection;
@property (readonly, nonatomic) char isSimulation;
@property (readonly, nonatomic) char isTracePlayer;

- (double)distanceFilter;
- (double)expectedGpsUpdateInterval;
- (void)setLocationServicesPreferencesDialogEnabled:(char)arg0;
- (void)_createCLLocationManager;
- (void)_updateAuthorizationStatus;
- (CLLocationManager *)_clLocationManager;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleHeading;
- (double)desiredAccuracy;
- (void)_resetForNewEffectiveBundle;
- (char)isLocationServicesPreferencesDialogEnabled;
- (void)setMatchInfoEnabled:(char)arg0;
- (int)headingOrientation;
- (void)dismissHeadingCalibrationDisplay;
- (void)locationManager:(CLLocationManager *)arg0 didUpdateVehicleSpeed:(CLVehicleSpeed *)arg1;
- (void)locationManager:(CLLocationManager *)arg0 didUpdateVehicleHeading:(CLVehicleHeading *)arg1;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)setEffectiveBundle:(NSBundle *)arg0;
- (NSString *)effectiveBundleIdentifier;
- (void)setEffectiveBundleIdentifier:(NSString *)arg0;
- (char)matchInfoEnabled;
- (id /* block */)authorizationRequestBlock;
- (void)setAuthorizationRequestBlock:(id /* block */)arg0;
- (char)airplaneModeBlocksLocation;
- (char)usesCLMapCorrection;
- (char)isSimulation;
- (char)isTracePlayer;
- (void)setActivityType:(int)arg0;
- (void)dealloc;
- (void)setDelegate:(<MKLocationProviderDelegate> *)arg0;
- (MKCoreLocationProvider *)init;
- (<MKLocationProviderDelegate> *)delegate;
- (NSBundle *)effectiveBundle;
- (int)activityType;
- (void).cxx_destruct;
- (int)authorizationStatus;
- (void)requestWhenInUseAuthorization;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void)setDistanceFilter:(double)arg0;
- (void)setDesiredAccuracy:(double)arg0;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)setHeadingOrientation:(int)arg0;
- (void)locationManager:(CLLocationManager *)arg0 didUpdateLocations:(NSArray *)arg1;
- (void)locationManager:(CLLocationManager *)arg0 didUpdateHeading:(CLHeading *)arg1;
- (char)locationManagerShouldDisplayHeadingCalibration:(CLLocationManager *)arg0;
- (void)locationManager:(CLLocationManager *)arg0 didFailWithError:(NSError *)arg1;
- (void)locationManager:(CLLocationManager *)arg0 didChangeAuthorizationStatus:(int)arg1;
- (void)locationManagerDidPauseLocationUpdates:(CLLocationManager *)arg0;
- (void)locationManagerDidResumeLocationUpdates:(CLLocationManager *)arg0;

@end
