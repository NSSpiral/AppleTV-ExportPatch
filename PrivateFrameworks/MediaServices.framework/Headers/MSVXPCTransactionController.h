/* Runtime dump - MSVXPCTransactionController
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVXPCTransactionController : NSObject
{
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMapTable * _openTransactions;
    char _inTransaction;
    NSObject<OS_dispatch_source> * _signalUSR2DispatchSource;
}

@property (readonly, nonatomic) char inTransaction;

+ (MSVXPCTransactionController *)sharedInstance;

- (void)dealloc;
- (MSVXPCTransactionController *)init;
- (void).cxx_destruct;
- (char)isInTransaction;
- (char)isTransactionActive:(id)arg0;
- (id)activeTransactions;
- (void)addActiveTransaction:(NSObject *)arg0;
- (void)removeActiveTransaction:(NSObject *)arg0;
- (void)_setupSignalHandler;
- (void)_tearDownSignalHandler;
- (void)_onQueueUpdateInternalTransactionState;
- (void)_onQueueCleanupEndedTransactions;
- (void)_saveActiveTransactionsToFile;

@end
