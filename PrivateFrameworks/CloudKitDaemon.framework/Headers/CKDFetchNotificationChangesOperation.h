/* Runtime dump - CKDFetchNotificationChangesOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchNotificationChangesOperation : CKDOperation
{
    char _moreComing;
    id _notificationChangedBlock;
    CKServerChangeToken * _previousServerChangeToken;
    unsigned int _resultsLimit;
    CKServerChangeToken * _resultServerChangeToken;
}

@property (copy, nonatomic) id notificationChangedBlock;
@property (retain, nonatomic) CKServerChangeToken * previousServerChangeToken;
@property (nonatomic) unsigned int resultsLimit;
@property (retain, nonatomic) CKServerChangeToken * resultServerChangeToken;
@property (nonatomic) char moreComing;

- (void)main;
- (void).cxx_destruct;
- (void)setResultsLimit:(unsigned int)arg0;
- (char)moreComing;
- (CKDFetchNotificationChangesOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setNotificationChangedBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(NSObject *)arg0;
- (unsigned int)resultsLimit;
- (CKServerChangeToken *)previousServerChangeToken;
- (void)setPreviousServerChangeToken:(CKServerChangeToken *)arg0;
- (id /* block */)notificationChangedBlock;
- (void)setResultServerChangeToken:(CKServerChangeToken *)arg0;
- (void)setMoreComing:(char)arg0;
- (void)_handleFetchChangesRequestFinished:(id)arg0;
- (CKServerChangeToken *)resultServerChangeToken;

@end
