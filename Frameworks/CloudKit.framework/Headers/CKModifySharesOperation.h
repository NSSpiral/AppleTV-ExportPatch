/* Runtime dump - CKModifySharesOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifySharesOperation : CKDatabaseOperation
{
    NSArray * _sharesToSave;
    NSArray * _shareIDsToDelete;
    id _modifySharesCompletionBlock;
    NSMutableDictionary * _savedSharesByShareID;
    NSMutableArray * _deletedShareIDs;
    NSMutableDictionary * _sharesByShareID;
    NSMutableDictionary * _shareErrorsByShareID;
}

@property (readonly, nonatomic) NSArray * sharesToSave;
@property (readonly, nonatomic) NSArray * shareIDsToDelete;
@property (copy, nonatomic) id modifySharesCompletionBlock;
@property (retain, nonatomic) NSMutableDictionary * savedSharesByShareID;
@property (retain, nonatomic) NSMutableArray * deletedShareIDs;
@property (retain, nonatomic) NSMutableDictionary * sharesByShareID;
@property (retain, nonatomic) NSMutableDictionary * shareErrorsByShareID;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSMutableDictionary *)sharesByShareID;
- (NSMutableDictionary *)shareErrorsByShareID;
- (NSMutableDictionary *)savedSharesByShareID;
- (id /* block */)modifySharesCompletionBlock;
- (void)setSavedSharesByShareID:(NSMutableDictionary *)arg0;
- (void)setSharesByShareID:(NSMutableDictionary *)arg0;
- (void)setShareErrorsByShareID:(NSMutableDictionary *)arg0;
- (CKModifySharesOperation *)init;
- (void).cxx_destruct;
- (NSMutableArray *)deletedShareIDs;
- (CKModifySharesOperation *)initWithSharesToSave:(NSArray *)arg0 shareIDsToDelete:(NSArray *)arg1;
- (void)setModifySharesCompletionBlock:(id /* block */)arg0;
- (void)setDeletedShareIDs:(NSMutableArray *)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)sharesToSave;
- (NSArray *)shareIDsToDelete;

@end
