/* Runtime dump - WKGeolocationProviderIOS
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKGeolocationProviderIOS : NSObject <WebGeolocationCoreLocationUpdateListener>
{
    struct RefPtr<WebKit::WebGeolocationManagerProxy> _geolocationManager;
    struct RetainPtr<WebGeolocationCoreLocationProvider> _coreLocationProvider;
    char _isWebCoreGeolocationActive;
    struct RefPtr<WebKit::WebGeolocationPosition> _lastActivePosition;
    struct Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow> _requestsWaitingForCoreLocationAuthorization;
}

- (WKGeolocationProviderIOS *)init;
- (WKGeolocationProviderIOS *)initWithContext:(struct WebContext *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)_setEnableHighAccuracy:(char)arg0;
- (void)decidePolicyForGeolocationRequestFromOrigin:(struct OpaqueWKSecurityOrigin *)arg0 frame:(struct OpaqueWKFrame *)arg1 request:(struct OpaqueWKGeolocationPermissionRequest *)arg2 window:(UIWindow *)arg3;
- (void)geolocationAuthorizationGranted;
- (void)geolocationAuthorizationDenied;
- (void)positionChanged:(struct GeolocationPosition *)arg0;
- (void)errorOccurred:(char)arg0;
- (void)resetGeolocation;
- (void)_stopUpdating;
- (void)_startUpdating;

@end
