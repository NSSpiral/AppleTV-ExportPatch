/* Runtime dump - HMXpcClientConnectionProxy
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMXpcClientConnectionProxy : NSObject <HMMessageTransport>
{
    HMMessageDispatcher * _recvDispatcher;
    id _refreshHandler;
}

@property (retain, nonatomic) HMMessageDispatcher * recvDispatcher;
@property (copy, nonatomic) id refreshHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (id /* block */)refreshHandler;
- (HMXpcClientConnectionProxy *)initWithMessageDispatcher:(HMMessageDispatcher *)arg0 refreshHandler:(id /* block */)arg1;
- (void)setRefreshHandler:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)handleMessageWithName:(NSString *)arg0 messageIdentifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 target:(NSUUID *)arg3;
- (void)handleMessageWithName:(NSString *)arg0 messageIdentifier:(NSUUID *)arg1 messagePayload:(NSDictionary *)arg2 target:(NSUUID *)arg3 responseHandler:(NSObject<OS_xpc_object> *)arg4;
- (HMMessageDispatcher *)recvDispatcher;
- (void)setRecvDispatcher:(HMMessageDispatcher *)arg0;

@end
