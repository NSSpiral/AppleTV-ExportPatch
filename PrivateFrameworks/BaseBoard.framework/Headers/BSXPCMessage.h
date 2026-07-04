/* Runtime dump - BSXPCMessage
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSXPCMessage : NSObject
{
    NSObject<OS_xpc_object> * _message;
    id _replyHandler;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

+ (void)sendMessageWithPacker:(id)arg0 toConnection:(/* block */ id)arg1;
+ (void)sendMessageWithPacker:(id)arg0 toConnection:(/* block */ id)arg1 replyHandler:(id /* block */)arg2 replyQueue:(NSObject<OS_dispatch_queue> *)arg3;
+ (void)sendMessage:(long long)arg0 toConnection:(NSURLConnection *)arg1 withMessagePacker:(NSObject<OS_xpc_object> *)arg2 replyHandler:(/* block */ id)arg3 replyQueue:(NSObject<OS_dispatch_queue> *)arg4;
+ (NSString *)message:(long long)arg0 withPacker:(SKTextureAtlasPacker *)arg1 replyHandler:(/* block */ id)arg2 replyQueue:(NSObject<OS_dispatch_queue> *)arg3;
+ (char *)messageTypeKey;
+ (void)sendMessage:(long long)arg0 toConnection:(NSURLConnection *)arg1 withMessagePacker:(NSObject<OS_xpc_object> *)arg2;
+ (NSString *)message:(long long)arg0 withPacker:(SKTextureAtlasPacker *)arg1;
+ (BSXPCMessage *)messageWithPacker:(id)arg0 replyHandler:(/* block */ id)arg1 replyQueue:(NSObject<OS_dispatch_queue> *)arg2;

- (void)dealloc;
- (BSXPCMessage *)initWithMessagePacker:(NSObject<OS_xpc_object> *)arg0 replyHandler:(/* block */ id)arg1 replyQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (BSXPCMessage *)initWithMessage:(long long)arg0 packer:(SKTextureAtlasPacker *)arg1 replyHandler:(/* block */ id)arg2 replyQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (BSXPCMessage *)initWithMessage:(NSObject<OS_xpc_object> *)arg0 replyHandler:(id /* block */)arg1 replyQueue:(/* block */ id)arg2;
- (void)sendToConnection:(NSURLConnection *)arg0;
- (void)forcefullyInvokeReplyHandler:(id /* block */)arg0;

@end
