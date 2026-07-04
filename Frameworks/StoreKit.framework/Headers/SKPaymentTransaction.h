/* Runtime dump - SKPaymentTransaction
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentTransaction : NSObject
{
    id _internal;
}

@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) SKPaymentTransaction * originalTransaction;
@property (readonly, nonatomic) SKPayment * payment;
@property (readonly, nonatomic) NSArray * downloads;
@property (readonly, nonatomic) NSDate * transactionDate;
@property (readonly, nonatomic) NSString * transactionIdentifier;
@property (readonly, nonatomic) NSData * transactionReceipt;
@property (readonly, nonatomic) int transactionState;
@property (readonly, nonatomic) NSString * matchingIdentifier;
@property (readonly, nonatomic) NSString * _transactionIdentifier;

- (NSDate *)transactionDate;
- (NSArray *)downloads;
- (NSDictionary *)copyXPCEncoding;
- (SKPaymentTransaction *)initWithXPCEncoding:(NSString *)arg0;
- (SKPayment *)payment;
- (SKPaymentTransaction *)initWithPayment:(SKPayment *)arg0;
- (int)transactionState;
- (NSString *)matchingIdentifier;
- (NSString *)_transactionIdentifier;
- (char)canMergeWithTransaction:(NSObject *)arg0;
- (char)mergeWithTransaction:(NSObject *)arg0;
- (void)_setDownloads:(id)arg0;
- (SKPaymentTransaction *)originalTransaction;
- (NSData *)transactionReceipt;
- (void)_setOriginalTransaction:(NSObject *)arg0;
- (void)_setTemporaryIdentifier:(NSString *)arg0;
- (void)_setTransactionDate:(NSDate *)arg0;
- (void)_setTransactionIdentifier:(NSString *)arg0;
- (void)_setTransactionReceipt:(id)arg0;
- (void)_setTransactionState:(int)arg0;
- (void)dealloc;
- (SKPaymentTransaction *)init;
- (NSError *)error;
- (NSString *)transactionIdentifier;
- (void)_setError:(NSError *)arg0;

@end
