/* Runtime dump - MPStoreDownloadManager
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreDownloadManager : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, UIAlertViewDelegate>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _blockObservers;
    UIAlertView * _cellularDownloadAlertView;
    NSMutableArray * _cellularDownloadRequestCompletionHandlers;
    SSDownloadManager * _downloadManager;
    NSMutableArray * _downloads;
    NSMapTable * _downloadIdentifiersToDownloads;
    NSMapTable * _downloadsToObservers;
    NSMapTable * _libraryIdentifiersToDownloads;
    NSHashTable * _observersForAllDownloads;
    SSPurchaseManager * _purchaseManager;
    NSMapTable * _storeIdentifiersToDownloads;
}

@property (readonly, nonatomic) NSArray * downloads;
@property (readonly, nonatomic) char usingNetwork;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MPStoreDownloadManager *)sharedManager;

- (NSObject *)downloadForMediaItem:(NSObject *)arg0;
- (NSDictionary *)downloadForMediaPlaybackItemMetadata:(NSDictionary *)arg0;
- (id)addDownloads:(id)arg0;
- (void)addFinishHandler:(id /* block */)arg0 forDownloads:(/* block */ id)arg1;
- (void)requestPermissionToDownloadWithType:(int)arg0 completionHandler:(id /* block */)arg1;
- (void)removeObserver:(NSObject *)arg0 forDownloads:(/* block */ id)arg1;
- (void)addObserver:(NSObject *)arg0 forDownloads:(/* block */ id)arg1;
- (void)resumeDownloads:(id)arg0;
- (void)prioritizeDownloads:(id)arg0;
- (NSArray *)downloads;
- (void)pauseDownloads:(id)arg0;
- (void)downloadManagerNetworkUsageDidChange:(NSDictionary *)arg0;
- (NSObject *)downloadForMediaItemPersistentID:(unsigned long long)arg0;
- (NSObject *)downloadForStoreID:(long long)arg0;
- (void)_networkTypeDidChangeNotification:(NSNotification *)arg0;
- (char)isUsingNetwork;
- (void)_updateMediaItemPropertiesForFinishedStoreDownload:(id)arg0 SSDownload:(SSDownload *)arg1;
- (void)_updateDownloadsWithAdditions:(id)arg0 removals:(id)arg1;
- (void)_matchCellularRestrictedDidChangeNotification:(NSNotification *)arg0;
- (id)_onQueue_findStoreDownloadWithSSDownload:(id)arg0 SSPurchase:(SSPurchase *)arg1;
- (void)_sendDownloadsDidFinishToObserversForDownloads:(id)arg0 notifyDownloadManager:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)_registerBlockObserver:(NSObject *)arg0;
- (void)_sendDownloadsDidProgressToObserversForDownloads:(id)arg0;
- (void)_sendDownloadsDidFinishPurchasesToObserversForDownloads:(id)arg0;
- (id)_existingDownloadForSSDownload:(id)arg0;
- (void)_onQueue_addDownloadToMapTables:(id)arg0;
- (NSHashTable *)_observersForAllDownloads;
- (void)_dismissAndCleanupCellularDownloadAlertViewWithResult:(int)arg0;
- (id)_observersForDownload:(id)arg0;
- (char)_onQueue_hasExistingDownloadForStoreDownload:(id)arg0;
- (void)_onQueue_removeDownloadFromMapTables:(id)arg0;
- (void)_sendDownloadsDidChangeToObserversWithAddedDownloads:(id)arg0 removedDownloads:(NSMutableSet *)arg1;
- (void)downloadManager:(SSDownloadManager *)arg0 downloadStatesDidChange:(NSDictionary *)arg1;
- (void)purchaseManager:(SSPurchaseManager *)arg0 didFinishPurchasesWithResponses:(NSSet *)arg1;
- (void)cancelDownloads:(id)arg0;
- (NSString *)downloadForDownloadPersistentIdentifier:(long long)arg0;
- (void)_addPurchaseFinishedHandler:(id /* block */)arg0 forDownloads:(/* block */ id)arg1;
- (void)_unregisterBlockObserver:(NSObject *)arg0;
- (void)dealloc;
- (MPStoreDownloadManager *)init;
- (MPStoreDownloadManager *)_init;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void).cxx_destruct;

@end
