/* Runtime dump - CKDFetchChangedRecordZonesOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchChangedRecordZonesOperation : CKDDatabaseOperation
{
    id _recordZoneWithIDChangedBlock;
    id _recordZoneWithIDWasDeletedBlock;
    CKServerChangeToken * _serverChangeToken;
    int _status;
    CKServerChangeToken * _previousServerChangeToken;
    unsigned int _resultsLimit;
}

@property (copy, nonatomic) id recordZoneWithIDChangedBlock;
@property (copy, nonatomic) id recordZoneWithIDWasDeletedBlock;
@property (retain, nonatomic) CKServerChangeToken * serverChangeToken;
@property (nonatomic) int status;
@property (retain, nonatomic) CKServerChangeToken * previousServerChangeToken;
@property (nonatomic) unsigned int resultsLimit;

- (void)main;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setResultsLimit:(unsigned int)arg0;
- (void)setRecordZoneWithIDChangedBlock:(id /* block */)arg0;
- (void)setRecordZoneWithIDWasDeletedBlock:(id /* block */)arg0;
- (CKServerChangeToken *)serverChangeToken;
- (void)setServerChangeToken:(CKServerChangeToken *)arg0;
- (CKDFetchChangedRecordZonesOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(NSObject *)arg0;
- (unsigned int)resultsLimit;
- (CKServerChangeToken *)previousServerChangeToken;
- (id /* block */)recordZoneWithIDChangedBlock;
- (id /* block */)recordZoneWithIDWasDeletedBlock;
- (void)_handleFetchChangedRecordZonesRequestCompleted:(id)arg0;
- (void)setPreviousServerChangeToken:(CKServerChangeToken *)arg0;

@end
