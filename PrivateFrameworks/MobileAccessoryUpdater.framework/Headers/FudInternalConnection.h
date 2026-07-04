/* Runtime dump - FudInternalConnection
 * Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

@interface FudInternalConnection : NSObject <FudConnection>
{
    NSString * clientIdentifier;
    NSObject<OS_dispatch_queue> * handlerQueue;
    id messageHandler;
    NSMutableDictionary * pendingRequests;
    char didStop;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)stop;
- (void)sendMessageToFud:(id)arg0;
- (void)sendMessageToFud:(id)arg0 reply:(id /* block */)arg1;
- (FudInternalConnection *)initWithClientIdentifier:(NSString *)arg0 handlerQueue:(NSObject<OS_dispatch_queue> *)arg1 messageHandler:(NSObject<MBConnectionHandler> *)arg2;
- (void)handleInboundNotification:(NSNotification *)arg0;
- (long long)getNextMessageID;

@end
