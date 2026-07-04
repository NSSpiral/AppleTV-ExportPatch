/* Runtime dump - HMClientConnection
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMClientConnection : NSObject <HMMessageReceiver>
{
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMXpcClient * _xpcClient;
    HMMessageDispatcher * _msgDispatcher;
    NSUUID * _uuid;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (retain, nonatomic) HMXpcClient * xpcClient;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (retain, nonatomic) NSUUID * uuid;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

- (void)_registerToDaemon;
- (HMXpcClient *)xpcClient;
- (void)setXpcClient:(HMXpcClient *)arg0;
- (void)_reportResultsTohandler:(id)arg0;
- (HMClientConnection *)initWithNoValidation;
- (void)sendSiriCommand:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)dealloc;
- (HMClientConnection *)init;
- (void)_start;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (HMMessageDispatcher *)msgDispatcher;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (void)setUuid:(NSUUID *)arg0;

@end
