/* Runtime dump - CKDModifyRecordAccessOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordAccessOperation : CKDDatabaseOperation
{
    id _accessWasGrantedBlock;
    id _accessWasRevokedBlock;
    NSArray * _recordIDsToGrant;
    NSArray * _recordIDsToRevoke;
    NSMutableSet * _fetchedRecordIDs;
    NSMutableDictionary * _recordsToSaveByID;
    int _numSaveAttempts;
}

@property (copy, nonatomic) id accessWasGrantedBlock;
@property (copy, nonatomic) id accessWasRevokedBlock;
@property (retain, nonatomic) NSArray * recordIDsToGrant;
@property (retain, nonatomic) NSArray * recordIDsToRevoke;
@property (retain, nonatomic) NSMutableSet * fetchedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary * recordsToSaveByID;
@property (nonatomic) int numSaveAttempts;

- (void)main;
- (void).cxx_destruct;
- (CKDModifyRecordAccessOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setAccessWasGrantedBlock:(id /* block */)arg0;
- (void)setAccessWasRevokedBlock:(id /* block */)arg0;
- (NSObject *)nameForState:(unsigned int)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (char)makeStateTransition;
- (void)_fetchRecords;
- (void)_saveRecords;
- (NSMutableDictionary *)recordsToSaveByID;
- (int)numSaveAttempts;
- (void)setNumSaveAttempts:(int)arg0;
- (void)_handleRecordSaved:(id)arg0 error:(NSError *)arg1;
- (struct _PCSIdentityData *)_copyShareProtectionFromRecord:(NSObject *)arg0 error:(id *)arg1;
- (void)_handleRecordFetched:(id)arg0 recordID:(NSObject *)arg1 error:(NSError *)arg2;
- (NSMutableSet *)fetchedRecordIDs;
- (void)setFetchedRecordIDs:(NSMutableSet *)arg0;
- (void)setRecordsToSaveByID:(NSMutableDictionary *)arg0;
- (NSArray *)recordIDsToGrant;
- (NSArray *)recordIDsToRevoke;
- (id /* block */)accessWasGrantedBlock;
- (id /* block */)accessWasRevokedBlock;
- (void)setRecordIDsToGrant:(NSArray *)arg0;
- (void)setRecordIDsToRevoke:(NSArray *)arg0;

@end
