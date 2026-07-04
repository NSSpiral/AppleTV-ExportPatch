/* Runtime dump - HMDActionSet
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDActionSet : NSObject <HMMessageReceiver, NSSecureCoding>
{
    char _executionInProgress;
    NSString * _name;
    NSString * _type;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMMessageDispatcher * _msgDispatcher;
    HMDHome * _home;
    NSMutableArray * _currentActions;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * type;
@property (readonly, nonatomic) NSUUID * uuid;
@property (readonly, nonatomic) NSArray * actions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (weak, nonatomic) HMDHome * home;
@property (retain, nonatomic) NSMutableArray * currentActions;
@property (nonatomic) char executionInProgress;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (HMDActionSet *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSArray *)actions;
- (NSURL *)url;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (void)execute:(id)arg0;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMMessageDispatcher *)msgDispatcher;
- (HMDHome *)home;
- (void)setHome:(HMDHome *)arg0;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (void)_registerForMessages;
- (void)executeWithTriggerSource:(NSObject *)arg0;
- (void)_handleRenameRequest:(NSURLRequest *)arg0;
- (char)containsAccessoryWithUUID:(id)arg0;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (void)removeAccessory:(HMAccessory *)arg0;
- (void)fixupActionsForReplacementAccessory:(id)arg0;
- (void)configure:(id)arg0 queue:(NSObject *)arg1;
- (HMDActionSet *)initWithName:(NSString *)arg0 uuid:(NSUUID *)arg1 type:(NSString *)arg2 home:(HMDHome *)arg3 queue:(NSObject *)arg4;
- (void)removeActionForCharacteristic:(id)arg0;
- (void)removeService:(NSObject *)arg0;
- (void)_execute:(id)arg0 writeRequestTuples:(/* block */ id)arg1;
- (void)_removeAction:(NSObject *)arg0 message:(NSString *)arg1;
- (NSMutableArray *)currentActions;
- (void)_handleAddActionRequest:(NSURLRequest *)arg0;
- (void)_handleRemoveActionRequest:(NSURLRequest *)arg0;
- (void)_handleReplaceActionValueRequest:(NSURLRequest *)arg0;
- (id)actionWithUUID:(id)arg0;
- (char)executionInProgress;
- (void)setExecutionInProgress:(char)arg0;
- (NSError *)_generateOverallError:(NSError *)arg0;
- (id)allCharacteristicsInActionsForServices:(id)arg0;
- (void)setCurrentActions:(NSMutableArray *)arg0;
- (NSString *)assistantUniqueIdentifier;

@end
