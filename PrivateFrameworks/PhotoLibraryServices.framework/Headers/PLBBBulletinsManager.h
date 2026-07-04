/* Runtime dump - PLBBBulletinsManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBBBulletinsManager : NSObject <PLBBPendingBulletinsBatchDelegate>
{
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSObject<OS_dispatch_source> * _saveTimerSource;
    PLXPCTransaction * _saveTimerTransaction;
    NSObject<OS_dispatch_source> * _pendingChangesTimerSource;
    PLXPCTransaction * _pendingChangesTimerTransaction;
    NSMutableDictionary * _dirtyPlist;
    NSMutableArray * _pendingBulletins;
    NSMutableArray * _pendingBatches;
    NSMutableIndexSet * _pendingDeleteRecordIDs;
    char _badgeCountIsInvalid;
    char _enableTemporaryDebugMode;
    void * _addressBook;
    int _alertFiltrationEnabled;
}

@property (readonly) NSArray * currentBulletinDictionaries;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PLBBBulletinsManager *)sharedManager;

- (void)dealloc;
- (PLBBBulletinsManager *)init;
- (void)discardAllBulletins;
- (void)noteDidReceiveAsset:(NSSet *)arg0 atIndex:(unsigned int)arg1 forSharedAlbum:(PHCloudSharedAlbum *)arg2 mstreamdInfo:(NSDictionary *)arg3;
- (void)noteDidReceiveLike:(id)arg0 mstreamdInfo:(NSDictionary *)arg1;
- (void)noteDidReceiveComment:(id)arg0 mstreamdInfo:(NSDictionary *)arg1;
- (void)noteDidChangePlaceholderKindForAsset:(NSSet *)arg0 fromOldKind:(short)arg1 forSharedAlbum:(PHCloudSharedAlbum *)arg2 mstreamdInfo:(NSDictionary *)arg3;
- (void)noteDidDeleteSharedAssetsWithUUIDs:(id)arg0;
- (void)noteInvitationRecordStatusChanged:(id)arg0 fromOldState:(int)arg1 mstreamdInfo:(NSDictionary *)arg2;
- (PLBBBulletinsManager *)_initSharedInstance;
- (id)_currentPlistContents;
- (char)_shouldAllowAlertsFromContactWithEmail:(id)arg0;
- (char)_invitationBulletinExistsForAlbum:(id)arg0;
- (void)_addPendingBulletins:(id)arg0;
- (void)_deleteBulletinsForAlbumWithUUID:(id)arg0 bulletinTypes:(NSArray *)arg1;
- (void)_scheduleProcessPendingChanges;
- (void)_deleteBulletinsForAssetWithUUID:(id)arg0 shouldDeleteCommentsOrLikeBulletins:(char)arg1 shouldDeletePhotosAddedToAlbumBulletins:(char)arg2;
- (char)enableTemporaryDebugMode;
- (id)_currentPendingBatch;
- (id)_editablePlistContents;
- (char)_bulletinType:(long long)arg0 matchesCommentsOrLikeBulletins:(char)arg1 andPhotosAddedToAlbumBulletins:(char)arg2;
- (void)_processPendingChanges;
- (unsigned int)_generateUniqueRecordID;
- (void)_saveDirtyChanges;
- (NSString *)_plistFilePath;
- (void)_setNeedsSaving;
- (void)setEnableTemporaryDebugMode:(char)arg0;
- (char)_alertFiltrationEnabled;
- (void *)addressBook;
- (void)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg0 didProcessReadyBulletins:(id)arg1 stillPending:(char)arg2;
- (char)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg0 shouldAllowAlertsFromContactWithEmail:(id)arg1;
- (id)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg0 bulletinByMergingPersistedListWithBulletin:(BBBulletin *)arg1;
- (NSArray *)currentBulletinDictionaries;
- (void)noteDidReceiveInvitationForSharedAlbum:(id)arg0;
- (void)noteDidDeleteSharedAlbum:(id)arg0;
- (void)noteMultipleContributorStatusChangedForAlbum:(id)arg0 mstreamdInfo:(NSDictionary *)arg1;
- (void)noteSharedAlbumUnseenStatusDidChange:(NSDictionary *)arg0;
- (void)noteSharedAssetCommentsUnreadStatusDidChange:(NSDictionary *)arg0;
- (void)noteUserDidViewCloudFeedContent:(int)arg0;
- (void)noteUserDidNavigateIntoSharedAlbum:(id)arg0;
- (void)noteUserDidNavigateAwayFromSharedAlbum:(id)arg0;
- (void)noteUserDidReadCommentOnSharedAsset:(NSSet *)arg0;
- (void)noteUserDidDeleteSharedAlbumWithUUID:(id)arg0;
- (void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)arg0;
- (void)noteUserDidLeavePhotosApplication;
- (void)clearAllBulletinsUpToRecordID:(unsigned long long)arg0;
- (void)calculateCurrentBadgeCountWithCompletionHandler:(id /* block */)arg0;
- (void)getThumbnailImageDataForBulletinWithRecordID:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (void)forceWriteUnsavedChanges;
- (void)_resetAlertFiltration;

@end
