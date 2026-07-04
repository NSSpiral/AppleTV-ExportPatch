/* Runtime dump - BRAirportManager
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRAirportManager : NSObject

+ (void)checkAirportPower;
+ (void)collectWirelessNetworks;
+ (char)prepareNetworkIfKnown:(id)arg0;
+ (struct __WiFiDeviceClient *)copyCurrentWiFiDeviceClient;
+ (float)getCurrentRawWirelessSignalStrength;
+ (int)currentWirelessChannel;
+ (BRAirportManager *)currentWirelessBSSID;
+ (char)currentNetworkIsManaged;
+ (char)forgetCurrentNetworkWithError:(id *)arg0;
+ (void)_configureWifiManager;
+ (void)_checkForNeedToSetupDevice;
+ (void)collectWirelessNetworksWithSSID:(id)arg0;
+ (int)getCurrentWirelessSignalStrengthForMaxBars:(unsigned char)arg0;
+ (char)forgetWiFiNetwork:(struct __WiFiNetwork *)arg0 error:(id *)arg1;
+ (void)setAirportEnabled:(char)arg0;
+ (NSString *)wirelessInterfaceName;
+ (void)updateManagedNetworks;
+ (int)getCurrentWirelessSignalStrength;
+ (char)associateWithNetwork:(NSString *)arg0 password:(NSString *)arg1 error:(id *)arg2;
+ (char)forgetNetwork:(id)arg0 error:(id *)arg1;
+ (void)_setupForDevice:(struct __WiFiDeviceClient *)arg0;
+ (void)initialize;

@end
