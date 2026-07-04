/* Runtime dump - CAMLocationController
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMLocationController : NSObject <CLLocationManagerDelegate>
{
    char _enabled;
    char _headingEnabled;
    char __monitoringLocation;
    CLLocation * _currentLocation;
    CLLocationManager * __locationManager;
    NSMutableArray * __assetsWaitingForLocation;
}

@property (nonatomic) char enabled;
@property (nonatomic) char headingEnabled;
@property (readonly, nonatomic) CLLocation * currentLocation;
@property (readonly, nonatomic) char _monitoringLocation;
@property (readonly, nonatomic) CLLocationManager * _locationManager;
@property (readonly, nonatomic) NSMutableArray * _assetsWaitingForLocation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CAMLocationController *)sharedInstance;
+ (NSObject *)_sharedGPSTimestampFormatter;
+ (NSObject *)_sharedGPSDatestampFormatter;
+ (char)usesEffectiveBundleIdentifier;
+ (void)setUsesEffectiveBundleIdentifier:(char)arg0;

- (CLLocation *)currentLocation;
- (void)dealloc;
- (CAMLocationController *)init;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void).cxx_destruct;
- (void)_stopMonitoringLocationUpdates;
- (void)_updateLocationMonitoring;
- (char)_isMonitoringLocation;
- (void)_authorizeOrStartLocationManager;
- (char)isHeadingEnabled;
- (void)_startMonitoringLocationUpdates;
- (NSMutableArray *)_assetsWaitingForLocation;
- (char)_updateLocationMetadataForAsset:(NSSet *)arg0;
- (id)_currentLocationMetadataWithDeviceOrientation:(int)arg0 forDevice:(int)arg1;
- (void)_updateAssetsWaitingOnLocation;
- (char)addLocationToMetadata:(NSDictionary *)arg0 withOrientation:(int)arg1 device:(int)arg2;
- (void)addLocationToAssetWhenAvailable:(id)arg0;
- (CLLocationManager *)_locationManager;
- (void)_applicationStateChanged:(NSNotification *)arg0;
- (void)locationManager:(CLLocationManager *)arg0 didUpdateLocations:(NSArray *)arg1;
- (void)locationManager:(CLLocationManager *)arg0 didChangeAuthorizationStatus:(int)arg1;
- (void)setHeadingEnabled:(char)arg0;

@end
