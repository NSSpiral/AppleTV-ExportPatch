/* Runtime dump - WebBookmarksXPCConnection
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarksXPCConnection : NSObject
{
    <WebBookmarksXPCConnectionDelegate> * _delegate;
    NSMutableDictionary * _messageHandlers;
    NSMutableDictionary * _entitlementLookupCache;
    NSObject<OS_xpc_object> * _connection;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> * connection;

- (void)dealloc;
- (void)invalidate;
- (NSObject<OS_xpc_object> *)connection;
- (WebBookmarksXPCConnection *)initWithConnection:(NSObject<OS_xpc_object> *)arg0 delegate:(<WebBookmarksXPCConnectionDelegate> *)arg1;
- (void)sendMessage:(NSString *)arg0;
- (WebBookmarksXPCConnection *)initClientForMachService:(char *)arg0 delegate:(<WebBookmarksXPCConnectionDelegate> *)arg1;
- (NSString *)messageWithName:(char *)arg0;
- (void)setHandler:(id /* block */)arg0 forMessageNamed:(/* block */ id)arg1;
- (void)sendMessage:(NSString *)arg0 withReplyHandler:(id /* block */)arg1;
- (id)sendMessageWithSynchronousReply:(char)arg0;
- (void)_handleMessage:(NSString *)arg0;
- (void)setMessageHandlers:(NSMutableDictionary *)arg0;
- (char)hasBoolEntitlement:(id)arg0;
- (id)messageReplyingTo:(id)arg0;

@end
