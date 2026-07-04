/* Runtime dump - ATVMediaCacheManager
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVMediaCacheManager : NSObject
{
    AVAssetCache * _smallCache;
    AVAssetCache * _largeCache;
    AVAssetCache * _avFoundationPrivateCache;
    char _ready;
    char _bufferFull;
    char _likelyToKeepUp;
    char _shouldPause;
    char _observingItem;
    char _willHandoffToPlayer;
    NSObject<ATVMediaItem> * _currentMediaItem;
    ATVMediaItemLoader * _itemLoader;
    AVQueuePlayer * _player;
    ATVStateMachine * _stateMachine;
    AVAssetDownloadSession * _downloadSession;
    AVPlayerItem * _currentPlayerItem;
    NSTimer * _bufferProgressTimer;
    double _secondsUntilItemReadyForPlayback;
    double _secondsUntilPlayableReadyToPlay;
    double _videoStartTime;
}

@property (retain, nonatomic) NSObject<ATVMediaItem> * currentMediaItem;
@property (readonly, nonatomic) double secondsUntilItemReadyForPlayback;
@property (nonatomic) char ready;
@property (retain, nonatomic) ATVMediaItemLoader * itemLoader;
@property (retain, nonatomic) AVQueuePlayer * player;
@property (nonatomic) double secondsUntilPlayableReadyToPlay;
@property (retain, nonatomic) ATVStateMachine * stateMachine;
@property (retain, nonatomic) AVAssetDownloadSession * downloadSession;
@property (retain, nonatomic) AVPlayerItem * currentPlayerItem;
@property (nonatomic) double videoStartTime;
@property (retain, nonatomic) NSTimer * bufferProgressTimer;
@property (nonatomic) char bufferFull;
@property (nonatomic) char likelyToKeepUp;
@property (nonatomic) char shouldPause;
@property (nonatomic) char observingItem;
@property (nonatomic) char willHandoffToPlayer;

+ (ATVMediaCacheManager *)sharedInstance;
+ (void)setupCacheRepositories;
+ (ATVMediaCacheManager *)_newAVPlayerItemForMediaItemLoader:(id)arg0 startTime:(double)arg1;
+ (CALayer *)_newAVQueuePlayer;

- (NSObject<ATVMediaItem> *)currentMediaItem;
- (void)dealloc;
- (ATVMediaCacheManager *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;
- (ATVStateMachine *)stateMachine;
- (NSObject *)avAssetCachingOptionsForMediaItem:(NSObject *)arg0;
- (void)setStateMachine:(ATVStateMachine *)arg0;
- (void)_setupCacheRepositories;
- (void)_initializeStateMachine;
- (void)_networkStatusChanged:(NSNotification *)arg0;
- (void)stopCaching:(char)arg0;
- (void)setCurrentMediaItem:(NSObject<ATVMediaItem> *)arg0;
- (long long)_clearSpaceInCache:(NSObject *)arg0 smallestFirst:(char)arg1 upTo:(unsigned long long)arg2;
- (void)setItemLoader:(ATVMediaItemLoader *)arg0;
- (ATVMediaItemLoader *)itemLoader;
- (void)setDownloadSession:(AVAssetDownloadSession *)arg0;
- (void)setCurrentPlayerItem:(AVPlayerItem *)arg0;
- (AVPlayerItem *)currentPlayerItem;
- (NSTimer *)bufferProgressTimer;
- (void)_bufferProgressTimerFired:(id)arg0;
- (void)setBufferProgressTimer:(NSTimer *)arg0;
- (void)setObservingItem:(char)arg0;
- (void)setSecondsUntilPlayableReadyToPlay:(double)arg0;
- (void)setLikelyToKeepUp:(char)arg0;
- (void)setBufferFull:(char)arg0;
- (AVAssetDownloadSession *)downloadSession;
- (void)setShouldPause:(char)arg0;
- (char)observingItem;
- (void)setVideoStartTime:(double)arg0;
- (char)bufferFull;
- (char)shouldPause;
- (void)_mediaItemLoader:(ATVMediaItemLoader *)arg0 stateDidChangeTo:(id)arg1;
- (void)_playbackLikelyToKeepUpDidChangeTo:(char)arg0;
- (void)_bufferDidBecomeFull:(char)arg0;
- (void)_playerItemStatusDidChange:(int)arg0;
- (void)startCachingMediaItem:(NSObject *)arg0 withElapsedTime:(double)arg1;
- (void)pauseCaching;
- (void)resumeCaching;
- (NSDictionary *)configurationInfo;
- (void)purgeAllCacheEntries;
- (void)clearSpace:(NSObject *)arg0;
- (double)secondsUntilItemReadyForPlayback;
- (double)secondsUntilPlayableReadyToPlay;
- (double)videoStartTime;
- (char)likelyToKeepUp;
- (char)willHandoffToPlayer;
- (void)setWillHandoffToPlayer:(char)arg0;
- (void)setReady:(char)arg0;
- (char)ready;
- (void)setPlayer:(AVQueuePlayer *)arg0;
- (AVQueuePlayer *)player;

@end
