/* Runtime dump - ATVWiFiInterface
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVWiFiInterface : ATVEthernetInterface
{
    struct __WiFiManagerClient * _wifiClient;
    NSString * _networkName;
}

@property (copy, nonatomic) NSString * networkName;
@property (readonly, nonatomic) float signalStrength;

+ (ATVWiFiInterface *)WiFiInterface;
+ (NSObject *)_interfaceType;
+ (char)_supportsInterface:(struct __SCNetworkInterface *)arg0;

- (void).cxx_destruct;
- (void)_updateWithServiceRef:(struct __SCNetworkService *)arg0 interfaceRef:(struct __SCNetworkInterface *)arg1;
- (struct __WiFiManagerClient *)_wifiClient;
- (float)signalStrength;
- (void)setNetworkName:(NSString *)arg0;
- (NSString *)networkName;

@end
