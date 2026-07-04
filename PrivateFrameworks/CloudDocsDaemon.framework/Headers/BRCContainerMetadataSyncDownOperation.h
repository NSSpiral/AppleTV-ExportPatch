/* Runtime dump - BRCContainerMetadataSyncDownOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerMetadataSyncDownOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCAccountSession * _session;
    BRCContainerMetadataSyncPersistedState * _state;
    NSMutableArray * _recordIDsForDesiredAssets;
    NSMutableArray * _desiredKeysForDesiredAssets;
    NSMutableDictionary * _recordIDsToVersionETagsForDesiredAssets;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)main;
- (void).cxx_destruct;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCContainerMetadataSyncDownOperation *)initWithSession:(BRCAccountSession *)arg0 state:(BRCContainerMetadataSyncPersistedState *)arg1;
- (void)performAfterFetchingAssetContents:(id)arg0;
- (void)performAfterFetchingRecordChanges:(id)arg0;
- (void)performAfterCreatingZoneIfNeeded:(id)arg0;

@end
