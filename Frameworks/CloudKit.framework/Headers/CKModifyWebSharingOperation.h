/* Runtime dump - CKModifyWebSharingOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyWebSharingOperation : CKDatabaseOperation
{
    NSArray * _recordIDsToShareReadWrite;
    id _recordSharedBlock;
    id _recordUnsharedBlock;
    id _webShareRecordsCompletionBlock;
    NSArray * _recordIDsToShare;
    NSArray * _recordIDsToUnshare;
    NSMutableDictionary * _recordErrors;
    NSMutableArray * _sharedRecordIDs;
    NSMutableArray * _unsharedRecordIDs;
}

@property (retain, nonatomic) NSArray * recordIDsToShareReadWrite;
@property (copy, nonatomic) id recordSharedBlock;
@property (copy, nonatomic) id recordUnsharedBlock;
@property (copy, nonatomic) id webShareRecordsCompletionBlock;
@property (retain, nonatomic) NSArray * recordIDsToShare;
@property (retain, nonatomic) NSArray * recordIDsToUnshare;
@property (retain, nonatomic) NSMutableDictionary * recordErrors;
@property (retain, nonatomic) NSMutableArray * sharedRecordIDs;
@property (retain, nonatomic) NSMutableArray * unsharedRecordIDs;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSMutableDictionary *)recordErrors;
- (NSMutableArray *)sharedRecordIDs;
- (id /* block */)recordSharedBlock;
- (NSMutableArray *)unsharedRecordIDs;
- (id /* block */)recordUnsharedBlock;
- (id /* block */)webShareRecordsCompletionBlock;
- (void)setRecordErrors:(NSMutableDictionary *)arg0;
- (void)setSharedRecordIDs:(NSMutableArray *)arg0;
- (void)setUnsharedRecordIDs:(NSMutableArray *)arg0;
- (void).cxx_destruct;
- (CKModifyWebSharingOperation *)initWithRecordIDsToWebShare:(id)arg0 recordIDsToUnshare:(NSArray *)arg1;
- (void)setWebShareRecordsCompletionBlock:(id /* block */)arg0;
- (void)setRecordSharedBlock:(id /* block */)arg0;
- (void)setRecordUnsharedBlock:(id /* block */)arg0;
- (void)setRecordIDsToShareReadWrite:(NSArray *)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)recordIDsToShare;
- (NSArray *)recordIDsToUnshare;
- (NSArray *)recordIDsToShareReadWrite;
- (void)setRecordIDsToShare:(NSArray *)arg0;
- (void)setRecordIDsToUnshare:(NSArray *)arg0;

@end
