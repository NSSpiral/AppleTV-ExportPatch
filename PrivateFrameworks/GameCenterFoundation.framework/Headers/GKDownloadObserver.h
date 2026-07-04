/* Runtime dump - GKDownloadObserver
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDownloadObserver : NSObject <SSDownloadManagerObserver>
{
    SSDownloadManager * _downloadManager;
}

@property (retain) SSDownloadManager * downloadManager;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (GKDownloadObserver *)sharedObserver;

- (void)downloadManager:(SSDownloadManager *)arg0 downloadStatesDidChange:(NSArray *)arg1;
- (void)dealloc;
- (GKDownloadObserver *)init;
- (char)isDownloadingGame:(id)arg0;
- (void)setDownloadManager:(SSDownloadManager *)arg0;
- (SSDownloadManager *)downloadManager;

@end
