/* Runtime dump - CKFetchChangedRecordZonesOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchChangedRecordZonesOperation : CKDatabaseOperation
{
    CKServerChangeToken * _previousServerChangeToken;
    unsigned int _resultsLimit;
    id _recordZoneWithIDChangedBlock;
    id _recordZoneWithIDWasDeletedBlock;
    id _fetchChangedRecordZonesCompletionBlock;
    CKServerChangeToken * _serverChangeToken;
    int _status;
}

@property (copy, nonatomic) CKServerChangeToken * previousServerChangeToken;
@property (nonatomic) unsigned int resultsLimit;
@property (copy, nonatomic) id recordZoneWithIDChangedBlock;
@property (copy, nonatomic) id recordZoneWithIDWasDeletedBlock;
@property (readonly, nonatomic) char moreComing;
@property (copy, nonatomic) id fetchChangedRecordZonesCompletionBlock;
@property (retain, nonatomic) CKServerChangeToken * serverChangeToken;
@property (nonatomic) int status;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (void)_handleCompletionCallback:(id /* block */)arg0;
- (id /* block */)fetchChangedRecordZonesCompletionBlock;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (CKFetchChangedRecordZonesOperation *)initWithPreviousServerChangeToken:(CKServerChangeToken *)arg0;
- (void)setResultsLimit:(unsigned int)arg0;
- (void)setRecordZoneWithIDChangedBlock:(id /* block */)arg0;
- (void)setRecordZoneWithIDWasDeletedBlock:(id /* block */)arg0;
- (char)moreComing;
- (void)setFetchChangedRecordZonesCompletionBlock:(id /* block */)arg0;
- (CKServerChangeToken *)serverChangeToken;
- (void)setServerChangeToken:(CKServerChangeToken *)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (unsigned int)resultsLimit;
- (CKServerChangeToken *)previousServerChangeToken;
- (id /* block */)recordZoneWithIDChangedBlock;
- (id /* block */)recordZoneWithIDWasDeletedBlock;
- (void)setPreviousServerChangeToken:(CKServerChangeToken *)arg0;

@end
