/* Runtime dump - CKModifyRecordsOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordsOperation : CKDatabaseOperation
{
    char _atomic;
    char _shouldOnlySaveAssetContent;
    NSArray * _recordsToSave;
    NSArray * _recordIDsToDelete;
    int _savePolicy;
    NSData * _clientChangeTokenData;
    id _perRecordProgressBlock;
    id _perRecordCompletionBlock;
    id _modifyRecordsCompletionBlock;
    NSDictionary * _recordIDsToDeleteToEtags;
    NSDictionary * _conflictLosersToResolveByRecordID;
    NSMutableArray * _savedRecords;
    NSMutableArray * _deletedRecordIDs;
    NSMutableDictionary * _recordsByRecordIDs;
    NSMutableDictionary * _recordErrors;
    NSMutableDictionary * _assetsByRecordIDAndRecordKey;
}

@property (copy, nonatomic) NSArray * recordsToSave;
@property (copy, nonatomic) NSArray * recordIDsToDelete;
@property (nonatomic) int savePolicy;
@property (copy, nonatomic) NSData * clientChangeTokenData;
@property (nonatomic) char atomic;
@property (copy, nonatomic) id perRecordProgressBlock;
@property (copy, nonatomic) id perRecordCompletionBlock;
@property (copy, nonatomic) id modifyRecordsCompletionBlock;
@property (nonatomic) char shouldOnlySaveAssetContent;
@property (copy, nonatomic) NSDictionary * recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary * conflictLosersToResolveByRecordID;
@property (retain, nonatomic) NSMutableArray * savedRecords;
@property (retain, nonatomic) NSMutableArray * deletedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary * recordsByRecordIDs;
@property (retain, nonatomic) NSMutableDictionary * recordErrors;
@property (retain, nonatomic) NSMutableDictionary * assetsByRecordIDAndRecordKey;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSMutableDictionary *)recordErrors;
- (void)setRecordErrors:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)recordsByRecordIDs;
- (id /* block */)perRecordProgressBlock;
- (NSMutableDictionary *)assetsByRecordIDAndRecordKey;
- (NSMutableArray *)savedRecords;
- (id /* block */)perRecordCompletionBlock;
- (id /* block */)modifyRecordsCompletionBlock;
- (void)setSavedRecords:(NSMutableArray *)arg0;
- (void)setRecordsByRecordIDs:(NSMutableDictionary *)arg0;
- (void)setAssetsByRecordIDAndRecordKey:(NSMutableDictionary *)arg0;
- (CKModifyRecordsOperation *)init;
- (void).cxx_destruct;
- (void)setPerRecordCompletionBlock:(id /* block */)arg0;
- (CKModifyRecordsOperation *)initWithRecordsToSave:(NSArray *)arg0 recordIDsToDelete:(NSArray *)arg1;
- (void)setShouldOnlySaveAssetContent:(char)arg0;
- (void)setSavePolicy:(int)arg0;
- (void)setAtomic:(char)arg0;
- (void)setPerRecordProgressBlock:(id /* block */)arg0;
- (void)setModifyRecordsCompletionBlock:(id /* block */)arg0;
- (NSMutableArray *)deletedRecordIDs;
- (NSDictionary *)recordIDsToDeleteToEtags;
- (NSArray *)recordsToSave;
- (NSDictionary *)conflictLosersToResolveByRecordID;
- (void)setRecordsToSave:(NSArray *)arg0;
- (void)setRecordIDsToDelete:(NSArray *)arg0;
- (void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg0;
- (void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg0;
- (void)setClientChangeTokenData:(NSData *)arg0;
- (void)setDeletedRecordIDs:(NSMutableArray *)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)recordIDsToDelete;
- (int)savePolicy;
- (NSData *)clientChangeTokenData;
- (char)shouldOnlySaveAssetContent;
- (char)atomic;

@end
