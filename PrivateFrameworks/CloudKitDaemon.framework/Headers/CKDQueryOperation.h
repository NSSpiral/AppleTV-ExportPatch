/* Runtime dump - CKDQueryOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueryOperation : CKDDatabaseOperation
{
    char _shouldFetchAssetContent;
    CKQuery * _query;
    CKQueryCursor * _cursor;
    unsigned int _resultsLimit;
    CKQueryCursor * _resultsCursor;
    id _recordFetchedBlock;
    NSSet * _desiredKeySet;
    CKRecordZoneID * _zoneID;
}

@property (readonly, nonatomic) CKQuery * query;
@property (readonly, nonatomic) CKQueryCursor * cursor;
@property (readonly, nonatomic) unsigned int resultsLimit;
@property (retain, nonatomic) CKQueryCursor * resultsCursor;
@property (copy, nonatomic) id recordFetchedBlock;
@property (retain, nonatomic) NSSet * desiredKeySet;
@property (nonatomic) char shouldFetchAssetContent;
@property (retain, nonatomic) CKRecordZoneID * zoneID;

- (CKQuery *)query;
- (CKQueryCursor *)cursor;
- (void)main;
- (void).cxx_destruct;
- (CKRecordZoneID *)zoneID;
- (void)setZoneID:(CKRecordZoneID *)arg0;
- (void)setRecordFetchedBlock:(id /* block */)arg0;
- (void)setShouldFetchAssetContent:(char)arg0;
- (CKDQueryOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(NSObject *)arg0;
- (id /* block */)recordFetchedBlock;
- (unsigned int)resultsLimit;
- (char)shouldFetchAssetContent;
- (CKQueryCursor *)resultsCursor;
- (void)setResultsCursor:(CKQueryCursor *)arg0;
- (NSSet *)desiredKeySet;
- (void)_handleQueryRequestFinished:(id)arg0;
- (void)setDesiredKeySet:(NSSet *)arg0;

@end
