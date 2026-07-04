/* Runtime dump - HMDAccessoryBrowser
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryBrowser : NSObject <HMDAccessoryManagerDelegate, HMMessageReceiver>
{
    NSObject<OS_dispatch_queue> * _workQueue;
    NSUUID * _uuid;
    HMMessageDispatcher * _messageDispatcher;
    HMDAccessoryManager * _accessoryManager;
    unsigned int _generationCounter;
    NSMutableSet * _browsingXPCConnections;
    NSHashTable * _unpairedAccessories;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) NSUUID * uuid;
@property (retain, nonatomic) HMMessageDispatcher * messageDispatcher;
@property (retain, nonatomic) HMDAccessoryManager * accessoryManager;
@property (nonatomic) unsigned int generationCounter;
@property (retain, nonatomic) NSMutableSet * browsingXPCConnections;
@property (readonly, nonatomic) NSHashTable * unpairedAccessories;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)_registerForMessages;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (void)setAccessoryManager:(HMDAccessoryManager *)arg0;
- (void)setMessageDispatcher:(HMMessageDispatcher *)arg0;
- (HMMessageDispatcher *)messageDispatcher;
- (HMDAccessoryManager *)accessoryManager;
- (HMDAccessoryBrowser *)initWithMessageDispatcher:(HMMessageDispatcher *)arg0 accessoryManager:(HMDAccessoryManager *)arg1;
- (NSHashTable *)unpairedAccessories;
- (void)accessoryManager:(HMDAccessoryManager *)arg0 didFindNewAccessory:(HMDAccessory *)arg1;
- (void)accessoryManager:(HMDAccessoryManager *)arg0 didRemoveNewAccessory:(HMDAccessory *)arg1;
- (void)_handleRequestFetchNewAccessories:(id)arg0;
- (void)_handleRequestSearchForNewAccessories:(id)arg0;
- (void)_handleInvalidatedXPCConnection:(NSURLConnection *)arg0;
- (unsigned int)generationCounter;
- (NSMutableSet *)browsingXPCConnections;
- (void)_startDiscoveringAccessories;
- (void)_stopSearchingWithXPCConnection:(NSURLConnection *)arg0;
- (void)_stopDiscoveringAccessories;
- (void)setGenerationCounter:(unsigned int)arg0;
- (void)setBrowsingXPCConnections:(NSMutableSet *)arg0;
- (void)setUuid:(NSUUID *)arg0;

@end
