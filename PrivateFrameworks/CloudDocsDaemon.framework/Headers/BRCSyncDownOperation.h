/* Runtime dump - BRCSyncDownOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCServerZone * _serverZone;
    char _hasCaughtUp;
    char _isConsistent;
}

@property (readonly, nonatomic) char isConsistent;
@property (readonly, nonatomic) char hasCaughtUp;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCSyncDownOperation *)initWithServerZone:(BRCServerZone *)arg0;
- (char)hasCaughtUp;
- (char)isConsistent;
- (void)_performAfterFetchingXattrsForRecordIDs:(id)arg0 block:(id /* block */)arg1;
- (void)_performAfterFetchingOwnerIdentityForShareID:(NSObject *)arg0 block:(id /* block */)arg1;
- (void)_learnOwnerIdentity:(NSObject *)arg0;
- (void)_performAfterFetchingRecordChanges:(id)arg0;

@end
