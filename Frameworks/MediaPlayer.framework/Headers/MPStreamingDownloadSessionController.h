/* Runtime dump - MPStreamingDownloadSessionController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStreamingDownloadSessionController : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMapTable * _assetDownloadSessionToDownloadSessions;
    NSMapTable * _assetDownloadSessionToPlaybackMetadata;
    NSMutableArray * _assetDownloadSessionsPendingStart;
    unsigned int _pausingAllDownloadsTransactionCount;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long> > _prioritizedDownloadTokens;
    NSOperationQueue * _streamingOperationQueue;
    NSMapTable * _uniqueKeyToDownloadSessions;
}

+ (MPStreamingDownloadSessionController *)sharedDownloadSessionController;

- (void)endPrioritizingDownloadSession:(NSObject *)arg0;
- (void)acquireDownloadSessionWithRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;
- (void)startDownloadSession:(NSObject *)arg0;
- (void)releaseDownloadSession:(NSObject *)arg0;
- (void)beginPrioritizingDownloadSession:(NSObject *)arg0;
- (void)_networkTypeDidChangeNotification:(NSNotification *)arg0;
- (void)_unregisterDownloadSession:(NSObject *)arg0 withAssetDownloadSession:(NSObject *)arg1 playbackItemMetadata:(MPMediaPlaybackItemMetadata *)arg2 returningWasLastAssociatedDownloadSession:(char *)arg3;
- (void)_removeFileForAssetDownloadSession:(NSObject *)arg0 playbackItemMetadata:(MPMediaPlaybackItemMetadata *)arg1;
- (NSURLRequest *)_uniqueKeyForRequest:(NSURLRequest *)arg0;
- (NSString *)_createNewDownloadSessionWithExistingDownloadSessionForUniqueKey:(NSString *)arg0;
- (id)_preferredAssetFlavorsForAssetQuality:(unsigned int)arg0;
- (NSDictionary *)_newDownloadSessionForPlaybackItemMetadata:(NSDictionary *)arg0 sourceURL:(NSURL *)arg1 downloadKey:(NSString *)arg2 sinfs:(NSArray *)arg3 pathExtension:(NSString *)arg4 assetFlavor:(NSString *)arg5 protectionType:(unsigned int)arg6 returningAssetDownloadSession:(id *)arg7;
- (void)_handleNewDownloadSession:(NSObject *)arg0 withAssetDownloadSession:(NSObject *)arg1 forPlaybackItemMetadata:(NSDictionary *)arg2 uniqueKey:(NSString *)arg3;
- (NSObject *)_assetDownloadSessionForDownloadSession:(NSObject *)arg0 returningAllDownloadSessions:(id *)arg1 playbackItemMetadata:(id *)arg2;
- (void)_postFailedForDownloadSession:(NSObject *)arg0;
- (void)_handlePrioritizationForFinishingAssetDownloadSession:(NSObject *)arg0;
- (void)_auditNetworkConstraintsForAssetDownloadSession:(NSObject *)arg0 playbackItemMetadata:(MPMediaPlaybackItemMetadata *)arg1;
- (void)_auditAssetDownloadSession:(NSObject *)arg0 withNetworkConstraints:(SSNetworkConstraints *)arg1;
- (void)_getNetworkConstraintsForPlaybackItemMetadata:(NSDictionary *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)_registerForNotificationsForAssetDownloadSession:(NSObject *)arg0;
- (void)_registerForNotificationsForPlaybackItemMetadata:(NSDictionary *)arg0;
- (unsigned int)_assetQualityForAssetFlavor:(id)arg0;
- (id)_downloadKeyCookieWithValue:(id)arg0 URL:(NSString *)arg1;
- (id)_sinfsByCleaningSinfs:(id)arg0;
- (void)_assetDownloadSessionDownloadFailedNotification:(NSNotification *)arg0;
- (void)_assetDownloadSessionDownloadSucceededNotification:(NSNotification *)arg0;
- (void)_assetDownloadSessionFileSizeAvailableNotification:(NSNotification *)arg0;
- (void)_playbackItemMetadataCanDownloadContentDidChangeNotification:(NSNotification *)arg0;
- (void)_unregisterForNotificationsForAssetDownloadSession:(NSObject *)arg0;
- (void)_unregisterForNotificationsForPlaybackItemMetadata:(NSDictionary *)arg0;
- (void)beginPausingAllDownloadSessions;
- (void)endPausingAllDownloadSessions;
- (void)dealloc;
- (MPStreamingDownloadSessionController *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
