/* Runtime dump - HMDWiFiManager
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWiFiManager : NSObject
{
    char _hmdWoWAssterted;
    char _wifiLinkState;
    NSObject<OS_dispatch_queue> * _workQueue;
    struct __WiFiManagerClient * _wifiClientReference;
    struct __WiFiDeviceClient * _wifiDeviceReference;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (nonatomic) char hmdWoWAssterted;
@property (nonatomic) char wifiLinkState;
@property (nonatomic) struct __WiFiManagerClient * wifiClientReference;
@property (nonatomic) struct __WiFiDeviceClient * wifiDeviceReference;

+ (HMDWiFiManager *)defaultManager;
+ (void)initialize;

- (void)dealloc;
- (HMDWiFiManager *)init;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)takeWoWAssertion;
- (void)releaseWoWAssertion;
- (struct __WiFiManagerClient *)wifiClientReference;
- (void)setWifiClientReference:(struct __WiFiManagerClient *)arg0;
- (struct __WiFiDeviceClient *)wifiDeviceReference;
- (void)setWifiDeviceReference:(struct __WiFiDeviceClient *)arg0;
- (void)_initalizeWiFiDevice:(struct __WiFiDeviceClient *)arg0;
- (char)hmdWoWAssterted;
- (void)setHmdWoWAssterted:(char)arg0;
- (void)setWifiLinkState:(char)arg0;
- (void)startWithWiFiDevice:(struct __WiFiDeviceClient *)arg0;
- (void)handleWiFiLinkChange:(char)arg0;
- (char)wifiLinkState;

@end
