/* Runtime dump - BSBasicServerClient
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSBasicServerClient : NSObject <BSXPCServerClient>
{
    NSObject<OS_xpc_object> * _connection;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> * connection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURLConnection *)wrapperWithConnection:(NSObject<OS_xpc_object> *)arg0;

- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (NSObject<OS_xpc_object> *)connection;
- (void)setConnection:(NSObject<OS_xpc_object> *)arg0;
- (void)sendMessageWithPacker:(id)arg0 replyHandler:(/* block */ id)arg1 onQueue:(/* block */ id)arg2;
- (void)sendMessageWithPacker:(id)arg0;
- (void)sendMessage:(NSString *)arg0;
- (BSBasicServerClient *)initWithConnection:(NSObject<OS_xpc_object> *)arg0;

@end
