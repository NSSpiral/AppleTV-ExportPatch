/* Runtime dump - BRCSharedDatabaseSyncOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharedDatabaseSyncOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCServerChangeState * _changeState;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSOperationQueue *)queue;

- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (char)shouldRetryForError:(NSError *)arg0;
- (void)_performAfterAddingOwnerKeysForZoneIDs:(id)arg0 block:(id /* block */)arg1;
- (void)_performFetchChangedZones;
- (void)_performAfterRegisteringForPushes:(id)arg0;
- (BRCSharedDatabaseSyncOperation *)initWithSyncContext:(BRCSyncContext *)arg0 changeState:(BRCServerChangeState *)arg1 group:(NSObject *)arg2;

@end
