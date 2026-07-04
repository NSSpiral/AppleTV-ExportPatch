/* Runtime dump - CKModifyRecordAccessOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordAccessOperation : CKDatabaseOperation
{
    id _recordAccessGrantedBlock;
    id _recordAccessRevokedBlock;
    id _recordAccessCompletionBlock;
    NSArray * _recordIDsToGrant;
    NSArray * _recordIDsToRevoke;
    NSMutableDictionary * _recordErrors;
    NSMutableArray * _grantedRecordIDs;
    NSMutableArray * _revokedRecordIDs;
}

@property (copy, nonatomic) id recordAccessGrantedBlock;
@property (copy, nonatomic) id recordAccessRevokedBlock;
@property (copy, nonatomic) id recordAccessCompletionBlock;
@property (retain, nonatomic) NSArray * recordIDsToGrant;
@property (retain, nonatomic) NSArray * recordIDsToRevoke;
@property (retain, nonatomic) NSMutableDictionary * recordErrors;
@property (retain, nonatomic) NSMutableArray * grantedRecordIDs;
@property (retain, nonatomic) NSMutableArray * revokedRecordIDs;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSMutableDictionary *)recordErrors;
- (void)setRecordErrors:(NSMutableDictionary *)arg0;
- (NSMutableArray *)grantedRecordIDs;
- (id /* block */)recordAccessGrantedBlock;
- (NSMutableArray *)revokedRecordIDs;
- (id /* block */)recordAccessRevokedBlock;
- (id /* block */)recordAccessCompletionBlock;
- (void)setRecordAccessGrantedBlock:(id /* block */)arg0;
- (void)setRecordAccessRevokedBlock:(id /* block */)arg0;
- (void)setGrantedRecordIDs:(NSMutableArray *)arg0;
- (void)setRevokedRecordIDs:(NSMutableArray *)arg0;
- (void).cxx_destruct;
- (CKModifyRecordAccessOperation *)initWithRecordIDsToGrantAccess:(NSArray *)arg0 recordIDsToRevokeAccess:(id)arg1;
- (void)setRecordAccessCompletionBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)recordIDsToGrant;
- (NSArray *)recordIDsToRevoke;
- (void)setRecordIDsToGrant:(NSArray *)arg0;
- (void)setRecordIDsToRevoke:(NSArray *)arg0;

@end
