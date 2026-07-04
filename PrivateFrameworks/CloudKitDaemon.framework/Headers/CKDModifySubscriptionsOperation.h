/* Runtime dump - CKDModifySubscriptionsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifySubscriptionsOperation : CKDDatabaseOperation
{
    id _saveCompletionBlock;
    id _deleteCompletionBlock;
    NSArray * _subscriptionsToSave;
    NSArray * _subscriptionIDsToDelete;
    NSMutableDictionary * _subscriptionsByServerID;
}

@property (copy, nonatomic) id saveCompletionBlock;
@property (copy, nonatomic) id deleteCompletionBlock;
@property (retain, nonatomic) NSArray * subscriptionsToSave;
@property (retain, nonatomic) NSArray * subscriptionIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary * subscriptionsByServerID;

- (void)main;
- (void).cxx_destruct;
- (CKDModifySubscriptionsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setSaveCompletionBlock:(id /* block */)arg0;
- (void)setDeleteCompletionBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (id /* block */)saveCompletionBlock;
- (id /* block */)deleteCompletionBlock;
- (NSArray *)subscriptionsToSave;
- (NSArray *)subscriptionIDsToDelete;
- (void)_handleSubscriptionSaved:(id)arg0 error:(NSError *)arg1;
- (NSMutableDictionary *)subscriptionsByServerID;
- (void)_handleSubscriptionSaved:(id)arg0 responseCode:(int *)arg1;
- (void)_handleSubscriptionDeleted:(id)arg0 responseCode:(int *)arg1;
- (void)setSubscriptionsToSave:(NSArray *)arg0;
- (void)setSubscriptionIDsToDelete:(NSArray *)arg0;
- (void)setSubscriptionsByServerID:(NSMutableDictionary *)arg0;

@end
