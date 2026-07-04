/* Runtime dump - BRDownloadManager
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRDownloadManager : NSObject
{
    NSMutableArray * _downloads;
    NSMutableArray * _playableNotifications;
}

+ (void)registerDownloadTestManager:(NSObject *)arg0;
+ (BRDownloadManager *)allDownloads;
+ (NSObject *)shortDisplayStringForDownloadState:(int)arg0;
+ (NSObject *)downloadTestManager;
+ (NSObject *)displayStringForDownloadStateWithPercentageForItem:(NSObject *)arg0;
+ (NSObject *)displayStringForDownloadEstimatedTimeUntilPlayableForItem:(NSObject *)arg0;
+ (char)downloadsInProgress;
+ (NSObject *)displayStringForDownloadState:(int)arg0 context:(int)arg1;
+ (void)registerDownloadManager:(NSObject *)arg0 forMediaType:(NSObject *)arg1;
+ (void)removeDownloadManagerForMediaType:(NSObject *)arg0;
+ (BRDownloadManager *)downloadManagerForMediaType:(NSObject *)arg0;
+ (NSObject *)shortDisplayStringForDownloadStateWithPercentageForItem:(NSObject *)arg0;
+ (void)initialize;

- (void)startNetworkSpeedTestWithUserInput:(NSMutableDictionary *)arg0 testType:(unsigned long)arg1;
- (void)removeDownload:(SKDownload *)arg0;
- (char)networkDiagnosticsAvailable;
- (char)networkTestInProgress;
- (void)startNetworkSpeedTestWithUserInput:(NSMutableDictionary *)arg0;
- (void)cancelNetworkSpeedTest;
- (NSObject *)downloadsWithQualifiedState:(int)arg0;
- (void)pauseCurrentDownloads;
- (void)_assetPlayable:(id)arg0;
- (void)deleteDownloadFromITunesQueue:(NSObject *)arg0 removeFromDisk:(char)arg1;
- (void)prioritizeDownload:(id)arg0;
- (NSMutableArray *)downloads;
- (void)dealloc;
- (BRDownloadManager *)init;
- (void)addDownload:(SKDownload *)arg0;

@end
