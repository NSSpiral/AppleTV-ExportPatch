/* Runtime dump - PLClientLogger
 * Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

@interface PLClientLogger : NSObject
{
    char _clientDebug;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_queue> * _permissionQueue;
    NSString * _processName;
    NSMutableDictionary * _permissionCache;
    NSMutableDictionary * _pendingTaskCache;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property char clientDebug;
@property (retain) NSObject<OS_dispatch_queue> * workQueue;
@property (retain) NSObject<OS_dispatch_queue> * permissionQueue;
@property (retain) NSString * processName;
@property (retain) NSMutableDictionary * permissionCache;
@property (retain) NSMutableDictionary * pendingTaskCache;
@property (retain) NSObject<OS_dispatch_queue> * xpcConnectionQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> * xpcConnection;

+ (PLClientLogger *)sharedInstance;

- (PLClientLogger *)init;
- (NSString *)processName;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSMutableDictionary *)pendingTaskCache;
- (char)clientDebug;
- (void)setClientDebug:(char)arg0;
- (void)setPendingTaskCache:(NSMutableDictionary *)arg0;
- (NSObject<OS_dispatch_queue> *)xpcConnectionQueue;
- (short)cachedPermissionForClientID:(short)arg0 withKey:(NSString *)arg1 withType:(NSObject *)arg2;
- (void)setCachePermission:(short)arg0 ForClientID:(short)arg1 withKey:(NSString *)arg2 withType:(NSObject *)arg3;
- (NSObject<OS_dispatch_queue> *)permissionQueue;
- (NSObject *)buildMessageForClientID:(short)arg0 withKey:(NSString *)arg1 withPayload:(NSData *)arg2;
- (id)xpcSendMessageWithReply:(id /* block */)arg0;
- (NSObject *)pendingTasksForType:(NSObject *)arg0 forClientID:(short)arg1 forKey:(NSString *)arg2;
- (void)logForClientID:(short)arg0 withKey:(NSString *)arg1 withPayload:(NSData *)arg2;
- (short)permissionForClientID:(short)arg0 withKey:(NSString *)arg1 withType:(NSObject *)arg2;
- (void)addToPendingTaskCacheForType:(NSObject *)arg0 forClientID:(short)arg1 forKey:(NSString *)arg2 withPayload:(NSData *)arg3;
- (void)xpcSendMessage:(NSString *)arg0;
- (void)logStateCaches;
- (void)powerlogStateChanged;
- (NSObject *)queryForClientID:(short)arg0 withKey:(NSString *)arg1 withPayload:(NSData *)arg2;
- (void)setPermissionQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setXpcConnectionQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setProcessName:(NSString *)arg0;
- (NSMutableDictionary *)permissionCache;
- (NSObject<OS_xpc_object> *)xpcConnection;
- (void)setXpcConnection:(NSObject<OS_xpc_object> *)arg0;
- (void)setPermissionCache:(NSMutableDictionary *)arg0;

@end
