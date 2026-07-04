/* Runtime dump - HMDMainDriver
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMainDriver : NSObject
{
    NSObject<OS_dispatch_queue> * _workQueue;
    HMDHomeManager * _homeManager;
    HMDAccessoryBrowser * _accessoryBrowser;
    HMDXpcServer * _xpcServer;
    HMDIDSMessageDispatcher * _messageDispatcher;
    HMMessageDispatcher * _notificationRelayDispatcher;
    HMDCloudDataSyncManager * _cloudDataSyncManager;
    HMDIDSMessageTransport * _idsTransport;
    HMDIDSMessageTransport * _idsProxyTransport;
    HMDAccessoryManager * _accessoryManager;
    NSMutableArray * _unpairedAccessories;
    HMDMessageFilterChain * _msgFilterChain;
    HMDIdentityRegistry * _identityRegistry;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) HMDHomeManager * homeManager;
@property (retain, nonatomic) HMDAccessoryBrowser * accessoryBrowser;
@property (retain, nonatomic) HMDXpcServer * xpcServer;
@property (retain, nonatomic) HMDIDSMessageDispatcher * messageDispatcher;
@property (retain, nonatomic) HMMessageDispatcher * notificationRelayDispatcher;
@property (retain, nonatomic) HMDCloudDataSyncManager * cloudDataSyncManager;
@property (retain, nonatomic) HMDIDSMessageTransport * idsTransport;
@property (retain, nonatomic) HMDIDSMessageTransport * idsProxyTransport;
@property (retain, nonatomic) HMDAccessoryManager * accessoryManager;
@property (retain, nonatomic) NSMutableArray * unpairedAccessories;
@property (retain, nonatomic) HMDMessageFilterChain * msgFilterChain;
@property (retain, nonatomic) HMDIdentityRegistry * identityRegistry;

+ (HMDMainDriver *)driver;

- (HMDMainDriver *)init;
- (void)start;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMDHomeManager *)homeManager;
- (void)executeBTAJob:(char *)arg0 withXPCDict:(id)arg1;
- (void)logError:(NSError *)arg0 component:(_UIDatePickerComponent *)arg1;
- (void)setAccessoryManager:(HMDAccessoryManager *)arg0;
- (void)setNotificationRelayDispatcher:(HMMessageDispatcher *)arg0;
- (void)setMsgFilterChain:(HMDMessageFilterChain *)arg0;
- (void)setIdentityRegistry:(HMDIdentityRegistry *)arg0;
- (void)setIdsTransport:(HMDIDSMessageTransport *)arg0;
- (void)setIdsProxyTransport:(HMDIDSMessageTransport *)arg0;
- (HMDIDSMessageTransport *)idsTransport;
- (HMDIDSMessageTransport *)idsProxyTransport;
- (HMDMessageFilterChain *)msgFilterChain;
- (HMDIdentityRegistry *)identityRegistry;
- (HMMessageDispatcher *)notificationRelayDispatcher;
- (void)setMessageDispatcher:(HMDIDSMessageDispatcher *)arg0;
- (void)setXpcServer:(HMDXpcServer *)arg0;
- (HMDIDSMessageDispatcher *)messageDispatcher;
- (HMDXpcServer *)xpcServer;
- (HMDAccessoryManager *)accessoryManager;
- (void)setAccessoryBrowser:(HMDAccessoryBrowser *)arg0;
- (void)initBackgroundTaskAgent;
- (void)setHomeManager:(HMDHomeManager *)arg0;
- (HMDAccessoryBrowser *)accessoryBrowser;
- (HMDCloudDataSyncManager *)cloudDataSyncManager;
- (void)setCloudDataSyncManager:(HMDCloudDataSyncManager *)arg0;
- (NSMutableArray *)unpairedAccessories;
- (void)setUnpairedAccessories:(NSMutableArray *)arg0;

@end
