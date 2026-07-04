/* Runtime dump - CKModifySubscriptionsOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifySubscriptionsOperation : CKDatabaseOperation
{
    NSArray * _subscriptionsToSave;
    NSArray * _subscriptionIDsToDelete;
    id _modifySubscriptionsCompletionBlock;
    NSMutableArray * _savedSubscriptions;
    NSMutableArray * _deletedSubscriptionIDs;
    NSMutableDictionary * _subscriptionsBySubscriptionIDs;
    NSMutableDictionary * _subscriptionErrors;
}

@property (copy, nonatomic) NSArray * subscriptionsToSave;
@property (copy, nonatomic) NSArray * subscriptionIDsToDelete;
@property (copy, nonatomic) id modifySubscriptionsCompletionBlock;
@property (retain, nonatomic) NSMutableArray * savedSubscriptions;
@property (retain, nonatomic) NSMutableArray * deletedSubscriptionIDs;
@property (retain, nonatomic) NSMutableDictionary * subscriptionsBySubscriptionIDs;
@property (retain, nonatomic) NSMutableDictionary * subscriptionErrors;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSMutableDictionary *)subscriptionsBySubscriptionIDs;
- (NSMutableDictionary *)subscriptionErrors;
- (NSMutableArray *)deletedSubscriptionIDs;
- (NSMutableArray *)savedSubscriptions;
- (id /* block */)modifySubscriptionsCompletionBlock;
- (void)setSavedSubscriptions:(NSMutableArray *)arg0;
- (void)setDeletedSubscriptionIDs:(NSMutableArray *)arg0;
- (void)setSubscriptionsBySubscriptionIDs:(NSMutableDictionary *)arg0;
- (void)setSubscriptionErrors:(NSMutableDictionary *)arg0;
- (CKModifySubscriptionsOperation *)init;
- (void).cxx_destruct;
- (CKModifySubscriptionsOperation *)initWithSubscriptionsToSave:(NSArray *)arg0 subscriptionIDsToDelete:(NSArray *)arg1;
- (void)setModifySubscriptionsCompletionBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)subscriptionsToSave;
- (NSArray *)subscriptionIDsToDelete;
- (void)setSubscriptionsToSave:(NSArray *)arg0;
- (void)setSubscriptionIDsToDelete:(NSArray *)arg0;

@end
