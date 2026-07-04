/* Runtime dump - BRIPConfiguration
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRIPConfiguration : NSObject
{
    NSString * _wirelessNetwork;
    NSString * _wirelessMACAddress;
    NSString * _wirelessIPAddress;
    NSString * _wirelessSubnetMask;
    NSString * _wirelessRouter;
    NSArray * _wirelessDNSAddresses;
    NSString * _wiredMACAddress;
    NSString * _wiredIPAddress;
    NSString * _wiredSubnetMask;
    NSString * _wiredRouter;
    NSArray * _wiredDNSAddresses;
    id _wirelessUseDHCP;
    char _wirelessUseManualDNS;
    id _wirelessActive;
    id _wiredUseDHCP;
    char _wiredUseManualDNS;
    id _wiredActive;
}

+ (void)startMonitoringNetworkChanges;
+ (NSString *)ipAddressesForHostName:(NSString *)arg0;
+ (BRIPConfiguration *)currentConfiguration;
+ (char)internetServerReachable:(id)arg0;
+ (char)usingWireless;
+ (struct __CFDictionary *)proxiesDictionaryRef;
+ (void)_pushWirelessUsageValues;
+ (struct __SCDynamicStore *)_dynamicStoreSingleton;

- (char)isActiveForInterface:(int)arg0;
- (id)dnsAddressesForInterface:(int)arg0;
- (long)wirelessSignalQuality;
- (id)MACaddressForInterface:(int)arg0;
- (NSString *)wirelessNetwork;
- (char)useDHCPForInterface:(int)arg0;
- (id)IPaddressForInterface:(int)arg0;
- (id)subnetMaskForInterface:(int)arg0;
- (id)routerForInterface:(int)arg0;
- (void)setUseDHCPForInterface:(int)arg0;
- (void)setAddress:(NSString *)arg0 subnetMask:(NSString *)arg1 router:(NSString *)arg2 forInterface:(int)arg3;
- (void)setDNSAddresses:(id)arg0 forInterface:(int)arg1;
- (void)setUseManualDNSForInterface:(int)arg0;
- (char)useManualDNSForInterface:(int)arg0;
- (void)_examineService:(struct __SCNetworkService *)arg0 usingStore:(struct __SCDynamicStore *)arg1;
- (BRIPConfiguration *)initFromCurrentConfiguration;
- (id)MACAddressForActiveInterface;
- (void)_getStateForServiceID:(NSObject *)arg0 usingStore:(struct __SCDynamicStore *)arg1 ipAddress:(id *)arg2 mask:(id *)arg3 router:(id *)arg4;
- (char)_isActiveForInterface:(id)arg0 usingStore:(struct __SCDynamicStore *)arg1;
- (NSObject *)_dnsAddressesForServiceID:(NSObject *)arg0 usingStore:(struct __SCDynamicStore *)arg1;
- (char)_usesManualDNSForServiceID:(NSObject *)arg0 usingStore:(struct __SCDynamicStore *)arg1;
- (void)_getWirelessNetworkStateUsingStore:(struct __SCDynamicStore *)arg0;
- (char)_setDHCPForService:(struct __SCNetworkService *)arg0;
- (char)_setIPAddress:(NSString *)arg0 subnetMask:(NSString *)arg1 router:(NSString *)arg2 forService:(struct __SCNetworkService *)arg3;
- (char)_setDNSAddress:(NSString *)arg0 forService:(struct __SCNetworkService *)arg1;
- (void)dealloc;
- (NSString *)description;

@end
