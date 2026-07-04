/* Runtime dump - CKFetchRecordsOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordsOperation : CKDatabaseOperation
{
    char _shouldFetchAssetContent;
    char _isFetchCurrentUserOperation;
    NSArray * _recordIDs;
    NSArray * _desiredKeys;
    id _perRecordProgressBlock;
    id _perRecordCompletionBlock;
    id _fetchRecordsCompletionBlock;
    NSMutableDictionary * _signaturesOfAssetsByRecordIDAndKey;
    NSMutableDictionary * _recordIDsToRecords;
    NSMutableDictionary * _recordErrors;
    NSDictionary * _desiredPackageFileIndices;
    NSDictionary * _recordIDsToVersionETags;
    NSDictionary * _webSharingIdentityDataByRecordID;
}

@property (copy, nonatomic) NSArray * recordIDs;
@property (copy, nonatomic) NSArray * desiredKeys;
@property (copy, nonatomic) id perRecordProgressBlock;
@property (copy, nonatomic) id perRecordCompletionBlock;
@property (copy, nonatomic) id fetchRecordsCompletionBlock;
@property (nonatomic) char shouldFetchAssetContent;
@property (retain, nonatomic) NSMutableDictionary * signaturesOfAssetsByRecordIDAndKey;
@property (retain, nonatomic) NSMutableDictionary * recordIDsToRecords;
@property (retain, nonatomic) NSMutableDictionary * recordErrors;
@property (copy, nonatomic) NSDictionary * desiredPackageFileIndices;
@property (nonatomic) char isFetchCurrentUserOperation;
@property (retain, nonatomic) NSDictionary * recordIDsToVersionETags;
@property (retain, nonatomic) NSDictionary * webSharingIdentityDataByRecordID;

+ (NSObject *)fetchCurrentUserRecordOperation;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSMutableDictionary *)recordErrors;
- (void)setRecordErrors:(NSMutableDictionary *)arg0;
- (id /* block */)perRecordProgressBlock;
- (id /* block */)perRecordCompletionBlock;
- (void)setIsFetchCurrentUserOperation:(char)arg0;
- (id /* block */)fetchRecordsCompletionBlock;
- (NSMutableDictionary *)recordIDsToRecords;
- (void)setRecordIDsToRecords:(NSMutableDictionary *)arg0;
- (CKFetchRecordsOperation *)init;
- (void).cxx_destruct;
- (void)setDesiredKeys:(NSArray *)arg0;
- (void)setFetchRecordsCompletionBlock:(id /* block */)arg0;
- (CKFetchRecordsOperation *)initWithRecordIDs:(NSArray *)arg0;
- (void)setRecordIDsToVersionETags:(NSDictionary *)arg0;
- (void)setPerRecordCompletionBlock:(id /* block */)arg0;
- (void)setPerRecordProgressBlock:(id /* block */)arg0;
- (void)setShouldFetchAssetContent:(char)arg0;
- (void)setDesiredPackageFileIndices:(NSDictionary *)arg0;
- (char)isFetchCurrentUserOperation;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (void)setRecordIDs:(NSArray *)arg0;
- (NSArray *)desiredKeys;
- (char)shouldFetchAssetContent;
- (NSArray *)recordIDs;
- (NSDictionary *)recordIDsToVersionETags;
- (NSDictionary *)desiredPackageFileIndices;
- (NSMutableDictionary *)signaturesOfAssetsByRecordIDAndKey;
- (NSDictionary *)webSharingIdentityDataByRecordID;
- (void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg0;
- (void)setSignaturesOfAssetsByRecordIDAndKey:(NSMutableDictionary *)arg0;

@end
