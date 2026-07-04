/* Runtime dump - CKDFetchSubscriptionsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation
{
    char _isFetchAllSubscriptionsOperation;
    NSArray * _subscriptions;
    id _subscriptionFetchedProgressBlock;
    NSArray * _subscriptionIDs;
}

@property (retain, nonatomic) NSArray * subscriptions;
@property (copy, nonatomic) id subscriptionFetchedProgressBlock;
@property (retain, nonatomic) NSArray * subscriptionIDs;
@property (nonatomic) char isFetchAllSubscriptionsOperation;

- (void)main;
- (void).cxx_destruct;
- (CKDFetchSubscriptionsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setSubscriptionFetchedProgressBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)subscriptionIDs;
- (void)setSubscriptions:(NSArray *)arg0;
- (void)setSubscriptionIDs:(NSArray *)arg0;
- (char)isFetchAllSubscriptionsOperation;
- (id /* block */)subscriptionFetchedProgressBlock;
- (void)_handleSubscriptionFetched:(id)arg0 withID:(int)arg1 responseCode:(int *)arg2;
- (void)setIsFetchAllSubscriptionsOperation:(char)arg0;
- (NSArray *)subscriptions;

@end
