/* Runtime dump - ACRemoteDeviceProxy
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACRemoteDeviceProxy : NSObject <IDSServiceDelegate>
{
    IDSService * _messageSendingService;
    ACRemoteCommandHandler * _remoteCommandHandler;
    NSMutableDictionary * _completionHandlersByInternalMessageID;
    NSMutableDictionary * _internalMessageIDsByTransportID;
    NSLock * _completionHandlersLock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ACRemoteDeviceProxy *)init;
- (void).cxx_destruct;
- (void)sendCommand:(NSObject *)arg0 withAccount:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)sendCommand:(NSObject *)arg0 withAccount:(NSObject *)arg1 options:(NSDictionary *)arg2 completion:(id /* block */)arg3;
- (char)_isValidCommandForOutgoingMessage:(NSString *)arg0;
- (int)_priorityForMessageCarryingCommand:(NSObject *)arg0;
- (void)_enqueueCompletionHandler:(id /* block */)arg0 forMessageWithInternalID:(/* block */ id)arg1 transportID:(NSObject *)arg2;
- (void)_dequeueCompletionHandlersForMessageWithTransportID:(NSObject *)arg0 success:(char)arg1 result:(NSObject *)arg2 error:(NSError *)arg3;
- (void)_dequeueCompletionHandlersForMessageWithInternalID:(NSObject *)arg0 success:(char)arg1 result:(NSObject *)arg2 error:(NSError *)arg3;
- (void)_sendReplyForMessage:(NSString *)arg0 withSuccess:(char)arg1 result:(NSObject *)arg2 error:(NSError *)arg3;
- (void)service:(NSObject *)arg0 account:(NSObject *)arg1 incomingData:(NSData *)arg2 fromID:(NSString *)arg3 context:(NSObject *)arg4;
- (void)service:(NSObject *)arg0 account:(NSObject *)arg1 identifier:(NSString *)arg2 didSendWithSuccess:(char)arg3 error:(NSError *)arg4;

@end
