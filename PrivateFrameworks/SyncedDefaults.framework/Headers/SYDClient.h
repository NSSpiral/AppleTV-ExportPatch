/* Runtime dump - SYDClient
 * Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@interface SYDClient : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _connection;
    NSString * _bundleIdentifier;
    NSString * _storeIdentifier;
    char _additionalSource;
}

- (void)dealloc;
- (void)shutdown;
- (SYDClient *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 bundleIdentifier:(struct __CFString *)arg1 storeIdentifier:(struct __CFString *)arg2 additionalSource:(char)arg3;
- (void)_resetConnection;
- (void)_createConnectionIfNecessary;
- (NSString *)_newMessageWithName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (void)_sendMessageNoReply:(id /* block */)arg0;
- (id)_sendMessageWithReplySync:(id)arg0;
- (void)_sendMessage:(NSString *)arg0 replyHandler:(id /* block */)arg1;
- (SYDClient *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 bundleIdentifier:(struct __CFString *)arg1 storeIdentifier:(struct __CFString *)arg2;
- (void)sendMessageWithName:(NSString *)arg0;
- (NSString *)sendMessageWithName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (void)sendMessageWithName:(NSString *)arg0 replyHandler:(id /* block */)arg1;
- (void)sendMessageWithName:(NSString *)arg0 userInfo:(NSDictionary *)arg1 replyHandler:(id /* block */)arg2;
- (void)finalize;

@end
