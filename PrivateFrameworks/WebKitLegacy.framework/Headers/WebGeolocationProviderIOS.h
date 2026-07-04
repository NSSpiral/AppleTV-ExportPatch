/* Runtime dump - WebGeolocationProviderIOS
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider>
{
    struct RetainPtr<WebGeolocationCoreLocationProvider> _coreLocationProvider;
    struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> _coreLocationUpdateListenerProxy;
    char _enableHighAccuracy;
    char _isSuspended;
    char _shouldResetOnResume;
    struct /* ? */ _webViewsWaitingForCoreLocationAuthorization;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > _pendingInitialPositionWebView;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > _registeredWebViews;
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > _trackedWebViews;
    struct RetainPtr<NSTimer> _sendLastPositionAsynchronouslyTimer;
    struct RetainPtr<WebGeolocationPosition> _lastPosition;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (WebGeolocationProviderIOS *)sharedGeolocationProvider;

- (void)dealloc;
- (void)suspend;
- (void)resume;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setEnableHighAccuracy:(char)arg0;
- (void)geolocationAuthorizationGranted;
- (void)geolocationAuthorizationDenied;
- (void)positionChanged:(NSNotification *)arg0;
- (void)errorOccurred:(char)arg0;
- (void)resetGeolocation;
- (void)registerWebView:(NSObject *)arg0;
- (void)unregisterWebView:(NSObject *)arg0;
- (void)initializeGeolocationForWebView:(NSObject *)arg0 listener:(NSXPCListener *)arg1;
- (struct RetainPtr<WebGeolocationPosition>)lastPosition;
- (void)_handlePendingInitialPosition:(NSObject *)arg0;
- (void)stopTrackingWebView:(NSObject *)arg0;

@end
