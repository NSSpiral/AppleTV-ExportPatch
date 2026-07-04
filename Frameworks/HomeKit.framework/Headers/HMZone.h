/* Runtime dump - HMZone
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMZone : NSObject <HMMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    NSUUID * _uniqueIdentifier;
    NSString * _name;
    HMHome * _home;
    NSUUID * _uuid;
    HMThreadSafeMutableArrayCollection * _currentRooms;
    HMMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDelegateCaller * _delegateCaller;
}

@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSArray * rooms;
@property (readonly, copy, nonatomic) NSUUID * uniqueIdentifier;
@property (retain, nonatomic) HMThreadSafeMutableArrayCollection * currentRooms;
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
- (HMZone *)initWithName:(NSString *)arg0 uuid:(NSUUID *)arg1;
- (void)_configure:(id)arg0 messageDispatcher:(HMDIDSMessageDispatcher *)arg1 clientQueue:(NSObject<OS_dispatch_queue> *)arg2 delegateCaller:(HMDelegateCaller *)arg3;
- (void)_handleRoomAddedNotification:(NSNotification *)arg0;
- (void)_handleRoomRemovedNotification:(NSNotification *)arg0;
- (void)_removeRoom:(HMRoom *)arg0;
- (void)_removeRoom:(HMRoom *)arg0 completionHandler:(id /* block */)arg1;
- (void)removeRoom:(HMRoom *)arg0 completionHandler:(id /* block */)arg1;
- (void)_addRoom:(HMRoom *)arg0 completionHandler:(id /* block */)arg1;
- (void)_handleZoneRenamedNotification:(NSNotification *)arg0;
- (void)addRoom:(HMRoom *)arg0 completionHandler:(id /* block */)arg1;
- (void)dealloc;
- (HMZone *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMZone *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSUUID *)uniqueIdentifier;
- (void)_invalidate;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (HMMessageDispatcher *)msgDispatcher;
- (HMHome *)home;
- (void)setHome:(HMHome *)arg0;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (void)setClientQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (id)roomWithUUID:(id)arg0;
- (NSArray *)rooms;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMThreadSafeMutableArrayCollection *)currentRooms;
- (void)setCurrentRooms:(HMThreadSafeMutableArrayCollection *)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;
- (void)setUuid:(NSUUID *)arg0;

@end
