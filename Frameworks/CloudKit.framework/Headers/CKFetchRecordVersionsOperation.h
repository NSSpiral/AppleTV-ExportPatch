/* Runtime dump - CKFetchRecordVersionsOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation
{
    char _isDeleted;
    NSArray * _recordIDs;
    NSArray * _desiredKeys;
    NSString * _minimumVersionETag;
    id _fetchRecordVersionsProgressBlock;
    id _fetchRecordVersionsCompletionBlock;
    NSMutableDictionary * _recordErrors;
}

@property (copy, nonatomic) NSArray * recordIDs;
@property (copy, nonatomic) NSArray * desiredKeys;
@property (copy, nonatomic) NSString * minimumVersionETag;
@property (copy, nonatomic) id fetchRecordVersionsProgressBlock;
@property (copy, nonatomic) id fetchRecordVersionsCompletionBlock;
@property (retain, nonatomic) NSMutableDictionary * recordErrors;
@property (nonatomic) char isDeleted;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSMutableDictionary *)recordErrors;
- (void)setRecordErrors:(NSMutableDictionary *)arg0;
- (id /* block */)fetchRecordVersionsProgressBlock;
- (id /* block */)fetchRecordVersionsCompletionBlock;
- (void).cxx_destruct;
- (void)setDesiredKeys:(NSArray *)arg0;
- (CKFetchRecordVersionsOperation *)initWithRecordIDs:(NSArray *)arg0;
- (void)setFetchRecordVersionsProgressBlock:(id /* block */)arg0;
- (void)setFetchRecordVersionsCompletionBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (void)setRecordIDs:(NSArray *)arg0;
- (NSArray *)desiredKeys;
- (NSArray *)recordIDs;
- (void)setIsDeleted:(char)arg0;
- (NSString *)minimumVersionETag;
- (void)setMinimumVersionETag:(NSString *)arg0;
- (char)isDeleted;

@end
