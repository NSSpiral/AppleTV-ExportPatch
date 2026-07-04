/* Runtime dump - MBConnection
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBConnection : NSObject
{
    NSObject<OS_xpc_object> * _conn;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSObject<MBConnectionHandler> * _handler;
}

@property (nonatomic) NSObject<MBConnectionHandler> * messageHandler;

- (void)cancel;
- (void)dealloc;
- (void)suspend;
- (void)resume;
- (NSObject<OS_dispatch_queue> *)eventQueue;
- (void)sendMessage:(NSString *)arg0;
- (NSObject<MBConnectionHandler> *)messageHandler;
- (void)setMessageHandler:(NSObject<MBConnectionHandler> *)arg0;
- (MBConnection *)initWithServiceName:(NSString *)arg0 eventQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (id)sendMessageWithReplyAndSync:(id)arg0 error:(id *)arg1;
- (void)_setEventHandlerForXPCConnection;
- (void)_handleXPCEvent:(NSObject *)arg0;
- (void)_handleXPCError:(NSError *)arg0;
- (MBConnection *)initWithXPCConnection:(NSURLConnection *)arg0 eventQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end
