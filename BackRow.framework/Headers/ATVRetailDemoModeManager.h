/* Runtime dump - ATVRetailDemoModeManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol NSURLDownloadDelegate;
@interface ATVRetailDemoModeManager : BRSingleton <NSURLDownloadDelegate>
{
    NSTimer * _retailPlaybackLimitTimer;
    char _hasStartedPlaying;
    NSURLDownload * _retailMovieDownload;
    NSMutableArray * _topPodcastsFavCandidates;
    NSMutableArray * _topShowsFavCandidates;
    char _retryOccurred;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)checkAndStart;
+ (ATVRetailDemoModeManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (ATVRetailDemoModeManager *)retailDemoCacheDir;
+ (NSString *)retailDemoMoviePath;
+ (char)retailDemoMovieDownloadComplete;

- (void)_nowPlayingStateChanged:(NSNotification *)arg0;
- (id)StoreFrontLocaleBinding;
- (void)_updateBoundStoreFrontLocale;
- (void)_resetRetailSettings;
- (void)updateRetailFavorites;
- (void)_updatePodcastFavorites;
- (void)_updateTVShowFavorites;
- (void)bindStoreFrontLocaleBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)performRetailReset;
- (char)_shouldLimitPlaybackForAsset:(NSSet *)arg0;
- (void)_startPlaybackLimitTimer;
- (void)_retailPlaybackLimitTimerFired:(id)arg0;
- (void)_downloadRetailDemoMovie;
- (void)_retryMovieDownloadLater;
- (NSURL *)_retailDemoMovieURL;
- (void)_topPodcastsReady:(id)arg0;
- (void)_fetchNextPodcastFav;
- (void)_podcastReady:(id)arg0;
- (void)_topTVShowsReady:(id)arg0;
- (void)_fetchNextTVShowFav;
- (void)_tvShowReady:(id)arg0;
- (void)download:(NSURLDownload *)arg0 didFailWithError:(NSError *)arg1;
- (void)downloadDidFinish:(NSURLDownload *)arg0;
- (void)dealloc;
- (ATVRetailDemoModeManager *)init;

@end
