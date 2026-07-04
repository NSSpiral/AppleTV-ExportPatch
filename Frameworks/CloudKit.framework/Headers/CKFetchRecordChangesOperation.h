/* Runtime dump - CKFetchRecordChangesOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordChangesOperation : CKDatabaseOperation
{
    char _shouldFetchAssetContents;
    CKRecordZoneID * _recordZoneID;
    CKServerChangeToken * _previousServerChangeToken;
    unsigned int _resultsLimit;
    NSArray * _desiredKeys;
    id _recordChangedBlock;
    id _recordWithIDWasDeletedBlock;
    id _fetchRecordChangesCompletionBlock;
    CKServerChangeToken * _resultServerChangeToken;
    NSData * _resultClientChangeTokenData;
    int _status;
    NSMutableDictionary * _recordErrors;
    id _shareChangedBlock;
    id _shareWithIDWasDeletedBlock;
}

@property (copy, nonatomic) CKRecordZoneID * recordZoneID;
@property (copy, nonatomic) CKServerChangeToken * previousServerChangeToken;
@property (nonatomic) unsigned int resultsLimit;
@property (copy, nonatomic) NSArray * desiredKeys;
@property (copy, nonatomic) id recordChangedBlock;
@property (copy, nonatomic) id recordWithIDWasDeletedBlock;
@property (readonly, nonatomic) char moreComing;
@property (copy, nonatomic) id fetchRecordChangesCompletionBlock;
@property (retain, nonatomic) CKServerChangeToken * resultServerChangeToken;
@property (retain, nonatomic) NSData * resultClientChangeTokenData;
@property (nonatomic) int status;
@property (nonatomic) char shouldFetchAssetContents;
@property (retain, nonatomic) NSMutableDictionary * recordErrors;
@property (copy, nonatomic) id shareChangedBlock;
@property (copy, nonatomic) id shareWithIDWasDeletedBlock;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSMutableDictionary *)recordErrors;
- (void)setRecordErrors:(NSMutableDictionary *)arg0;
- (void)_handleCompletionCallback:(id /* block */)arg0;
- (int)changeTypesFromSetCallbacks;
- (id /* block */)shareWithIDWasDeletedBlock;
- (id /* block */)recordWithIDWasDeletedBlock;
- (id /* block */)fetchRecordChangesCompletionBlock;
- (void)setShareWithIDWasDeletedBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setResultsLimit:(unsigned int)arg0;
- (char)moreComing;
- (void)setDesiredKeys:(NSArray *)arg0;
- (CKFetchRecordChangesOperation *)initWithRecordZoneID:(CKRecordZoneID *)arg0 previousServerChangeToken:(CKServerChangeToken *)arg1;
- (void)setShouldFetchAssetContents:(char)arg0;
- (void)setRecordChangedBlock:(id /* block */)arg0;
- (void)setFetchRecordChangesCompletionBlock:(id /* block */)arg0;
- (void)setRecordWithIDWasDeletedBlock:(id /* block */)arg0;
- (void)setShareChangedBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)desiredKeys;
- (unsigned int)resultsLimit;
- (CKServerChangeToken *)previousServerChangeToken;
- (void)setPreviousServerChangeToken:(CKServerChangeToken *)arg0;
- (void)setResultServerChangeToken:(CKServerChangeToken *)arg0;
- (CKServerChangeToken *)resultServerChangeToken;
- (CKRecordZoneID *)recordZoneID;
- (void)setRecordZoneID:(CKRecordZoneID *)arg0;
- (void)setResultClientChangeTokenData:(NSData *)arg0;
- (NSData *)resultClientChangeTokenData;
- (char)shouldFetchAssetContents;
- (id /* block */)recordChangedBlock;
- (id /* block */)shareChangedBlock;

@end
