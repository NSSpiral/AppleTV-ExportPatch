/* Runtime dump - MPNowPlayingObserver
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingObserver : NSObject <MPStoreDownloadManagerObserver>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    MPStoreDownload * _activeDownload;
    UIImage * _currentArtworkImage;
    NSData * _currentArtworkData;
    char _hasSeenAnyItem;
    NSMutableDictionary * _mediaItemCoalescedUpdateDateAccessedTimers;
    NSObject<OS_dispatch_queue> * _statusBarQueue;
    char _scheduledNowPlayingInfoUpdate;
    char _enabled;
    MPAVController * _player;
}

@property (nonatomic) char enabled;
@property (retain, nonatomic) MPAVController * player;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_playbackStateDidChangeNotification:(NSNotification *)arg0;
- (MPNowPlayingObserver *)initWithPlayer:(MPAVController *)arg0;
- (void)_itemDidChangeNotification:(NSNotification *)arg0;
- (void)_bufferingStateDidChangeNotification:(NSNotification *)arg0;
- (void)_rateDidChangeNotification:(NSNotification *)arg0;
- (void)_timeDidJumpNotification:(NSNotification *)arg0;
- (void)downloadManager:(SSDownloadManager *)arg0 didAddDownloads:(id)arg1 removeDownloads:(id)arg2;
- (void)downloadManager:(SSDownloadManager *)arg0 downloadDidFinish:(NSURLDownload *)arg1;
- (void)downloadManager:(SSDownloadManager *)arg0 downloadDidProgress:(id)arg1;
- (void)downloadManager:(SSDownloadManager *)arg0 downloadPurchaseDidFinish:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(NSNotification *)arg0;
- (void)_avItemArtworkDidChangeNotification:(NSNotification *)arg0;
- (void)_avItemDurationDidChangeNotification:(NSNotification *)arg0;
- (void)_avItemIsExplicitDidChangeNotification:(NSNotification *)arg0;
- (void)_avItemLikedStateDidChangeNotification:(NSNotification *)arg0;
- (void)_avItemTitlesDidChangeNotification:(NSNotification *)arg0;
- (void)_registerForNotificationsForPlayer:(id)arg0;
- (void)_unregisterForNotificationsForPlayer:(id)arg0;
- (char)_reloadArtworkIfPossible;
- (void)_setNeedsNowPlayingInfoUpdate;
- (NSArray *)_storeDownloadForNowPlayingItemInArray:(NSArray *)arg0;
- (void)_updateProgressForDownload:(id)arg0;
- (char)_hasProperConditionsToLoadArtwork;
- (void)_coalescedUpdateLastUsedDateForCurrentItem;
- (void)_prefetchArtworkForNextItem;
- (NSObject *)_activeDownloadForItemWithStoreID:(long long)arg0;
- (int)_MPNowPlayingDownloadStateForDownload:(id)arg0;
- (NSObject *)_additionalKeysForNowPlayingItem:(NSObject *)arg0;
- (void)_postNowPlayingInfoForItem:(NSObject *)arg0;
- (void)_setNowPlayingInfo:(NSDictionary *)arg0 forItem:(NSObject *)arg1;
- (void)_createNowPlayingInfoForItem:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)configureArtworkCatalog:(id)arg0;
- (void)_contentsDidChangeNotification:(NSNotification *)arg0;
- (void)_crossedTimeMarkerNotification:(NSNotification *)arg0;
- (void)_itemDidFinishLoadingNotification:(NSNotification *)arg0;
- (void)_repeatTypeDidChangeNotification:(NSNotification *)arg0;
- (void)_playbackErrorNotification:(NSNotification *)arg0;
- (void)_postNowPlayingInfo;
- (char)_itemNotificationIsRelevantToObservedPlayer:(id)arg0;
- (void)dealloc;
- (MPNowPlayingObserver *)init;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void).cxx_destruct;
- (void)setPlayer:(MPAVController *)arg0;
- (MPAVController *)player;

@end
