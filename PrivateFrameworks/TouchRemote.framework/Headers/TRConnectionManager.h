/* Runtime dump - TRConnectionManager
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRConnectionManager : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMapTable * _serviceToConnection;
}

+ (TRConnectionManager *)sharedManager;

- (void)dealloc;
- (TRConnectionManager *)init;
- (TRConnectionManager *)_init;
- (void).cxx_destruct;
- (void)_XPCClientConnectionDidInterruptNotification:(NSNotification *)arg0;
- (void)connectToService:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)TRXPCC_connectionWithUniqueIdentifierDidClose:(int)arg0;
- (void)TRXPCC_connectionWithUniqueIdentifier:(int)arg0 didReceivePacketEvent:(NSObject *)arg1;
- (NSObject *)_existingConnectionForService:(NSObject *)arg0;
- (NSString *)_existingConnectionForConnectionUniqueIdentifier:(int)arg0;
- (void)_connectionDidCloseNotification:(NSNotification *)arg0;

@end
