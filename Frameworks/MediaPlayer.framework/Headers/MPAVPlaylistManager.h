/* Runtime dump - MPAVPlaylistManager
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVPlaylistManager : NSObject <MPQueueFeederDelegate, MPAVQueueCoordinatorDataSource, MPQueueBehaviorManaging, NSCoding>
{
    NSString * _audioSessionModeOverride;
    MPAVItem * _currentItem;
    char _goToTargetIndex;
    int _lastSelectionDirection;
    MPQueuePlayer * _player;
    MPQueueFeeder * _playlistFeeder;
    int _repeatMode;
    int _targetIndex;
    char _updatedAudioSessionMode;
    char _changingPlayer;
    char _changingPlaylistFeeder;
    int _playbackMode;
    MPAVQueueCoordinator * _queueCoordinator;
    <MPAVPlaylistManagerDelegate> * _delegate;
    MPAVController * _avController;
}

@property (readonly) MPQueuePlayer * player;
@property (readonly) MPAVQueueCoordinator * queueCoordinator;
@property (weak, nonatomic) <MPAVPlaylistManagerDelegate> * delegate;
@property (readonly, nonatomic) MPQueueFeeder * playlistFeeder;
@property (readonly, nonatomic) char changingPlayer;
@property (readonly, nonatomic) char changingPlaylistFeeder;
@property (readonly) MPAVItem * currentItem;
@property (readonly) int currentIndex;
@property int repeatMode;
@property (retain, nonatomic) NSString * audioSessionModeOverride;
@property (weak, nonatomic) MPAVController * avController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char allowsUserVisibleUpcomingItems;
@property (readonly, nonatomic) char canSeek;
@property (readonly, nonatomic) char canSkipToPreviousItem;
@property (readonly, nonatomic) int playbackMode;
@property (readonly, nonatomic) char userCanChangeShuffleAndRepeatType;

- (int)repeatMode;
- (void)setRepeatMode:(int)arg0;
- (int)playbackMode;
- (NSString *)audioSessionModeOverride;
- (void)setAudioSessionModeOverride:(NSString *)arg0;
- (void)reloadWithPlaybackContext:(RadioPlaybackContext *)arg0 completionHandler:(id /* block */)arg1;
- (void)queueFeeder:(AVQueueFeeder *)arg0 didChangeContentsWithPreferredStartIndex:(unsigned int)arg1 error:(NSError *)arg2;
- (char)canSkipItem:(NSObject *)arg0;
- (char)allowsUserVisibleUpcomingItems;
- (char)canSkipToPreviousItem;
- (char)userCanChangeShuffleAndRepeatType;
- (MPQueueFeeder *)playlistFeeder;
- (void)setCurrentIndex:(int)arg0 selectionDirection:(int)arg1;
- (int)playlistIndexWithDelta:(int)arg0 fromIndex:(int)arg1 ignoreElapsedTime:(char)arg2;
- (void)clearQueueFeeder;
- (void)reloadItemsKeepingCurrentItem:(char)arg0;
- (int)playlistIndexOfItemIdentifier:(NSString *)arg0;
- (char)isChangingPlayer;
- (char)isChangingPlaylistFeeder;
- (void)connectPlayer;
- (void)disconnectPlayer;
- (MPAVQueueCoordinator *)queueCoordinator;
- (void)setAvController:(MPAVController *)arg0;
- (void)queueCoordinator:(MPAVQueueCoordinator *)arg0 failedToLoadItem:(NSObject *)arg1;
- (NSObject *)queueCoordinator:(MPAVQueueCoordinator *)arg0 itemToFollowItem:(NSObject *)arg1;
- (unsigned int)displayIndexForItem:(NSObject *)arg0;
- (NSObject *)playlistFeederForPlaylistIndex:(int)arg0;
- (NSObject *)itemForPlaylistIndex:(int)arg0;
- (unsigned int)displayCountForItem:(NSObject *)arg0;
- (void)_awakeFromCoder:(NSCoder *)arg0;
- (int)playlistIndexOfIndex:(int)arg0 inPlaylistFeeder:(id)arg1;
- (void)_setStateForPlaylistFeeder:(id)arg0 startIndex:(unsigned int)arg1;
- (void)_streamingDownloadSessionControllerDidFailDownloadSessionNotification:(NSNotification *)arg0;
- (void)_storePlayWhileDownloadControllerDidFinishPlayWhileDownloadSessionNotification:(NSNotification *)arg0;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(NSNotification *)arg0;
- (MPAVController *)avController;
- (void)player:(MPQueuePlayer *)arg0 currentItemDidChangeFromItem:(NSObject *)arg1 toItem:(NSObject *)arg2;
- (char)setPlaylistFeeder:(MPQueueFeeder *)arg0 startIndex:(int)arg1 keepPlaying:(char)arg2;
- (void)_handleDownloadCancelledForDownloadToken:(unsigned long long)arg0;
- (void)_reloadQueuedItemsIfPathBecameAvailable;
- (int)_prepareToQueuePlaybackIndex:(int)arg0 selectionDirection:(int)arg1;
- (void)_notifyQueueFeederContentsChanged;
- (unsigned int)_playbackIndexForDelta:(int)arg0 fromIndex:(unsigned int)arg1 ignoreElapsedTime:(char)arg2;
- (void)_updateAudioSessionModeWithIndex:(unsigned int)arg0;
- (void)_willFinishReloadWithQueueFeeder:(id)arg0 fromPlaybackContext:(NSObject *)arg1;
- (char)canChangePlaylistFeeder;
- (NSObject *)_queuePlayerFeederItemForIndex:(int)arg0;
- (int)_nextItemIndex:(int)arg0 repeatMode:(int)arg1;
- (NSObject *)_itemToFollowItemIndex:(int)arg0 skipUnavailableContent:(char)arg1;
- (NSObject *)metadataItemForPlaylistIndex:(int)arg0;
- (int)playlistIndexOfItem:(NSObject *)arg0;
- (int)playlistIndexOfQueueIdentifier:(NSString *)arg0 inPlaylistFeeder:(id)arg1;
- (void)updateForSoundCheckDefaultsChange;
- (void)dealloc;
- (MPAVPlaylistManager *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<MPAVPlaylistManagerDelegate> *)arg0;
- (MPAVPlaylistManager *)init;
- (<MPAVPlaylistManagerDelegate> *)delegate;
- (int)currentIndex;
- (MPAVItem *)currentItem;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;
- (MPQueuePlayer *)player;
- (char)canSeek;

@end
