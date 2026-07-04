/* Runtime dump - SKPaymentQueue
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentQueue : NSObject
{
    id _internal;
}

@property (readonly, nonatomic) NSArray * transactions;
@property (readonly, nonatomic) SKPaymentQueueClient * paymentQueueClient;

+ (char)canMakePayments;
+ (SKPaymentQueue *)defaultQueue;

- (void)_applicationWillEnterForegroundNotification:(NSNotification *)arg0;
- (void)resumeDownloads:(id)arg0;
- (void)pauseDownloads:(id)arg0;
- (void)cancelDownloads:(id)arg0;
- (NSOperationQueue *)_initSKPaymentQueue;
- (void)_notifyObserversAboutChanges:(id)arg0 sendUpdatedDownloads:(char)arg1;
- (void)_establishConnectionIfNeeded;
- (void)_sendCommand:(long long)arg0 forDownloads:(/* block */ id)arg1;
- (void)_removeLocalTransaction:(NSObject *)arg0;
- (void)restoreCompletedTransactionsWithApplicationUsername:(NSString *)arg0;
- (void)_refreshPaymentsWithPolicy:(int)arg0;
- (void)_notifyObserversRestoreTransactionsFinished;
- (void)_notifyObserversRestoreTransactionsFailedWithError:(NSError *)arg0;
- (void)_handleConnectionDisconnect;
- (void)_handleMessage:(NSString *)arg0 connection:(NSURLConnection *)arg1;
- (void)_setTransactionsWithReply:(id /* block */)arg0;
- (void)_notifyObserversAboutRemovals:(id)arg0;
- (void)_updateDownloadsForMessage:(NSString *)arg0;
- (void)_updatePaymentsForMessage:(NSString *)arg0;
- (void)_removePaymentsForMessage:(NSString *)arg0;
- (void)_completeRestoreWithMessage:(NSString *)arg0;
- (NSIndexSet *)_copyRemovalsFromUnmergedIndexSet:(NSSet *)arg0;
- (void)_finishRefreshPayments;
- (id)_copyDownloadIDsForDownloads:(id)arg0;
- (void)_processUpdates:(id)arg0 trimUnmatched:(char)arg1 sendUpdatedDownloads:(char)arg2;
- (NSArray *)_copyTransactionsFromXPCArray:(NSArray *)arg0;
- (NSSet *)_applyDownloadChangeset:(NSSet *)arg0;
- (void)_notifyObserversAboutDownloadChanges:(id)arg0;
- (void)addPayment:(SKPayment *)arg0;
- (void)addTransactionObserver:(NSObject *)arg0;
- (void)finishTransaction:(NSObject *)arg0;
- (void)removeTransactionObserver:(NSObject *)arg0;
- (void)restoreCompletedTransactions;
- (void)startDownloads:(id)arg0;
- (SKPaymentQueue *)initWithPaymentQueueClient:(SKPaymentQueueClient *)arg0;
- (SKPaymentQueueClient *)paymentQueueClient;
- (void)_daemonLaunchedNotification;
- (void)dealloc;
- (SKPaymentQueue *)init;
- (void)_establishConnection;
- (NSArray *)transactions;

@end
