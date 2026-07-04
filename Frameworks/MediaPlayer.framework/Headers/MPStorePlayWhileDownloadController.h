/* Runtime dump - MPStorePlayWhileDownloadController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStorePlayWhileDownloadController : NSObject <MPStoreDownloadManagerObserver, SSDownloadHandlerDelegate>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    SSDownloadHandler * _downloadHandler;
    NSMapTable * _downloadToActiveSessions;
    NSMapTable * _downloadToDownloadTokenPendingCompletionHandlers;
    NSMapTable * _downloadToProcessingDownloadHandlerSessions;
    NSMapTable * _downloadToObservationTransactionCount;
    NSMapTable * _downloadToValidStatePendingCompletionHandlers;
    NSMutableArray * _pausedDownloads;
    NSMutableArray * _prioritizedDownloads;
}

@property (readonly, nonatomic) long long downloadHandlerIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MPStorePlayWhileDownloadController *)sharedController;

- (void)endPrioritizingDownloadSession:(NSObject *)arg0;
- (long long)downloadHandlerIdentifier;
- (void)releasePlayWhileDownloadSession:(NSObject *)arg0;
- (void)acquirePlayWhileDownloadSessionForDownload:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)beginPrioritizingDownloadSession:(NSObject *)arg0;
- (void)_handleDownloadPrioritization;
- (void)_updateActiveSessionsForDownload:(id)arg0;
- (void)_updateForDownloadTokenRefreshWithDownload:(SSDownload *)arg0;
- (void)_updateForDownloadStateRefreshWithDownload:(SSDownload *)arg0;
- (void)_postActiveSessionsDidFinishForStoreDownload:(id)arg0;
- (void)_beginPrioritizingDownload:(id)arg0;
- (char)_isStoreDownloadValidForPlayWhileDownload:(id)arg0;
- (void)_beginDownloadObservationForDownload:(id)arg0;
- (void)_getDownloadTokenForStoreDownload:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)_suspendUntilValidDownloadStateForStoreDownload:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)_beginPrioritizingDownloadSession:(NSObject *)arg0;
- (void)_endPrioritizingDownloadSession:(NSObject *)arg0;
- (void)_endDownloadObservationForDownload:(id)arg0;
- (void)_endPrioritizingDownload:(id)arg0;
- (void)_getDownloadPropertiesForStoreDownload:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)downloadManager:(SSDownloadManager *)arg0 downloadDidFinish:(NSURLDownload *)arg1;
- (void)downloadManager:(SSDownloadManager *)arg0 downloadDidProgress:(id)arg1;
- (void)downloadManager:(SSDownloadManager *)arg0 downloadPurchaseDidFinish:(id)arg1;
- (void)downloadHandler:(SSDownloadHandler *)arg0 handleSession:(NSObject *)arg1;
- (void)downloadHandler:(SSDownloadHandler *)arg0 cancelSession:(NSObject *)arg1;
- (void)dealloc;
- (MPStorePlayWhileDownloadController *)init;
- (void).cxx_destruct;

@end
