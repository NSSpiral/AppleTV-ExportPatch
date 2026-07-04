/* Runtime dump - AVConferenceXPCServer
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVConferenceXPCServer : NSObject
{
    NSObject<OS_xpc_object> * listener;
    NSMutableArray * clientConnections;
    NSMutableDictionary * registeredBlocks;
    NSObject<OS_dispatch_queue> * incomingMessageQueue;
    NSObject<OS_dispatch_queue> * outgoingMessageQueue;
    NSObject<OS_dispatch_queue> * clientConnectionsQueue;
}

@property (readonly) NSObject<OS_xpc_object> * listener;
@property (readonly) NSMutableDictionary * registeredBlocks;

+ (AVConferenceXPCServer *)AVConferenceXPCServerSingleton;

- (AVConferenceXPCServer *)retain;
- (void)release;
- (void)dealloc;
- (AVConferenceXPCServer *)init;
- (AVConferenceXPCServer *)autorelease;
- (unsigned int)retainCount;
- (NSObject *)allocWithZone:(struct _NSZone *)arg0;
- (AVConferenceXPCServer *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject<OS_xpc_object> *)listener;
- (void)registerBlockForService:(char *)arg0 block:(id /* block */)arg1;
- (void)deregisterFromService:(char *)arg0;
- (void)sendMessageAsync:(char *)arg0 arguments:(NSDictionary *)arg1;
- (void)_xpc_start_listening_for_connections;
- (void)sendMessageAsync:(char *)arg0 arguments:(NSDictionary *)arg1 context:(NSObject *)arg2;
- (NSData *)authorizedTokenData;
- (NSDictionary *)createNSDictionaryFromXPCDictionary:(NSDictionary *)arg0;
- (NSDictionary *)createNSErrorFromNSDictionary:(NSDictionary *)arg0;
- (void)registerBlockForService:(char *)arg0 block:(id /* block */)arg1 queue:(/* block */ id)arg2;
- (NSError *)createNSDictionaryFromNSError:(NSError *)arg0;
- (NSMutableDictionary *)registeredBlocks;
- (void)_xpc_remove_connections_from_list;
- (NSDictionary *)createXPCDictionaryFromNSDictionary:(NSDictionary *)arg0 forEvent:(struct __GSEvent *)arg1;
- (NSString *)_xpc_get_connection_from_list_for_context:(NSObject *)arg0;
- (NSURLConnection *)_xpc_get_connection_from_list_for_connection:(NSURLConnection *)arg0;
- (void)_xpc_handle_incoming_request:(NSURLRequest *)arg0;
- (NSDictionary *)createClientDiedDictionary;
- (void)appendPIDToDictionary:(NSDictionary *)arg0 pid:(int)arg1;
- (void)appendContextToDictionary:(NSDictionary *)arg0 forConnection:(NSURLConnection *)arg1;
- (void)_xpc_add_connection_to_list:(NSArray *)arg0;
- (void)_xpc_remove_connection_from_list:(NSArray *)arg0;

@end
