/* Runtime dump - TransactionManager
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface TransactionManager : CHSynchronizedLoggable
{
    NSXPCConnection * _connection;
    NSXPCInterface * _interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray * _queuedTransactions;
}

+ (TransactionManager *)instance;

- (void)dealloc;
- (TransactionManager *)init;
- (void).cxx_destruct;
- (void)appendTransactions:(id)arg0;
- (void)createXpcConnection;
- (void)createXpcConnection_sync;
- (void)setupConnectionHandlers_sync;
- (void)sendHello_sync;
- (void)appendTransactions_sync:(id)arg0;

@end
