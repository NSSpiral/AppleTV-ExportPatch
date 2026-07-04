/* Runtime dump - GKInterfaceListener
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface GKInterfaceListener : NSObject
{
    struct __SCDynamicStore * _dynamicStore;
    struct _opaque_pthread_mutex_t _notificationMutex;
    <InterfaceListenerDelegate> * _interfaceListenerDelegate;
    char _isWifiUp;
    char _isCellUp;
    int _notifyToken;
    char _monitoringAvailable;
}

@property char _isWifiUp;
@property char _isCellUp;
@property <InterfaceListenerDelegate> * interfaceListenerDelegate;

- (void)dealloc;
- (GKInterfaceListener *)init;
- (void)set_isCellUp:(char)arg0;
- (void)set_isWifiUp:(char)arg0;
- (<InterfaceListenerDelegate> *)interfaceListenerDelegate;
- (char)_isWifiUp;
- (char)_isCellUp;
- (char)stopChangeListener;
- (void)hasConnectionWithWifi:(char *)arg0 cell:(char *)arg1;
- (char)startChangeListener;
- (char)startRoutingChangeListener;
- (void)stopRoutingChangeListener;
- (void)setInterfaceListenerDelegate:(<InterfaceListenerDelegate> *)arg0;

@end
