/* Runtime dump - FBSynchronizedTransactionGroup
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate>
{
    char _didCommit;
    char _readyForCommit;
    NSMutableSet * _synchronizedTransactions;
    NSMutableSet * _synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet * _synchronizedTransactionsReadyToCommit;
    <FBSynchronizedTransactionDelegate> * _synchronizationDelegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <FBSynchronizedTransactionDelegate> * synchronizationDelegate;

- (void)dealloc;
- (FBSynchronizedTransactionGroup *)init;
- (void)_performSynchronizedCommit:(id)arg0;
- (void)addSynchronizedTransaction:(NSObject *)arg0;
- (<FBSynchronizedTransactionDelegate> *)synchronizationDelegate;
- (void)synchronizedTransactionReadyToCommit:(id)arg0;
- (void)performSynchronizedCommit;
- (char)isReadyForSynchronizedCommit;
- (void)synchronizedTransaction:(NSObject *)arg0 willCommitSynchronizedTransactions:(id)arg1;
- (void)synchronizedTransaction:(NSObject *)arg0 didCommitSynchronizedTransactions:(id)arg1;
- (void)setSynchronizationDelegate:(<FBSynchronizedTransactionDelegate> *)arg0;

@end
