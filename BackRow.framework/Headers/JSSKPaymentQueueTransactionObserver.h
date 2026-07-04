/* Runtime dump - JSSKPaymentQueueTransactionObserver
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol SKPaymentTransactionObserver;

@class ATVJSContext;
@interface JSSKPaymentQueueTransactionObserver : NSObject <SKPaymentTransactionObserver>
{
    ATVJSContext * _atvContext;
    NSMutableSet * _jsObservers;
    SKPaymentQueue * _paymentQueue;
    char _usingATBAccount;
    id _purchaseTransactionToken;
}

@property (readonly, retain, nonatomic) SKPaymentQueue * paymentQueue;
@property (retain, nonatomic) id purchaseTransactionToken;
@property (readonly, nonatomic) char usingATBAccount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (SKPaymentQueue *)paymentQueue;
- (void)_callObserversUsingFunctionName:(NSString *)arg0 withOptionalArgument:(id)arg1;
- (void)_commitPurchaseTransaction;
- (NSString *)purchaseTransactionToken;
- (void)setPurchaseTransactionToken:(NSString *)arg0;
- (JSSKPaymentQueueTransactionObserver *)initWithContext:(NSObject *)arg0 thisObject:(struct OpaqueJSValue *)arg1;
- (void)addJSObserver:(struct OpaqueJSValue *)arg0 context:(struct OpaqueJSContext *)arg1;
- (void)removeJSObserver:(struct OpaqueJSValue *)arg0 context:(struct OpaqueJSContext *)arg1;
- (char)isUsingATBAccount;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(SKPaymentQueue *)arg0;
- (void)paymentQueue:(SKPaymentQueue *)arg0 restoreCompletedTransactionsFailedWithError:(NSError *)arg1;
- (void)paymentQueue:(SKPaymentQueue *)arg0 removedTransactions:(NSArray *)arg1;
- (void)paymentQueue:(SKPaymentQueue *)arg0 updatedTransactions:(NSArray *)arg1;
- (void)dealloc;

@end
