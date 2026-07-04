/* Runtime dump - PLCloudFeedEntriesManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudFeedEntriesManager : NSObject
{
    PLPhotoLibrary * __library;
}

@property (readonly, retain, nonatomic) PLPhotoLibrary * _library;

+ (PLCloudFeedEntriesManager *)sharedManager;

- (void)dealloc;
- (PLCloudFeedEntriesManager *)init;
- (PLPhotoLibrary *)_library;
- (void)processAlbumUpdates:(id)arg0 assetInserts:(id *)arg1 assetUpdates:(id *)arg2 commentInserts:(id *)arg3 invitationRecordUpdates:(id *)arg4 deletionEntries:(NSArray *)arg5 completionHandler:(id /* block */)arg6;
- (void)rebuildAllEntries:(NSArray *)arg0;
- (NSDate *)_firstEntryRelativeToDate:(NSDate *)arg0 ascending:(char)arg1 includeSameDate:(char)arg2;
- (NSObject *)_singleEntryOfType:(int)arg0 forSharedAlbum:(PHCloudSharedAlbum *)arg1;
- (NSObject *)_singleEntryOfType:(int)arg0 forInvitationRecord:(NSObject *)arg1;
- (void)_noteDidUpdateSharedAlbum:(id)arg0;
- (void)_noteDidReceiveSharedAsset:(NSSet *)arg0;
- (void)_noteDidReceiveSharedComments:(id)arg0;
- (void)_noteDidUpdateInvitationRecord:(NSObject *)arg0;
- (void)_noteContentDeletionAffectingAssetsEntry:(id)arg0;
- (void)_noteContentDeletionAffectingCommentsEntry:(id)arg0;
- (void)_noteContentDeletionAffectingInvitationEntry:(id)arg0;
- (void)_noteContentDeletionAffectingSubscriptionEntry:(id)arg0;
- (void)_noteContentDeletionAffectingInvitationResponseEntry:(id)arg0;
- (void)_noteContentDeletionAffectingAlbumCreatedEntry:(id)arg0;
- (id)_invitationReceivedEntryForSharedAlbum:(id)arg0;
- (id)_subscriptionEntryForSharedAlbum:(id)arg0;
- (id)_subscriptionDateForSharedAlbum:(id)arg0;
- (id)_albumCreatedEntryForSharedAlbum:(id)arg0;
- (NSSet *)_dateForAsset:(NSSet *)arg0;
- (char)_shouldIgnoreAsset:(NSSet *)arg0;
- (char)_wasAssetPublishedBeforeSubscription:(NSObject *)arg0;
- (void)_noteDidReceiveSharedAssetPublishedBeforeSubscription:(NSObject *)arg0;
- (NSDate *)_firstEntryOnOrBeforeDate:(NSDate *)arg0;
- (NSDate *)_firstEntryAfterDate:(NSDate *)arg0;
- (char)_shouldMergeAsset:(NSSet *)arg0 intoEntry:(id)arg1;
- (void)_addAsset:(NSSet *)arg0 toEntry:(QLZipArchiveEntry *)arg1;
- (void)_mergeOlderEntry:(id)arg0 intoMoreRecentEntry:(id)arg1;
- (void)_splitEntriesAtDate:(NSDate *)arg0;
- (void)_noteDidReceiveSharedComment:(id)arg0;
- (char)_shouldIgnoreComment:(id)arg0;
- (char)_wasCommentPublishedBeforeSubscription:(NSObject *)arg0;
- (void)_getEarliestDate:(id *)arg0 latestDate:(id *)arg1 forRangeOfContiguousCommentsEntriesAroundDate:(NSDate *)arg2;
- (id /* block */)_commentSortingComparator;
- (char)_tryMergingComment:(id)arg0 withEntry:(struct archive_entry *)arg1;
- (char)_shouldIgnoreInvitationRecord:(NSObject *)arg0;
- (NSObject *)_invitationAcceptedEntryForInvitationRecord:(NSObject *)arg0;
- (void)_mergeEntriesAroundDate:(NSDate *)arg0;
- (char)_commentIsBatchCaption:(id)arg0;
- (id /* block */)_assetSortingComparator;
- (NSDate *)_firstEntryOnOrAfterDate:(NSDate *)arg0;
- (NSObject *)_invitationDeclinedEntryForInvitationRecord:(NSObject *)arg0;

@end
