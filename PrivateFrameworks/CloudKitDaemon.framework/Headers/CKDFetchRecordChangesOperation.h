/* Runtime dump - CKDFetchRecordChangesOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordChangesOperation : CKDDatabaseOperation
{
    char _shouldFetchAssetContents;
    id _recordChangedBlock;
    id _shareChangedBlock;
    CKServerChangeToken * _resultServerChangeToken;
    NSData * _resultClientChangeToken;
    int _status;
    CKRecordZoneID * _recordZoneID;
    CKServerChangeToken * _previousServerChangeToken;
    CKServerChangeToken * _clientChangeToken;
    NSArray * _desiredKeys;
    unsigned int _resultsLimit;
    NSData * _resultClientChangeTokenData;
    int _changeTypes;
}

@property (copy, nonatomic) id recordChangedBlock;
@property (copy, nonatomic) id shareChangedBlock;
@property (retain, nonatomic) CKServerChangeToken * resultServerChangeToken;
@property (readonly, nonatomic) NSData * resultClientChangeToken;
@property (nonatomic) int status;
@property (retain, nonatomic) CKRecordZoneID * recordZoneID;
@property (retain, nonatomic) CKServerChangeToken * previousServerChangeToken;
@property (retain, nonatomic) CKServerChangeToken * clientChangeToken;
@property (retain, nonatomic) NSArray * desiredKeys;
@property (nonatomic) char shouldFetchAssetContents;
@property (nonatomic) unsigned int resultsLimit;
@property (retain, nonatomic) NSData * resultClientChangeTokenData;
@property (nonatomic) int changeTypes;

- (void)main;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setResultsLimit:(unsigned int)arg0;
- (void)setDesiredKeys:(NSArray *)arg0;
- (void)setShouldFetchAssetContents:(char)arg0;
- (void)setRecordChangedBlock:(id /* block */)arg0;
- (CKDFetchRecordChangesOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setShareChangedBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(NSObject *)arg0;
- (NSArray *)desiredKeys;
- (unsigned int)resultsLimit;
- (void)setClientChangeToken:(CKServerChangeToken *)arg0;
- (CKServerChangeToken *)clientChangeToken;
- (CKServerChangeToken *)previousServerChangeToken;
- (void)setPreviousServerChangeToken:(CKServerChangeToken *)arg0;
- (void)setResultServerChangeToken:(CKServerChangeToken *)arg0;
- (void)_handleFetchChangesRequestFinished:(id)arg0;
- (CKServerChangeToken *)resultServerChangeToken;
- (CKRecordZoneID *)recordZoneID;
- (void)setRecordZoneID:(CKRecordZoneID *)arg0;
- (int)changeTypes;
- (void)setResultClientChangeTokenData:(NSData *)arg0;
- (NSData *)resultClientChangeTokenData;
- (void)setChangeTypes:(int)arg0;
- (char)shouldFetchAssetContents;
- (id /* block */)recordChangedBlock;
- (id /* block */)shareChangedBlock;
- (NSData *)resultClientChangeToken;

@end
