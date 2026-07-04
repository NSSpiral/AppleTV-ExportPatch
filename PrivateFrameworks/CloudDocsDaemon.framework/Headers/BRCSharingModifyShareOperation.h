/* Runtime dump - BRCSharingModifyShareOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    BRCServerZone * _serverZone;
    CKShare * _share;
    BRCItemID * _itemID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)main;
- (void).cxx_destruct;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCSharingModifyShareOperation *)initWithName:(NSString *)arg0 zone:(NSObject *)arg1 share:(CKShare *)arg2;
- (void)_updateDBAndSyncDownIfNeededWithShare:(CKShare *)arg0;
- (void)_modifyShareAccessIfNecessaryGrantingAccess:(char)arg0 completion:(id /* block */)arg1;
- (void)_updateDocumentWithShareID:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)performAfterFetchingBaseTokenIfNecessary:(id)arg0;

@end
