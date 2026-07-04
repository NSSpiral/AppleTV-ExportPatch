/* Runtime dump - ATVEthernetInterface
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVEthernetInterface : ATVNetworkInterface
{
    char _active;
    char _shouldUseDHCP;
    char _shouldUseManualDNS;
    NSString * _IPAddress;
    NSString * _subnetMask;
    NSString * _routerAddress;
    NSArray * _dnsAddresses;
}

@property (copy, nonatomic) NSString * IPAddress;
@property (nonatomic) char shouldUseDHCP;
@property (nonatomic) char shouldUseManualDNS;
@property (copy, nonatomic) NSString * subnetMask;
@property (copy, nonatomic) NSString * routerAddress;
@property (copy, nonatomic) NSArray * dnsAddresses;
@property (nonatomic) char active;

+ (ATVEthernetInterface *)RJ45EthernetInterface;
+ (NSObject *)_interfaceType;
+ (char)_supportsInterface:(struct __SCNetworkInterface *)arg0;

- (NSString *)description;
- (char)isActive;
- (void)setActive:(char)arg0;
- (void).cxx_destruct;
- (void)setIPAddress:(NSString *)arg0;
- (void)_updateWithServiceRef:(struct __SCNetworkService *)arg0 interfaceRef:(struct __SCNetworkInterface *)arg1;
- (NSString *)IPAddress;
- (char)shouldUseDHCP;
- (NSString *)subnetMask;
- (NSString *)routerAddress;
- (NSArray *)dnsAddresses;
- (void)setShouldUseDHCP:(char)arg0;
- (NSObject *)_dnsAddressesForService:(struct __CFString *)arg0 domain:(struct __CFString *)arg1;
- (void)setShouldUseManualDNS:(char)arg0;
- (void)setDnsAddresses:(NSArray *)arg0;
- (void)setSubnetMask:(NSString *)arg0;
- (void)setRouterAddress:(NSString *)arg0;
- (char)shouldUseManualDNS;

@end
