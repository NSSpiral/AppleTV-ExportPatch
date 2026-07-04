/* Runtime dump - HMDTrigger
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTrigger : NSObject <HMMessageReceiver, NSSecureCoding>
{
    char _active;
    NSString * _name;
    NSUUID * _uuid;
    HMDHome * _home;
    NSMutableArray * _currentActionSets;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMMessageDispatcher * _msgDispatcher;
    NSDate * _mostRecentFireDate;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSUUID * uuid;
@property (weak, nonatomic) HMDHome * home;
@property (retain, nonatomic) NSMutableArray * currentActionSets;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (nonatomic) char active;
@property (copy, nonatomic) NSDate * mostRecentFireDate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (HMDTrigger *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)invalidate;
- (char)active;
- (void)setActive:(char)arg0;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (HMDTrigger *)initWithName:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMMessageDispatcher *)msgDispatcher;
- (NSMutableArray *)actionSets;
- (void)activate:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)checkForNoActions;
- (HMDHome *)home;
- (void)setMostRecentFireDate:(NSDate *)arg0;
- (NSDate *)mostRecentFireDate;
- (void)sendTriggerFiredNotification:(NSNotification *)arg0;
- (void)setHome:(HMDHome *)arg0;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (void)_registerForMessages;
- (id)_updateActionSets:(id)arg0 add:(char)arg1;
- (void)_handleRenameRequest:(NSURLRequest *)arg0;
- (void)_handleUpdateActionSetRequest:(NSURLRequest *)arg0;
- (void)_handleActivateTriggerRequest:(NSURLRequest *)arg0;
- (char)shouldEncodeLastFireDate:(NSDate *)arg0;
- (char)containsAccessoryWithUUID:(id)arg0;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (void)removeActionSet:(NSSet *)arg0;
- (void)removeAccessory:(HMAccessory *)arg0;
- (void)reEvaluate;
- (void)triggerFired;
- (void)configure:(id)arg0 messageDispatcher:(HMDIDSMessageDispatcher *)arg1 queue:(NSObject *)arg2;
- (void)_executeActionSets;
- (NSMutableArray *)currentActionSets;
- (void)setCurrentActionSets:(NSMutableArray *)arg0;
- (void)setUuid:(NSUUID *)arg0;

@end
