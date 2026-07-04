/* Runtime dump - HMDRoom
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRoom : NSObject <HMMessageReceiver, NSSecureCoding>
{
    NSString * _name;
    NSUUID * _uuid;
    HMDHome * _home;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMMessageDispatcher * _msgDispatcher;
}

@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) NSUUID * uuid;
@property (weak, nonatomic) HMDHome * home;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (HMDRoom *)initWithCoder:(NSCoder *)arg0;
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
- (void)_handleRenameRequest:(NSURLRequest *)arg0;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (HMDRoom *)initWithName:(NSString *)arg0 uuid:(NSUUID *)arg1 home:(HMDHome *)arg2;
- (void)configure:(id)arg0 queue:(NSObject *)arg1;
- (NSString *)assistantUniqueIdentifier;

@end
