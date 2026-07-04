/* Runtime dump - CKFetchSubscriptionsOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation
{
    char _isFetchAllSubscriptionsOperation;
    NSArray * _subscriptionIDs;
    id _fetchSubscriptionCompletionBlock;
    NSArray * _subscriptions;
    NSMutableDictionary * _subscriptionsBySubscriptionID;
    NSMutableDictionary * _subscriptionErrors;
}

@property (copy, nonatomic) NSArray * subscriptionIDs;
@property (copy, nonatomic) id fetchSubscriptionCompletionBlock;
@property (retain, nonatomic) NSArray * subscriptions;
@property (retain, nonatomic) NSMutableDictionary * subscriptionsBySubscriptionID;
@property (retain, nonatomic) NSMutableDictionary * subscriptionErrors;
@property (nonatomic) char isFetchAllSubscriptionsOperation;

+ (NSObject *)fetchAllSubscriptionsOperation;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (void)setFetchSubscriptionCompletionBlock:(id /* block */)arg0;
- (NSMutableDictionary *)subscriptionErrors;
- (void)setSubscriptionErrors:(NSMutableDictionary *)arg0;
- (id /* block */)fetchSubscriptionCompletionBlock;
- (NSMutableDictionary *)subscriptionsBySubscriptionID;
- (void)setSubscriptionsBySubscriptionID:(NSMutableDictionary *)arg0;
- (CKFetchSubscriptionsOperation *)init;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)subscriptionIDs;
- (CKFetchSubscriptionsOperation *)initWithSubscriptionIDs:(NSArray *)arg0;
- (void)setSubscriptions:(NSArray *)arg0;
- (void)setSubscriptionIDs:(NSArray *)arg0;
- (char)isFetchAllSubscriptionsOperation;
- (void)setIsFetchAllSubscriptionsOperation:(char)arg0;
- (NSArray *)subscriptions;

@end
