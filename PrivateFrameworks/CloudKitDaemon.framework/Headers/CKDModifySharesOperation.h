/* Runtime dump - CKDModifySharesOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifySharesOperation : CKDDatabaseOperation
{
    char _haveOutstandingMetadatas;
    id _saveCompletionBlock;
    id _deleteCompletionBlock;
    NSMutableArray * _shareMetadatas;
    int _numShareSaveAttempts;
}

@property (copy, nonatomic) id saveCompletionBlock;
@property (copy, nonatomic) id deleteCompletionBlock;
@property (retain, nonatomic) NSMutableArray * shareMetadatas;
@property (nonatomic) char haveOutstandingMetadatas;
@property (nonatomic) int numShareSaveAttempts;

- (void)main;
- (void).cxx_destruct;
- (CKDModifySharesOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setSaveCompletionBlock:(id /* block */)arg0;
- (void)setDeleteCompletionBlock:(id /* block */)arg0;
- (NSObject *)nameForState:(unsigned int)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (char)makeStateTransition;
- (id /* block */)saveCompletionBlock;
- (id /* block */)deleteCompletionBlock;
- (char)_performMetadataCallbacks;
- (void)_determineEnvironment;
- (void)_fetchPCSDataForShares;
- (void)_preparePCSDataForShares;
- (void)_saveSharesToServer;
- (void)_fetchParticipantsForShares;
- (int)numShareSaveAttempts;
- (NSMutableArray *)shareMetadatas;
- (void)_callbackForMetadata:(NSDictionary *)arg0;
- (void)_handleShareFetched:(id)arg0 forMetadata:(NSDictionary *)arg1 error:(NSError *)arg2;
- (NSObject *)_ownerUserIdentity;
- (void)_addOwnerToShares;
- (void)setNumShareSaveAttempts:(int)arg0;
- (void)_handleShareDeleted:(id)arg0 responseCode:(int *)arg1;
- (void)_handleShareSaved:(id)arg0 forMetadata:(NSDictionary *)arg1 responseCode:(int *)arg2;
- (char)_cleanPublicPCSforShare:(id)arg0 withError:(id *)arg1;
- (char)_removeSelfFromPublicPCSForShareInfo:(NSDictionary *)arg0 error:(id *)arg1;
- (char)_serializePublicPCSForShareInfo:(NSDictionary *)arg0 error:(id *)arg1;
- (char)_updateSharePublicPCS:(id)arg0 error:(id *)arg1;
- (char)_serializePCSDataForShare:(id)arg0 error:(id *)arg1;
- (id)_createNewPCSDataForShare:(id)arg0 error:(id *)arg1;
- (void)_handlePCSData:(NSData *)arg0 forMetadata:(NSDictionary *)arg1 withError:(NSError *)arg2;
- (void)_handlePCSData:(NSData *)arg0 forDeletingMetadata:(NSDictionary *)arg1 withError:(NSError *)arg2;
- (void)_fetchPCSDataForDeletingMetadata:(NSDictionary *)arg0;
- (char)_decryptPCSDataForMetadata:(NSDictionary *)arg0;
- (void)_fetchPCSDataForMetadata:(NSDictionary *)arg0;
- (void)setShareMetadatas:(NSMutableArray *)arg0;
- (char)haveOutstandingMetadatas;
- (void)setHaveOutstandingMetadatas:(char)arg0;

@end
