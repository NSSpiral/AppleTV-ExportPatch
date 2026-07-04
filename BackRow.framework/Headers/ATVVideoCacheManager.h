/* Runtime dump - ATVVideoCacheManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol BRTransportDataProvider;

@class BRChapter, BRChapterGroup, BRKeyValueObservingRegistry, BRStreamingMediaAsset;
@interface ATVVideoCacheManager : BRSingleton <BRTransportDataProvider>
{
    AVAssetCache * _rentalCache;
    AVAssetCache * _otherCache;
    AVAssetCache * _avFoundationPrivateCache;
    NSMutableDictionary * _cacheKeys;
    BRStreamingMediaAsset * _mediaAssetBeingCached;
    BRKeyValueObservingRegistry * _kvoRegistry;
    <ATVVideoCacheManagerDelegate> * _delegate;
    AVPlayerLayer * _playerLayer;
    AVQueuePlayer * _player;
    AVAsset * _avAsset;
    AVAssetDownloadSession * _avAssetDownloadSession;
    AVPlayerItem * _playerItem;
    char _isItemLikelyToKeepUp;
    char _itemPrepared;
    double _videoStartTime;
    NSTimer * _bufferProgressTimer;
    double _computedReadyToPlayTime;
    char _computedReadyToPlayTimeReady;
}

@property (weak, nonatomic) <ATVVideoCacheManagerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVVideoCacheManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (NSObject *)currentlyCachingItem;
- (char)isItemLoading:(id)arg0;
- (char)isItemReadyToPlay:(id)arg0;
- (char)supportsBufferedRange;
- (struct BRTimeRange)bufferedRange;
- (char)bufferedRangeIsSubset;
- (float)bufferingProgress;
- (char)isAssetReadyToPlay:(id /* <BRMediaAsset> */)arg0;
- (BRChapter *)chapterAtIndex:(long)arg0;
- (double)virtualChapterMark;
- (long)chapterGroupCount;
- (long)chapterGroupIndex;
- (BRChapterGroup *)chapterGroupAtIndex:(long)arg0;
- (NSArray *)interstitialTimes;
- (long)currentInterstitialIndex;
- (void)startCachingItem:(NSObject *)arg0;
- (void)_handleDiskSpaceRequest:(NSURLRequest *)arg0;
- (void)_cloudDataClientUpdated:(id)arg0;
- (void)_storeAccountActivity:(id)arg0;
- (NSCache *)_rentalCache;
- (NSCache *)_otherCache;
- (char)_assetIsLiveStreaming:(id)arg0;
- (NSSet *)cacheInfoForAsset:(NSSet *)arg0;
- (void)_postItemStateChangedNotification:(NSNotification *)arg0;
- (void)startCachingItem:(NSObject *)arg0 withElapsedTime:(double)arg1;
- (void)_startCachingURL:(NSURL *)arg0 orItem:(NSObject *)arg1 withElapsedTime:(double)arg2;
- (void)_stopCaching;
- (void)_deleteCloudCacheContents;
- (void)saveCacheKey:(NSString *)arg0 forAsset:(NSObject *)arg1;
- (void)saveCacheKey:(NSString *)arg0 forURL:(NSURL *)arg1;
- (void)evictAsset:(NSSet *)arg0;
- (void)evictURL:(NSURL *)arg0;
- (void)startCachingURL:(NSURL *)arg0;
- (void)stopCaching;
- (void)deleteCloudCacheContents;
- (char)isAssetLoading:(id)arg0;
- (double)secondsUntilItemWillBeReadyToPlay:(id)arg0;
- (CALayer *)currentPlayerLayer;
- (char)_verifyDirectoryExists:(id)arg0;
- (void)_configurePlayerItemForObserving;
- (void)_cacheNotification:(char)arg0;
- (long)currentChapterIndex;
- (void)dealloc;
- (void)setDelegate:(<ATVVideoCacheManagerDelegate> *)arg0;
- (ATVVideoCacheManager *)init;
- (<ATVVideoCacheManagerDelegate> *)delegate;
- (double)duration;
- (double)elapsedTime;
- (void)_networkStatusChanged:(NSNotification *)arg0;
- (void)setupCacheRepositories;
- (long long)_clearSpaceInCache:(NSObject *)arg0 smallestFirst:(char)arg1 upTo:(unsigned long long)arg2;
- (AVPlayerItem *)currentPlayerItem;
- (void)_bufferProgressTimerFired:(id)arg0;
- (NSDictionary *)configurationInfo;
- (double)videoStartTime;
- (NSDate *)playbackDate;
- (int)playerState;
- (CALayer *)currentPlayer;
- (NSArray *)chapters;

@end
