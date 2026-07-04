/* Runtime dump - SBKSimpleTransactionRequestHandler
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler
{
    char _canceled;
    SBKTransactionController * _transactionController;
}

@property (readonly, nonatomic) SBKTransactionController * transactionController;
@property (readonly, nonatomic) char canceled;

- (void)cancel;
- (void).cxx_destruct;
- (SBKSimpleTransactionRequestHandler *)initWithBagContext:(SBKStoreURLBagContext *)arg0;
- (void)cancelWithError:(NSError *)arg0;
- (char)canceled;
- (void)timeout;
- (SBKTransactionController *)transactionController;
- (void)scheduleTransaction:(NSObject *)arg0 finishedBlock:(id /* block */)arg1;

@end
