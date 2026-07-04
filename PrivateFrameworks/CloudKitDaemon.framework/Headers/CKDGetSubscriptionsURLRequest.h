/* Runtime dump - CKDGetSubscriptionsURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetSubscriptionsURLRequest : CKDURLRequest
{
    NSMutableArray * _subscriptions;
    id _subscriptionFetchedBlock;
    NSArray * _subscriptionIDs;
    NSMutableDictionary * _subscriptionIDByRequestID;
}

@property (retain, nonatomic) NSArray * subscriptions;
@property (copy, nonatomic) id subscriptionFetchedBlock;
@property (retain, nonatomic) NSArray * subscriptionIDs;
@property (retain, nonatomic) NSMutableDictionary * subscriptionIDByRequestID;

- (void).cxx_destruct;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSMutableDictionary *)subscriptionIDByRequestID;
- (void)setSubscriptionIDByRequestID:(NSMutableDictionary *)arg0;
- (NSArray *)subscriptionIDs;
- (id /* block */)subscriptionFetchedBlock;
- (CKDGetSubscriptionsURLRequest *)initWithSubscriptionIDs:(NSArray *)arg0;
- (void)setSubscriptions:(NSArray *)arg0;
- (void)setSubscriptionFetchedBlock:(id /* block */)arg0;
- (void)setSubscriptionIDs:(NSArray *)arg0;
- (int)operationType;
- (NSArray *)subscriptions;

@end
