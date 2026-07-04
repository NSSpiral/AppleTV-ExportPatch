/* Runtime dump - CUTNetworkInterfaceListener
 * Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTNetworkInterfaceListener : NSObject
{
    void * _dynamicStore;
    NSHashTable * _delegateMap;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    int _wifiState;
    int _cellState;
    NSSet * _IPv6Addresses;
    NSSet * _IPv4Addresses;
}

@property (readonly, nonatomic) int wifiState;
@property (readonly, nonatomic) int cellState;
@property (readonly, retain, nonatomic) NSSet * IPv6Addresses;
@property (readonly, retain, nonatomic) NSSet * IPv4Addresses;

+ (CUTNetworkInterfaceListener *)sharedInstance;

- (void)addDelegate:(NSObject *)arg0;
- (CUTNetworkInterfaceListener *)retain;
- (void)release;
- (void)dealloc;
- (CUTNetworkInterfaceListener *)init;
- (CUTNetworkInterfaceListener *)autorelease;
- (unsigned int)retainCount;
- (NSObject *)allocWithZone:(struct _NSZone *)arg0;
- (CUTNetworkInterfaceListener *)copyWithZone:(struct _NSZone *)arg0;
- (void)_notifyDelegatesOfAddressChange:(NSDictionary *)arg0 isIPv6:(char)arg1;
- (void)_notifyDelegatesOfCellChange:(int)arg0;
- (void)_notifyDelegatesOfWifiChange:(int)arg0;
- (void)_handleNetworkChange:(NSDictionary *)arg0;
- (int)wifiState;
- (NSSet *)IPv6Addresses;
- (NSSet *)IPv4Addresses;
- (void)removeDelegate:(NSObject *)arg0;
- (int)cellState;

@end
