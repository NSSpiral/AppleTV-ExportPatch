/* Runtime dump - WebGeolocationCoreLocationProvider
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationCoreLocationProvider : NSObject <CLLocationManagerDelegate>
{
    <WebGeolocationCoreLocationUpdateListener> * _positionListener;
    struct RetainPtr<CLLocationManager> _locationManager;
    char _isWaitingForAuthorization;
    int _lastAuthorizationStatus;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)createLocationManager;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setEnableHighAccuracy:(char)arg0;
- (WebGeolocationCoreLocationProvider *)initWithListener:(BSActionListener *)arg0;
- (void)requestGeolocationAuthorization;
- (void)locationManager:(struct RetainPtr<CLLocationManager>)arg0 didUpdateLocations:(NSArray *)arg1;
- (void)locationManager:(struct RetainPtr<CLLocationManager>)arg0 didFailWithError:(char)arg1;
- (void)locationManager:(struct RetainPtr<CLLocationManager>)arg0 didChangeAuthorizationStatus:(int)arg1;
- (void)sendLocation:(NSObject *)arg0;

@end
