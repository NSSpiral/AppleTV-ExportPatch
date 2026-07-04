/* Runtime dump - CKDFetchSharesOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchSharesOperation : CKDDatabaseOperation
{
    id _shareFetchedProgressBlock;
    NSArray * _shareIDs;
    NSArray * _zoneIDs;
}

@property (copy, nonatomic) id shareFetchedProgressBlock;
@property (retain, nonatomic) NSArray * shareIDs;
@property (retain, nonatomic) NSArray * zoneIDs;

- (void)main;
- (void).cxx_destruct;
- (CKDFetchSharesOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setShareFetchedProgressBlock:(id /* block */)arg0;
- (NSArray *)zoneIDs;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (void)setZoneIDs:(NSArray *)arg0;
- (NSArray *)shareIDs;
- (void)setShareIDs:(NSArray *)arg0;
- (id /* block */)shareFetchedProgressBlock;
- (void)_handleShareFetched:(id)arg0 shareID:(NSObject *)arg1 zoneID:(CKRecordZoneID *)arg2 operationResult:(CKOperationResult *)arg3;

@end
