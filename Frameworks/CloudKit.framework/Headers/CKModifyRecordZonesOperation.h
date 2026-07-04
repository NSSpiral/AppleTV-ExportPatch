/* Runtime dump - CKModifyRecordZonesOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordZonesOperation : CKDatabaseOperation
{
    char _markZonesAsUserPurged;
    NSArray * _recordZonesToSave;
    NSArray * _recordZoneIDsToDelete;
    id _modifyRecordZonesCompletionBlock;
    NSMutableArray * _savedRecordZones;
    NSMutableArray * _deletedRecordZoneIDs;
    NSMutableDictionary * _recordZonesByZoneIDs;
    NSMutableDictionary * _recordZoneErrors;
}

@property (copy, nonatomic) NSArray * recordZonesToSave;
@property (copy, nonatomic) NSArray * recordZoneIDsToDelete;
@property (copy, nonatomic) id modifyRecordZonesCompletionBlock;
@property (nonatomic) char markZonesAsUserPurged;
@property (retain, nonatomic) NSMutableArray * savedRecordZones;
@property (retain, nonatomic) NSMutableArray * deletedRecordZoneIDs;
@property (retain, nonatomic) NSMutableDictionary * recordZonesByZoneIDs;
@property (retain, nonatomic) NSMutableDictionary * recordZoneErrors;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (NSMutableDictionary *)recordZonesByZoneIDs;
- (NSMutableDictionary *)recordZoneErrors;
- (NSMutableArray *)deletedRecordZoneIDs;
- (NSMutableArray *)savedRecordZones;
- (id /* block */)modifyRecordZonesCompletionBlock;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (void)setSavedRecordZones:(NSMutableArray *)arg0;
- (void)setDeletedRecordZoneIDs:(NSMutableArray *)arg0;
- (void)setRecordZonesByZoneIDs:(NSMutableDictionary *)arg0;
- (void)setRecordZoneErrors:(NSMutableDictionary *)arg0;
- (CKModifyRecordZonesOperation *)init;
- (void).cxx_destruct;
- (CKModifyRecordZonesOperation *)initWithRecordZonesToSave:(NSArray *)arg0 recordZoneIDsToDelete:(NSArray *)arg1;
- (void)setModifyRecordZonesCompletionBlock:(id /* block */)arg0;
- (void)setMarkZonesAsUserPurged:(char)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (void)setRecordZonesToSave:(NSArray *)arg0;
- (NSArray *)recordZonesToSave;
- (NSArray *)recordZoneIDsToDelete;
- (char)markZonesAsUserPurged;
- (void)setRecordZoneIDsToDelete:(NSArray *)arg0;

@end
