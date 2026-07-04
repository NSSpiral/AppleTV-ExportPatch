/* Runtime dump - AVConferenceXPCClient
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVConferenceXPCClient : NSObject
{
    NSObject<OS_xpc_object> * connection;
    NSMutableDictionary * registeredBlocks;
    NSObject<OS_dispatch_queue> * replyQueue;
    NSObject<OS_dispatch_queue> * connectionQueue;
}

@property (readonly) NSObject<OS_xpc_object> * connection;
@property (readonly) NSMutableDictionary * registeredBlocks;

+ (AVConferenceXPCClient *)AVConferenceXPCClientSingleton;

- (void)dealloc;
- (AVConferenceXPCClient *)init;
- (NSObject<OS_xpc_object> *)connection;
- (void)registerBlockForService:(char *)arg0 block:(id /* block */)arg1;
- (id)sendMessageSync:(char *)arg0 arguments:(NSDictionary *)arg1;
- (void)sendMessageAsync:(char *)arg0 arguments:(NSDictionary *)arg1 reply:(id /* block */)arg2;
- (void)deregisterFromService:(char *)arg0;
- (id)sendMessageSync:(char *)arg0 arguments:(NSDictionary *)arg1 fileDescriptor:(int)arg2;
- (void)sendMessageAsync:(char *)arg0 arguments:(NSDictionary *)arg1;
- (NSDictionary *)createServerDiedDictionary;
- (void)closeConnectionToServer;
- (NSDictionary *)createNSDictionaryFromXPCDictionary:(NSDictionary *)arg0;
- (NSDictionary *)createNSErrorFromNSDictionary:(NSDictionary *)arg0;
- (void)sendMessageAsync:(char *)arg0 arguments:(NSDictionary *)arg1 reply:(id /* block */)arg2 queue:(/* block */ id)arg3;
- (void)sendMessageAsync:(char *)arg0 arguments:(NSDictionary *)arg1 fileDescriptor:(int)arg2 reply:(id /* block */)arg3 queue:(/* block */ id)arg4;
- (void)createConnectionToServer;
- (NSDictionary *)createXPCDictionaryFromNSDictionary:(NSDictionary *)arg0;
- (id)sendMessageSync:(char *)arg0 arguments:(NSDictionary *)arg1 fileDescriptor:(int)arg2 timeout:(unsigned int)arg3;
- (NSDictionary *)createTimeoutDictionary;
- (void)registerBlockForService:(char *)arg0 block:(id /* block */)arg1 queue:(/* block */ id)arg2;
- (NSError *)createNSDictionaryFromNSError:(NSError *)arg0;
- (id)sendMessageSync:(char *)arg0 arguments:(NSDictionary *)arg1 timeout:(unsigned int)arg2;
- (NSMutableDictionary *)registeredBlocks;

@end
