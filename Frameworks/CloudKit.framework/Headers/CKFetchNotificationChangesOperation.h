/* Runtime dump - CKFetchNotificationChangesOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchNotificationChangesOperation : CKOperation
{
    char _moreComing;
    CKServerChangeToken * _previousServerChangeToken;
    unsigned int _resultsLimit;
    id _notificationChangedBlock;
    id _fetchNotificationChangesCompletionBlock;
    CKServerChangeToken * _resultServerChangeToken;
}

@property (copy, nonatomic) CKServerChangeToken * previousServerChangeToken;
@property (nonatomic) unsigned int resultsLimit;
@property (nonatomic) char moreComing;
@property (copy, nonatomic) id notificationChangedBlock;
@property (copy, nonatomic) id fetchNotificationChangesCompletionBlock;
@property (retain, nonatomic) CKServerChangeToken * resultServerChangeToken;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (void)_handleCompletionCallback:(id /* block */)arg0;
- (id /* block */)fetchNotificationChangesCompletionBlock;
- (void)setFetchNotificationChangesCompletionBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (CKFetchNotificationChangesOperation *)initWithPreviousServerChangeToken:(CKServerChangeToken *)arg0;
- (void)setResultsLimit:(unsigned int)arg0;
- (char)moreComing;
- (void)setNotificationChangedBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (unsigned int)resultsLimit;
- (CKServerChangeToken *)previousServerChangeToken;
- (void)setPreviousServerChangeToken:(CKServerChangeToken *)arg0;
- (id /* block */)notificationChangedBlock;
- (void)setResultServerChangeToken:(CKServerChangeToken *)arg0;
- (void)setMoreComing:(char)arg0;
- (CKServerChangeToken *)resultServerChangeToken;

@end
