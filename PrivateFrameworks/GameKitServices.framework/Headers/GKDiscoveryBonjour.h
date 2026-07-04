/* Runtime dump - GKDiscoveryBonjour
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKDiscoveryBonjour : NSObject
{
    NSString * _serviceType;
    NSString * _serviceDomain;
    struct _DNSServiceRef_t * _browseRef;
    struct _DNSServiceRef_t * _advertiseRef;
    id _browseCallback;
    id _connectionCallback;
    id _serviceNameCollisionCallback;
    char _checkedInWithLaunchd;
    NSMutableArray * _launchdSources;
    int _listeningPort;
    NSMutableDictionary * _resolveContainers;
    NSObject<OS_dispatch_queue> * _resolveContainersSyncQueue;
}

@property (copy, nonatomic) id connectionCallback;
@property (copy, nonatomic) id serviceNameCollisionCallback;
@property (copy, nonatomic) NSString * serviceType;
@property (copy, nonatomic) NSString * serviceDomain;
@property (nonatomic) struct _DNSServiceRef_t * browseRef;
@property (nonatomic) struct _DNSServiceRef_t * advertiseRef;
@property (retain, nonatomic) NSMutableArray * launchdSources;
@property (retain, nonatomic) NSMutableDictionary * resolveContainers;
@property (nonatomic) NSObject<OS_dispatch_queue> * resolveContainersSyncQueue;
@property (copy, nonatomic) id browseCallback;

- (void)dealloc;
- (GKDiscoveryBonjour *)init;
- (NSString *)serviceDomain;
- (void)setServiceDomain:(NSString *)arg0;
- (NSString *)serviceType;
- (GKDiscoveryBonjour *)initWithDomain:(NSString *)arg0 type:(NSObject *)arg1;
- (void)stopAdvertising;
- (void)stopBrowsing;
- (void)stopResolve:(id)arg0;
- (int)resolveName:(NSString *)arg0 onIndex:(unsigned int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setConnectionCallback:(id /* block */)arg0;
- (void)setServiceNameCollisionCallback:(id /* block */)arg0;
- (void)startAdvertisingServiceName:(NSString *)arg0 discoveryInfo:(NSDictionary *)arg1;
- (int)startBrowsing:(id)arg0;
- (void)closeListeningSockets;
- (void)setBrowseCallback:(id /* block */)arg0;
- (NSMutableDictionary *)resolveContainers;
- (id /* block */)connectionCallback;
- (NSMutableArray *)launchdSources;
- (int)ipV4Socket;
- (int)ipV6Socket;
- (void)createDispatchEventWithSocket:(int)arg0;
- (void)setupBothListeningSockets;
- (id /* block */)serviceNameCollisionCallback;
- (void)sendBonjourRegistrationEvent:(NSObject *)arg0 discoveryInfo:(NSDictionary *)arg1;
- (void)setupListeningSockets;
- (struct _DNSServiceRef_t *)browseRef;
- (void)setBrowseRef:(struct _DNSServiceRef_t *)arg0;
- (struct _DNSServiceRef_t *)advertiseRef;
- (void)setAdvertiseRef:(struct _DNSServiceRef_t *)arg0;
- (void)setLaunchdSources:(NSMutableArray *)arg0;
- (void)setResolveContainers:(NSMutableDictionary *)arg0;
- (id /* block */)browseCallback;
- (NSObject<OS_dispatch_queue> *)resolveContainersSyncQueue;
- (void)setResolveContainersSyncQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setServiceType:(NSString *)arg0;

@end
