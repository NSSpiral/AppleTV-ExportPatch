/* Runtime dump - CKDModifyRecordZonesOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation
{
    char _allowDefaultZoneSave;
    char _markZonesAsUserPurged;
    id _saveCompletionBlock;
    id _deleteCompletionBlock;
    NSMutableArray * _recordZonesToSave;
    NSArray * _recordZoneIDsToDelete;
    NSMutableDictionary * _recordZonesByZoneID;
    NSMutableDictionary * _pcsOplockFailureCountByZoneID;
    int _numZoneSaveAttempts;
}

@property (copy, nonatomic) id saveCompletionBlock;
@property (copy, nonatomic) id deleteCompletionBlock;
@property (retain, nonatomic) NSMutableArray * recordZonesToSave;
@property (retain, nonatomic) NSArray * recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary * recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary * pcsOplockFailureCountByZoneID;
@property (nonatomic) char allowDefaultZoneSave;
@property (nonatomic) char markZonesAsUserPurged;
@property (nonatomic) int numZoneSaveAttempts;

- (void)main;
- (void).cxx_destruct;
- (void)setMarkZonesAsUserPurged:(char)arg0;
- (CKDModifyRecordZonesOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setSaveCompletionBlock:(id /* block */)arg0;
- (void)setDeleteCompletionBlock:(id /* block */)arg0;
- (NSObject *)nameForState:(unsigned int)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (char)makeStateTransition;
- (void)setRecordZonesToSave:(NSMutableArray *)arg0;
- (void)setAllowDefaultZoneSave:(char)arg0;
- (NSMutableArray *)recordZonesToSave;
- (NSArray *)recordZoneIDsToDelete;
- (char)allowDefaultZoneSave;
- (char)markZonesAsUserPurged;
- (void)_fetchPCSDataForZonesFromServer:(char)arg0;
- (int)numZoneSaveAttempts;
- (void)setNumZoneSaveAttempts:(int)arg0;
- (char)_saveZonesToServer;
- (void)_sendErrorForFailedZones;
- (id /* block */)saveCompletionBlock;
- (NSMutableDictionary *)recordZonesByZoneID;
- (id /* block */)deleteCompletionBlock;
- (void)_handleRecordZoneSaved:(id)arg0 responseCode:(int *)arg1;
- (void)_handleRecordZoneDeleted:(id)arg0 responseCode:(int *)arg1;
- (void)_fetchPCSDataForZone:(NSObject *)arg0 fromServer:(char)arg1;
- (void)_checkAndPrepareZones;
- (void)setRecordZoneIDsToDelete:(NSArray *)arg0;
- (void)setRecordZonesByZoneID:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)pcsOplockFailureCountByZoneID;
- (void)setPcsOplockFailureCountByZoneID:(NSMutableDictionary *)arg0;

@end
