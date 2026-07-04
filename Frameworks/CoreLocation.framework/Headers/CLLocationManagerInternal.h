/* Runtime dump - CLLocationManagerInternal
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationManagerInternal : NSObject
{
    struct __CLClient * fClient;
    <CLLocationManagerDelegate> * fDelegate;
    double fDistanceFilter;
    double fDesiredAccuracy;
    char fUpdatingLocation;
    struct ? fLocation;
    NSString * fLocationEventType;
    char fRequestingLocation;
    struct __CFRunLoopTimer * fLocationRequestTimer;
    double fLocationRequestAccuracy;
    double fLocationRequestTimeout;
    char fCapabilitiesValid;
    struct ? fCapabilities;
    char fUpdatingHeading;
    double fHeadingFilter;
    int fHeadingOrientation;
    char fPersistentMonitoringEnabled;
    char fAllowsLocationPrompts;
    char fDynamicAccuracyReductionEnabled;
    char fPreviousAuthorizationStatusValid;
    int fPreviousAuthorizationStatus;
    int fActivityType;
    int fPausesLocationUpdatesAutomatically;
    char fPaused;
    char fAllowsMapCorrection;
    char fBatchingLocation;
    char fUpdatingVehicleSpeed;
    char fUpdatingVehicleHeading;
    char fMatchInfoEnabled;
    char fCourtesyPromptNeeded;
    NSMutableSet * fRangedRegions;
}

@property (readonly, nonatomic) NSMutableSet * rangedRegions;

- (CLLocationManagerInternal *)initWithInfo:(NSDictionary *)arg0 bundleIdentifier:(NSString *)arg1 bundle:(NSObject *)arg2;
- (void)setPausesLocationUpdatesAutomatically:(int)arg0;
- (int)PausesLocationUpdatesAutomatically;
- (void)stopUpdatingLocationAutoPaused;
- (void)cancelLocationRequest;
- (void)performCourtesyPromptIfNeeded;
- (NSMutableSet *)rangedRegions;
- (void)dealloc;

@end
