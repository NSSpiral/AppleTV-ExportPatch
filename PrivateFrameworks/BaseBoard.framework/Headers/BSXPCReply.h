/* Runtime dump - BSXPCReply
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSXPCReply : NSObject
{
    NSObject<OS_xpc_object> * _message;
}

+ (BSXPCReply *)messageWithReply:(id /* block */)arg0;

- (void)dealloc;
- (NSObject<OS_xpc_object> *)message;
- (BSXPCReply *)initWithReply:(id /* block */)arg0;
- (long long)messageKind;
- (void)sendReply:(id /* block */)arg0;

@end
