/* Runtime dump - HMRoom
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMRoom : NSObject <NSSecureCoding, HMMessageReceiver, HMObjectMerge>
{
    NSUUID * _uniqueIdentifier;
    NSString * _name;
    NSUUID * _uuid;
    HMHome * _home;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDelegateCaller * _delegateCaller;
    HMMessageDispatcher * _msgDispatcher;
}

@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSArray * accessories;
@property (readonly, copy, nonatomic) NSUUID * uniqueIdentifier;
@property (weak, nonatomic) HMHome * home;
@property (retain, nonatomic) NSUUID * uuid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (retain, nonatomic) HMDelegateCaller * delegateCaller;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
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
- (void)_configure:(id)arg0 uuid:(NSUUID *)arg1 messageDispatcher:(HMDIDSMessageDispatcher *)arg2 clientQueue:(NSObject<OS_dispatch_queue> *)arg3 delegateCaller:(HMDelegateCaller *)arg4;
- (void)updateName:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)_updateRoomName:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)_handleRoomRenamedNotification:(NSNotification *)arg0;
- (void)dealloc;
- (HMRoom *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMRoom *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSUUID *)uniqueIdentifier;
- (void)_invalidate;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (HMRoom *)initWithName:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSArray *)accessories;
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
- (void)setUuid:(NSUUID *)arg0;

@end
