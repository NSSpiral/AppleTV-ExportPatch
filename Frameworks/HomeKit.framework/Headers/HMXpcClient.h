/* Runtime dump - HMXpcClient
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMXpcClient : NSObject <HMMessageTransport>
{
    char _connectionValid;
    char _requiresCheckin;
    char _notifyRegistered;
    HMMessageDispatcher * _messageDispatcher;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    int _notifyRegisterToken;
    id _reconnectionHandler;
}

@property (readonly, nonatomic) HMMessageDispatcher * messageDispatcher;
@property (retain, nonatomic) NSXPCConnection * xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * callbackQueue;
@property (nonatomic) char connectionValid;
@property (nonatomic) char requiresCheckin;
@property (nonatomic) int notifyRegisterToken;
@property (nonatomic) char notifyRegistered;
@property (copy, nonatomic) id reconnectionHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)notifyRegistered;
- (int)notifyRegisterToken;
- (char)connectionValid;
- (id /* block */)reconnectionHandler;
- (void)setRequiresCheckin:(char)arg0;
- (void)setConnectionValid:(char)arg0;
- (void)setNotifyRegisterToken:(int)arg0;
- (void)setNotifyRegistered:(char)arg0;
- (void)setReconnectionHandler:(id /* block */)arg0;
- (void)recheckinIfRequired:(id)arg0;
- (char)requiresCheckin;
- (void)registerReconnectionHandler:(id /* block */)arg0;
- (void)dealloc;
- (HMXpcClient *)init;
- (void).cxx_destruct;
- (NSURLConnection *)connection;
- (NSObject<OS_dispatch_queue> *)callbackQueue;
- (void)setCallbackQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMMessageDispatcher *)messageDispatcher;
- (void)handleMessageWithName:(NSString *)arg0 messageIdentifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 target:(NSUUID *)arg3;
- (void)handleMessageWithName:(NSString *)arg0 messageIdentifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 target:(NSUUID *)arg3 responseHandler:(NSObject<OS_xpc_object> *)arg4;
- (NSXPCConnection *)xpcConnection;
- (void)setXpcConnection:(NSXPCConnection *)arg0;

@end
