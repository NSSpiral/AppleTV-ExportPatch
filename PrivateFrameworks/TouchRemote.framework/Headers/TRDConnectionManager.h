/* Runtime dump - TRDConnectionManager
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDConnectionManager : NSObject <TRTCPConnectionDelegate>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _connectionDelegateQueue;
    NSMapTable * _connectionToXPCConnectionOwners;
    NSMapTable * _serviceToConnection;
    NSMapTable * _serviceToConnectionCompletionHandlers;
    NSMapTable * _XPCConnectionToConnectionToPacketEventClasses;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TRDConnectionManager *)sharedManager;

- (void)dealloc;
- (TRDConnectionManager *)init;
- (TRDConnectionManager *)_init;
- (void).cxx_destruct;
- (void)connectionDidClose:(id)arg0;
- (void)TRXPCD_closeConnectionWithUniqueIdentifier:(int)arg0;
- (void)TRXPCD_connectionWithUniqueIdentifier:(int)arg0 sendPacketEvent:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)TRXPCD_connectionWithUniqueIdentifier:(int)arg0 setRelevantReceivedPacketEventTypes:(NSArray *)arg1;
- (void)connectToService:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)TRXPCD_connectToService:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceivePacketEvent:(NSObject *)arg1;
- (void)_XPCServerDidInvalidateClientConnectionNotification:(NSNotification *)arg0;
- (NSObject *)_existingConnectionForService:(NSObject *)arg0;
- (void)_callConnectionCompletionHandlersForService:(NSObject *)arg0 withConnection:(NSURLConnection *)arg1 error:(NSError *)arg2;
- (NSString *)_existingConnectionForConnectionUniqueIdentifier:(int)arg0;
- (NSArray *)_packetEventClassesForPacketEventTypes:(NSArray *)arg0;

@end
