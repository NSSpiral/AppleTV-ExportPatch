/* Runtime dump - HMTrigger
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMTrigger : NSObject <HMMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    char _enabled;
    NSString * _name;
    NSUUID * _uniqueIdentifier;
    NSDate * _lastFireDate;
    NSUUID * _uuid;
    HMHome * _home;
    HMThreadSafeMutableArrayCollection * _currentActionSets;
    HMMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDelegateCaller * _delegateCaller;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) char enabled;
@property (readonly, copy, nonatomic) NSArray * actionSets;
@property (copy, nonatomic) NSDate * lastFireDate;
@property (readonly, copy, nonatomic) NSUUID * uniqueIdentifier;
@property (retain, nonatomic) NSUUID * uuid;
@property (retain, nonatomic) HMThreadSafeMutableArrayCollection * currentActionSets;
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
- (void)setLastFireDate:(NSDate *)arg0;
- (id)_serializeForAdd;
- (void)setDelegateCaller:(HMDelegateCaller *)arg0;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_addActionSet:(NSSet *)arg0 completionHandler:(id /* block */)arg1;
- (void)_updateActionSet:(NSSet *)arg0 add:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeActionSet:(NSSet *)arg0 completionHandler:(id /* block */)arg1;
- (void)_updateName:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)_enable:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)_handleTriggerFired:(id)arg0;
- (void)_handleUpdatedActionSetNotification:(NSNotification *)arg0;
- (void)_handleTriggerRenamedNotification:(NSNotification *)arg0;
- (void)_handleTriggerActivatedNotification:(NSNotification *)arg0;
- (void)_handleTriggerFiredNotification:(NSNotification *)arg0;
- (NSDate *)lastFireDate;
- (void)_configure:(id)arg0 uuid:(NSUUID *)arg1 messageDispatcher:(HMDIDSMessageDispatcher *)arg2 clientQueue:(NSObject<OS_dispatch_queue> *)arg3 delegateCaller:(HMDelegateCaller *)arg4;
- (void)addActionSet:(NSSet *)arg0 completionHandler:(id /* block */)arg1;
- (void)removeActionSet:(NSSet *)arg0 completionHandler:(id /* block */)arg1;
- (void)updateName:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)enable:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)dealloc;
- (HMTrigger *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (NSUUID *)uniqueIdentifier;
- (void)_invalidate;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (HMTrigger *)initWithName:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (HMMessageDispatcher *)msgDispatcher;
- (NSArray *)actionSets;
- (HMHome *)home;
- (void)setHome:(HMHome *)arg0;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (HMThreadSafeMutableArrayCollection *)currentActionSets;
- (void)setCurrentActionSets:(HMThreadSafeMutableArrayCollection *)arg0;
- (void)setClientQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;
- (void)setUuid:(NSUUID *)arg0;

@end
