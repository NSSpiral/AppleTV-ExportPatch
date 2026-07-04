/* Runtime dump - CKQueryOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryOperation : CKDatabaseOperation
{
    char _shouldFetchAssetContent;
    char _isFinishing;
    CKQuery * _query;
    CKQueryCursor * _cursor;
    CKRecordZoneID * _zoneID;
    unsigned int _resultsLimit;
    NSArray * _desiredKeys;
    id _recordFetchedBlock;
    id _queryCompletionBlock;
    NSArray * _results;
    CKQueryCursor * _resultsCursor;
    NSObject<OS_dispatch_queue> * _queryResultQueue;
}

@property (copy, nonatomic) CKQuery * query;
@property (copy, nonatomic) CKQueryCursor * cursor;
@property (copy, nonatomic) CKRecordZoneID * zoneID;
@property (nonatomic) unsigned int resultsLimit;
@property (copy, nonatomic) NSArray * desiredKeys;
@property (copy, nonatomic) id recordFetchedBlock;
@property (copy, nonatomic) id queryCompletionBlock;
@property (retain, nonatomic) NSArray * results;
@property (retain, nonatomic) CKQueryCursor * resultsCursor;
@property (nonatomic) char shouldFetchAssetContent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queryResultQueue;
@property (nonatomic) char isFinishing;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (void)_handleCompletionCallback:(id /* block */)arg0;
- (char)isFinishing;
- (NSObject<OS_dispatch_queue> *)queryResultQueue;
- (id /* block */)queryCompletionBlock;
- (void)setIsFinishing:(char)arg0;
- (void)setQueryResultQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (CKQueryOperation *)init;
- (CKQuery *)query;
- (void)setQuery:(CKQuery *)arg0;
- (NSArray *)results;
- (CKQueryCursor *)cursor;
- (void)setCursor:(CKQueryCursor *)arg0;
- (void).cxx_destruct;
- (void)setResults:(NSArray *)arg0;
- (void)setResultsLimit:(unsigned int)arg0;
- (void)setDesiredKeys:(NSArray *)arg0;
- (CKRecordZoneID *)zoneID;
- (CKQueryOperation *)initWithCursor:(CKQueryCursor *)arg0;
- (CKQueryOperation *)initWithQuery:(CKQuery *)arg0;
- (void)setZoneID:(CKRecordZoneID *)arg0;
- (void)setRecordFetchedBlock:(id /* block */)arg0;
- (void)setQueryCompletionBlock:(id /* block */)arg0;
- (void)setShouldFetchAssetContent:(char)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)desiredKeys;
- (id /* block */)recordFetchedBlock;
- (unsigned int)resultsLimit;
- (char)shouldFetchAssetContent;
- (CKQueryCursor *)resultsCursor;
- (void)setResultsCursor:(CKQueryCursor *)arg0;

@end
