/* Runtime dump - HMAccessoryBrowser
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryBrowser : NSObject <HMMessageReceiver>
{
    char _browsing;
    <HMAccessoryBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDelegateCaller * _delegateCaller;
    NSUUID * _uuid;
    HMThreadSafeMutableArrayCollection * _accessories;
    HMXpcClient * _xpcClient;
    HMMessageDispatcher * _msgDispatcher;
    unsigned int _generationCounter;
}

@property (weak, nonatomic) <HMAccessoryBrowserDelegate> * delegate;
@property (readonly, copy, nonatomic) NSArray * discoveredAccessories;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (retain, nonatomic) HMDelegateCaller * delegateCaller;
@property (retain, nonatomic) NSUUID * uuid;
@property (retain, nonatomic) HMThreadSafeMutableArrayCollection * accessories;
@property (retain, nonatomic) HMXpcClient * xpcClient;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (nonatomic) unsigned int generationCounter;
@property (nonatomic) char browsing;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

- (HMDelegateCaller *)delegateCaller;
- (void)setDelegateCaller:(HMDelegateCaller *)arg0;
- (void)_registerNotificationHandlers;
- (HMXpcClient *)xpcClient;
- (void)setXpcClient:(HMXpcClient *)arg0;
- (void)_startSearchingForNewAccessories;
- (void)_fetchNewAccessoriesWithPrivacyCheck;
- (void)setBrowsing:(char)arg0;
- (void)_stopSearchingForNewAccessories;
- (void)_fetchNewAccessories;
- (void)_updateNewAccessories:(id)arg0;
- (NSArray *)discoveredAccessories;
- (void)_handleNewAccessoriesFound:(id)arg0;
- (void)_handleNewAccessoriesRemoved:(id)arg0;
- (void)startSearchingForNewAccessories;
- (void)stopSearchingForNewAccessories;
- (char)isBrowsing;
- (void)dealloc;
- (void)setDelegate:(<HMAccessoryBrowserDelegate> *)arg0;
- (HMAccessoryBrowser *)init;
- (<HMAccessoryBrowserDelegate> *)delegate;
- (void)_start;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (void)setAccessories:(HMThreadSafeMutableArrayCollection *)arg0;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (HMThreadSafeMutableArrayCollection *)accessories;
- (HMAccessoryBrowser *)initWithDelegate:(<HMAccessoryBrowserDelegate> *)arg0 queue:(NSObject *)arg1;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (HMMessageDispatcher *)msgDispatcher;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (unsigned int)generationCounter;
- (void)setGenerationCounter:(unsigned int)arg0;
- (void)setUuid:(NSUUID *)arg0;

@end
