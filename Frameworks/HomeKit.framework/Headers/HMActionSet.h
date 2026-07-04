/* Runtime dump - HMActionSet
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMActionSet : NSObject <HMMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    char _executing;
    NSUUID * _uniqueIdentifier;
    NSString * _name;
    HMHome * _home;
    NSString * _actionSetType;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDelegateCaller * _delegateCaller;
    HMMessageDispatcher * _msgDispatcher;
    HMThreadSafeMutableArrayCollection * _currentActions;
}

@property (copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSSet * actions;
@property (readonly, nonatomic) char executing;
@property (readonly, copy, nonatomic) NSString * actionSetType;
@property (readonly, copy, nonatomic) NSUUID * uniqueIdentifier;
@property (weak, nonatomic) HMHome * home;
@property (readonly, nonatomic) NSUUID * uuid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (retain, nonatomic) HMDelegateCaller * delegateCaller;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (retain, nonatomic) HMThreadSafeMutableArrayCollection * currentActions;
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
- (void)_updateAction:(NSObject *)arg0 changes:(MSASPendingChanges *)arg1 completionHandler:(id /* block */)arg2;
- (void)_configure:(id)arg0 messageDispatcher:(HMDIDSMessageDispatcher *)arg1 clientQueue:(NSObject<OS_dispatch_queue> *)arg2 delegateCaller:(HMDelegateCaller *)arg3;
- (HMActionSet *)initWithName:(NSString *)arg0 type:(NSObject *)arg1 uuid:(NSUUID *)arg2;
- (void)_addAction:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)_removeAction:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)_handleActionAddedNotification:(NSNotification *)arg0;
- (void)_handleActionRemovedNotification:(NSNotification *)arg0;
- (void)_handleActionUpdatedNotification:(NSNotification *)arg0;
- (void)_handleActionSetRenamedNotification:(NSNotification *)arg0;
- (NSDictionary *)_lookupActionWithInfo:(NSDictionary *)arg0;
- (void)addAction:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)removeAction:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (NSString *)actionSetType;
- (void)dealloc;
- (HMActionSet *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMActionSet *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSSet *)actions;
- (NSUUID *)uniqueIdentifier;
- (void)_invalidate;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (char)isExecuting;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (HMMessageDispatcher *)msgDispatcher;
- (HMHome *)home;
- (void)setHome:(HMHome *)arg0;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (void)setClientQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMThreadSafeMutableArrayCollection *)currentActions;
- (void)setCurrentActions:(HMThreadSafeMutableArrayCollection *)arg0;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end
