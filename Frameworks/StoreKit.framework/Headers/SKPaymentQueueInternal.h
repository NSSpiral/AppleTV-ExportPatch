/* Runtime dump - SKPaymentQueueInternal
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentQueueInternal : NSObject
{
    char _checkedIn;
    SKPaymentQueueClient * _client;
    char _isRefreshing;
    NSMutableArray * _localTransactions;
    struct __CFArray * _observers;
    SKXPCConnection * _requestConnection;
    SKXPCConnection * _responseConnection;
    char _restoreFinishedDuringRefresh;
    char _restoringCompletedTransactions;
    NSMutableArray * _transactions;
}

- (void)dealloc;

@end
