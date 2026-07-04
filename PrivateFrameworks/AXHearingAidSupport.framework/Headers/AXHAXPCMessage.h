/* Runtime dump - AXHAXPCMessage
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAXPCMessage : AXHAMessage
{
    AXHAXPCClient * _client;
    NSObject<OS_xpc_object> * _xpcPayload;
    NSObject<OS_xpc_object> * _xpcMessage;
}

@property (nonatomic) AXHAXPCClient * client;
@property (readonly, retain, nonatomic) NSObject<OS_xpc_object> * xpcPayload;
@property (retain, nonatomic) NSObject<OS_xpc_object> * xpcMessage;

+ (NSData *)messageWithPayload:(NSData *)arg0 xpcMessage:(NSObject<OS_xpc_object> *)arg1 andClient:(NSObject *)arg2;

- (void)dealloc;
- (NSData *)replyMessageWithPayload:(NSData *)arg0;
- (NSObject<OS_xpc_object> *)xpcPayload;
- (void)setXpcMessage:(NSObject<OS_xpc_object> *)arg0;
- (NSObject<OS_xpc_object> *)xpcMessage;
- (void)setClient:(AXHAXPCClient *)arg0;
- (AXHAXPCClient *)client;

@end
