/* Runtime dump - MPMusicPlayerControllerServerInternal
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController>
{
    <MPMusicPlayerControllerServerDelegate> * _delegate;
    MPMusicPlayerControllerServer * _musicPlayerServer;
    int _activeClientPID;
    NSMutableArray * _clientPorts;
    NSMutableDictionary * _clientPortsForPIDs;
    NSMutableDictionary * _clientStateForPIDs;
    MPVideoViewController * _videoViewController;
    id _queuePrepared;
}

+ (char)_canSeedGeniusWithItem:(NSObject *)arg0;

- (void)_playbackStateDidChangeNotification:(NSNotification *)arg0;
- (NSObject *)playbackState;
- (NSString *)repeatMode;
- (void)setRepeatMode:(SANPSetRepeatMode *)arg0;
- (void)prepareToPlay;
- (void)play;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)endSeeking;
- (void)skipToNextItem;
- (void)skipToBeginning;
- (void)skipToPreviousItem;
- (double)currentPlaybackTime;
- (void)setCurrentPlaybackTime:(double)arg0;
- (float)currentPlaybackRate;
- (void)setCurrentPlaybackRate:(float)arg0;
- (void)_itemDidChangeNotification:(NSNotification *)arg0;
- (void)_itemPlaybackDidEndNotification:(NSNotification *)arg0;
- (void)_tvOutCapabilityDidChangeNotification:(NSNotification *)arg0;
- (NSObject *)nowPlayingItem;
- (void)setNowPlayingItem:(NSObject *)arg0;
- (void)setQueueWithQuery:(NSObject *)arg0 firstItem:(NSObject *)arg1;
- (void)setQueueWithItemCollection:(MPMediaItemCollection *)arg0;
- (NSString *)shuffleMode;
- (void)setShuffleMode:(SANPSetShuffleMode *)arg0;
- (id)isGeniusAvailable;
- (NSArray *)isGeniusAvailableForSeedItems:(NSArray *)arg0;
- (NSArray *)setQueueWithSeedItems:(NSArray *)arg0;
- (NSObject *)nowPlayingItemAtIndex:(NSObject *)arg0;
- (void)pauseWithFadeoutDuration:(id)arg0;
- (char)allowsBackgroundVideo;
- (void)setAllowsBackgroundVideo:(char)arg0;
- (NSObject *)indexOfNowPlayingItem;
- (NSObject *)unshuffledIndexOfNowPlayingItem;
- (id)isNowPlayingItemFromGeniusMix;
- (NSObject *)currentChapterIndex;
- (void)setCurrentChapterIndex:(NSObject *)arg0;
- (void)setQueueWithGeniusMixPlaylist:(MPMediaPlaylist *)arg0;
- (void)setQueueWithRadioStation:(MPRadioStation *)arg0;
- (id)userQueueModificationsDisabled;
- (void)setUserQueueModificationsDisabled:(id)arg0;
- (id)skipInDirection:(id)arg0;
- (id)serverIsAlive;
- (void)setUseApplicationSpecificQueue:(char)arg0;
- (void)registerForServerDiedNotifications;
- (void)setQueueWithQuery:(NSObject *)arg0;
- (void)playItem:(NSObject *)arg0;
- (NSObject *)queueAsQuery;
- (id)queueAsRadioStation;
- (void)prepareQueueForPlayback;
- (void)shuffle;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToNextChapter;
- (void)skipToPreviousChapter;
- (MPAVController *)_avController;
- (void)_tearDownVideoView;
- (void)_prepareQueueIfNecessary;
- (void)_setQueueWithQuery:(NSObject *)arg0;
- (NSObject *)_clientState;
- (void)_endPlayback;
- (unsigned int)_numberOfItems;
- (char)useApplicationSpecificQueue;
- (void)_clientPortInvalidated:(id)arg0;
- (char)_clientPIDHasPermissionToPlay:(int)arg0;
- (void)_endPlaybackForClientIfNecessary:(int)arg0;
- (id)_avControllerForClientPID:(int)arg0;
- (void)_updateVideoView;
- (void)_clientPortInvalidatedNotification:(NSNotification *)arg0;
- (void)_applicationStateChangedNotification:(NSNotification *)arg0;
- (id)_clientStateForPID:(int)arg0;
- (char)_currentClientPIDHasPermissionToPlay;
- (void)_registerClientPort:(unsigned int)arg0 forProcessID:(int)arg1 hasAudioBackgroundMode:(char)arg2;
- (void)_setQueuePrepared:(char)arg0;
- (SANPDecreasePlaybackSpeed *)playbackSpeed;
- (void)setPlaybackSpeed:(SANPDecreasePlaybackSpeed *)arg0;
- (void)dealloc;
- (MPMusicPlayerControllerServerInternal *)init;
- (void)stop;
- (int)numberOfItems;
- (void).cxx_destruct;
- (void)pause;

@end
