/* Runtime dump - PLClientServerTransaction
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLClientServerTransaction : NSObject
{
    NSString * _transactionToken;
}

@property (copy, nonatomic) NSString * transactionToken;

+ (NSOperationQueue *)_queue;
+ (NSObject *)beginClientTransaction;
+ (void)addTransaction:(NSObject *)arg0 toUserInfo:(NSDictionary *)arg1;
+ (void)removeTransactionFromUserInfo:(NSDictionary *)arg0;
+ (NSDictionary *)transactionFromUserInfo:(NSDictionary *)arg0;
+ (void)addTokenForTransaction:(NSObject *)arg0 toXPCDictionary:(NSDictionary *)arg1;
+ (NSString *)beginServerTransactionWithToken:(NSString *)arg0;
+ (NSFileManager *)_fileManager;
+ (PLClientServerTransaction *)_transactionsDirectory;
+ (NSArray *)_outstandingTransactionPaths;
+ (void)handleOutstandingTransactions:(id)arg0;
+ (NSDictionary *)transactionTokenFromXPCDictionary:(NSDictionary *)arg0;

- (void)dealloc;
- (void)stillAlive;
- (void)abortTransaction;
- (NSString *)transactionToken;
- (void)completeTransaction;
- (void)setTransactionToken:(NSString *)arg0;

@end
