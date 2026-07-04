/* Runtime dump - HMServiceGroup
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMServiceGroup : NSObject <HMMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
    NSString * _name;
    HMHome * _home;
    HMThreadSafeMutableArrayCollection * _currentServices;
    HMMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDelegateCaller * _delegateCaller;
}

@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSArray * services;
@property (readonly, copy, nonatomic) NSUUID * uniqueIdentifier;
@property (retain, nonatomic) HMThreadSafeMutableArrayCollection * currentServices;
@property (readonly, nonatomic) NSUUID * uuid;
@property (weak, nonatomic) HMHome * home;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (retain, nonatomic) HMDelegateCaller * delegateCaller;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

+ (char)supportsSecureCoding;

- (HMDelegateCaller *)delegateCaller;
- (void)setDelegateCaller:(HMDelegateCaller *)arg0;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_updateName:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)updateName:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (NSObject *)_findService:(NSObject *)arg0;
- (HMThreadSafeMutableArrayCollection *)currentServices;
- (void)_addService:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)_removeService:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)_handleServiceAddedNotification:(NSNotification *)arg0;
- (void)_handleServiceRemovedNotification:(NSNotification *)arg0;
- (void)_handleServiceGroupRenamedNotification:(NSNotification *)arg0;
- (HMServiceGroup *)initWithName:(NSString *)arg0 uuid:(NSUUID *)arg1;
- (void)_configure:(id)arg0 messageDispatcher:(HMDIDSMessageDispatcher *)arg1 clientQueue:(NSObject<OS_dispatch_queue> *)arg2 delegateCaller:(HMDelegateCaller *)arg3;
- (void)_removeServices:(UpdateAndReportServices *)arg0;
- (void)addService:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)removeService:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)setCurrentServices:(HMThreadSafeMutableArrayCollection *)arg0;
- (void)dealloc;
- (HMServiceGroup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMServiceGroup *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSUUID *)uniqueIdentifier;
- (void)_invalidate;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSArray *)services;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (HMMessageDispatcher *)msgDispatcher;
- (HMHome *)home;
- (void)setHome:(HMHome *)arg0;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (void)setClientQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end
