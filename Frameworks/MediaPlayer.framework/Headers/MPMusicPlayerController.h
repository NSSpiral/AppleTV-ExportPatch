/* Runtime dump - MPMusicPlayerController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerController : NSObject <MPMediaPlayback>
{
    MPMusicPlayerControllerInternal * _internal;
}

@property (readonly, nonatomic) char isPreparedToPlay;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) float currentPlaybackRate;

+ (CALayer *)systemMusicPlayer;
+ (MPMusicPlayerController *)runLoopForNotifications;
+ (CALayer *)applicationMusicPlayer;
+ (CALayer *)iPodMusicPlayer;
+ (void)setRunLoopForNotifications:(id)arg0;
+ (void)initialize;

- (int)playbackState;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg0;
- (void)prepareToPlay;
- (char)isPreparedToPlay;
- (void)play;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)endSeeking;
- (double)currentPlaybackTime;
- (void)setCurrentPlaybackTime:(double)arg0;
- (float)currentPlaybackRate;
- (void)setCurrentPlaybackRate:(float)arg0;
- (void)_setUseApplicationSpecificQueue:(char)arg0;
- (void)_systemVolumeDidChange:(NSDictionary *)arg0;
- (void)_serverDied:(id)arg0;
- (void)_registerForLaunchNotifications;
- (void)_clientCheckInUsingExistencePort:(char)arg0;
- (char)_musicPlayerExistencePortIsValid;
- (void)_stopMigServer;
- (void)_unregisterForLaunchNotifications;
- (NSObject *)nowPlayingItem;
- (void)setNowPlayingItem:(NSObject *)arg0;
- (void)setQueueWithQuery:(NSObject *)arg0 firstItem:(NSObject *)arg1;
- (void)setQueueWithItemCollection:(MPMediaItemCollection *)arg0;
- (int)shuffleMode;
- (void)setShuffleMode:(int)arg0;
- (char)isGeniusAvailable;
- (char)isGeniusAvailableForSeedItems:(NSArray *)arg0;
- (char)setQueueWithSeedItems:(NSArray *)arg0;
- (NSObject *)nowPlayingItemAtIndex:(unsigned int)arg0;
- (void)pauseWithFadeoutDuration:(double)arg0;
- (char)allowsBackgroundVideo;
- (void)setAllowsBackgroundVideo:(char)arg0;
- (unsigned int)indexOfNowPlayingItem;
- (unsigned int)unshuffledIndexOfNowPlayingItem;
- (char)isNowPlayingItemFromGeniusMix;
- (unsigned int)currentChapterIndex;
- (void)setCurrentChapterIndex:(unsigned int)arg0;
- (void)setQueueWithGeniusMixPlaylist:(MPMediaPlaylist *)arg0;
- (void)setQueueWithRadioStation:(MPRadioStation *)arg0;
- (char)userQueueModificationsDisabled;
- (void)setUserQueueModificationsDisabled:(char)arg0;
- (char)serverIsAlive;
- (void)_playbackStateDidChange:(int)arg0;
- (void)_nowPlayingItemDidChange:(unsigned long long)arg0;
- (void)_runMigServerOnPort:(unsigned int)arg0;
- (void)_shuffleModeDidChange:(int)arg0;
- (void)_repeatModeDidChange:(int)arg0;
- (void)_isQueuePreparedDidChange:(char)arg0;
- (void)_itemPlaybackDidEnd:(unsigned long long)arg0;
- (void)setQueueWithQuery:(NSObject *)arg0;
- (void)setVolumePrivate:(float)arg0;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)setUseCachedPlaybackState:(char)arg0;
- (char)skipInDirection:(int)arg0 error:(id *)arg1;
- (void)_musicPlayerDidLaunch;
- (int)playbackSpeed;
- (void)setPlaybackSpeed:(int)arg0;
- (void)dealloc;
- (MPMusicPlayerController *)init;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)stop;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (unsigned int)numberOfItems;
- (void).cxx_destruct;
- (void)pause;
- (float)volume;
- (void)setVolume:(float)arg0;

@end
