/* Runtime dump - NetworkChangeNotifier
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate>
{
    char _lastPostedNetworkUp;
    struct __SCDynamicStore * _store;
    NSString * _myIP;
    NSArray * _myIPs;
    IMConnectionMonitor * _connectionMonitor;
}

@property (readonly, nonatomic) char isNetworkUp;
@property (readonly, nonatomic) NSString * myGatewayAddress;
@property (readonly, nonatomic) NSString * myIPAddress;
@property (readonly, nonatomic) NSArray * myIPAddresses;
@property (readonly, nonatomic) struct __SCDynamicStore * getDynamicStore;
@property (nonatomic) struct __SCDynamicStore * store;
@property (nonatomic) char lastPostedNetworkUp;
@property (retain, nonatomic) IMConnectionMonitor * connectionMonitor;
@property (retain, nonatomic) NSString * myIP;
@property (retain, nonatomic) NSArray * myIPs;

+ (NetworkChangeNotifier *)sharedInstance;
+ (char)enableNotifications;
+ (void)disableNotifications;

- (struct __SCDynamicStore *)store;
- (void)setStore:(struct __SCDynamicStore *)arg0;
- (void)dealloc;
- (NetworkChangeNotifier *)init;
- (void)_clearIPCache;
- (char)_listenForChanges;
- (int)linkQualityValueForInterface:(id)arg0;
- (int)linkQualityValueForInterfaceType:(unsigned int)arg0;
- (void)connectionMonitorDidUpdate:(NSDate *)arg0;
- (NSArray *)myIPAddresses;
- (NSString *)myGatewayAddress;
- (NSString *)myIPAddress;
- (struct __SCDynamicStore *)getDynamicStore;
- (unsigned int)linkQualityForInterfaceType:(unsigned int)arg0;
- (char)isPrimaryCellular;
- (NSString *)primaryInterfaceName;
- (NSString *)myIP;
- (void)setMyIP:(NSString *)arg0;
- (NSArray *)myIPs;
- (void)setMyIPs:(NSArray *)arg0;
- (IMConnectionMonitor *)connectionMonitor;
- (void)setConnectionMonitor:(IMConnectionMonitor *)arg0;
- (char)lastPostedNetworkUp;
- (void)setLastPostedNetworkUp:(char)arg0;
- (void)systemDidWake;
- (void)systemWillSleep;
- (char)isNetworkUp;

@end
