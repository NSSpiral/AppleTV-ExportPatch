/* Runtime dump - CKDModifyWebSharingOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyWebSharingOperation : CKDDatabaseOperation
{
    id _recordWebSharedBlock;
    id _recordWebUnsharedBlock;
    NSArray * _recordIDsToShare;
    NSArray * _recordIDsToUnshare;
    NSArray * _recordIDsToShareReadWrite;
    NSMutableSet * _fetchedRecordIDs;
    NSMutableDictionary * _recordsToSaveByID;
    int _numSaveAttempts;
}

@property (copy, nonatomic) id recordWebSharedBlock;
@property (copy, nonatomic) id recordWebUnsharedBlock;
@property (retain, nonatomic) NSArray * recordIDsToShare;
@property (retain, nonatomic) NSArray * recordIDsToUnshare;
@property (retain, nonatomic) NSArray * recordIDsToShareReadWrite;
@property (retain, nonatomic) NSMutableSet * fetchedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary * recordsToSaveByID;
@property (nonatomic) int numSaveAttempts;

- (void)main;
- (void).cxx_destruct;
- (void)setRecordIDsToShareReadWrite:(NSArray *)arg0;
- (CKDModifyWebSharingOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setRecordWebSharedBlock:(id /* block */)arg0;
- (void)setRecordWebUnsharedBlock:(id /* block */)arg0;
- (NSObject *)nameForState:(unsigned int)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (char)makeStateTransition;
- (NSArray *)recordIDsToShare;
- (NSArray *)recordIDsToUnshare;
- (NSArray *)recordIDsToShareReadWrite;
- (void)_fetchRecords;
- (void)_saveRecords;
- (NSMutableDictionary *)recordsToSaveByID;
- (int)numSaveAttempts;
- (id /* block */)recordWebSharedBlock;
- (id /* block */)recordWebUnsharedBlock;
- (void)setNumSaveAttempts:(int)arg0;
- (void)_handleRecordSaved:(id)arg0 error:(NSError *)arg1;
- (struct _PCSIdentityData *)_copyShareProtectionFromRecord:(NSObject *)arg0 error:(id *)arg1;
- (void)_handleRecordFetched:(id)arg0 recordID:(NSObject *)arg1 error:(NSError *)arg2;
- (NSMutableSet *)fetchedRecordIDs;
- (void)setRecordIDsToShare:(NSArray *)arg0;
- (void)setRecordIDsToUnshare:(NSArray *)arg0;
- (void)setFetchedRecordIDs:(NSMutableSet *)arg0;
- (void)setRecordsToSaveByID:(NSMutableDictionary *)arg0;

@end
