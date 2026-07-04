/* Runtime dump - HMDZone
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDZone : NSObject <HMMessageReceiver, NSSecureCoding>
{
    NSString * _name;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableArray * _currentRooms;
    HMDHome * _home;
    HMMessageDispatcher * _msgDispatcher;
}

@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) NSUUID * uuid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) NSMutableArray * currentRooms;
@property (weak, nonatomic) HMDHome * home;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (HMDZone *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSURL *)url;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMMessageDispatcher *)msgDispatcher;
- (HMDHome *)home;
- (void)setHome:(HMDHome *)arg0;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (void)_registerForMessages;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (id)roomWithUUID:(id)arg0;
- (void)configure:(id)arg0 queue:(NSObject *)arg1;
- (NSMutableArray *)rooms;
- (void)_handleRename:(id)arg0;
- (void)_handleAddRoom:(id)arg0;
- (void)_handleRemoveRoom:(id)arg0;
- (NSString *)roomWithName:(NSString *)arg0;
- (void)removeRoom:(HMRoom *)arg0;
- (HMDZone *)initWithName:(NSString *)arg0 uuid:(NSUUID *)arg1 home:(HMDHome *)arg2 queue:(NSObject *)arg3;
- (NSMutableArray *)currentRooms;
- (void)setCurrentRooms:(NSMutableArray *)arg0;
- (NSString *)assistantUniqueIdentifier;

@end
