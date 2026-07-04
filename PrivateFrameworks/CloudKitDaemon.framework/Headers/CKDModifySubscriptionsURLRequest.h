/* Runtime dump - CKDModifySubscriptionsURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifySubscriptionsURLRequest : CKDURLRequest
{
    CKRecordZoneID * _zoneID;
    id _subscriptionModifiedBlock;
    NSArray * _subscriptionsToSave;
    NSArray * _subscriptionIDsToDelete;
    NSMutableDictionary * _subscriptionIDByRequestID;
}

@property (copy, nonatomic) CKRecordZoneID * zoneID;
@property (copy, nonatomic) id subscriptionModifiedBlock;
@property (retain, nonatomic) NSArray * subscriptionsToSave;
@property (retain, nonatomic) NSArray * subscriptionIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary * subscriptionIDByRequestID;

- (void).cxx_destruct;
- (CKDModifySubscriptionsURLRequest *)initWithSubscriptionsToSave:(NSArray *)arg0 subscriptionIDsToDelete:(NSArray *)arg1;
- (CKRecordZoneID *)zoneID;
- (void)setZoneID:(CKRecordZoneID *)arg0;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)subscriptionsToSave;
- (NSArray *)subscriptionIDsToDelete;
- (void)setSubscriptionModifiedBlock:(id /* block */)arg0;
- (void)setSubscriptionsToSave:(NSArray *)arg0;
- (void)setSubscriptionIDsToDelete:(NSArray *)arg0;
- (id /* block */)subscriptionModifiedBlock;
- (NSMutableDictionary *)subscriptionIDByRequestID;
- (void)setSubscriptionIDByRequestID:(NSMutableDictionary *)arg0;
- (int)operationType;

@end
