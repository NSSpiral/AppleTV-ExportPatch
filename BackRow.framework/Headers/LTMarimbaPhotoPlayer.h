/* Runtime dump - LTMarimbaPhotoPlayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMediaPlayer.h>

@protocol MPAssetKeyDelegate;

@class BRAsyncTask, BRControl, BRImageManager, BRMarimbaSlideshowControl, BRMediaPlayer, BRPhotoMediaCollection;
@interface LTMarimbaPhotoPlayer : BRMediaPlayer <MPAssetKeyDelegate>
{
    BRControl * _tempVisuals;
    NSTimer * _spinnerTimer;
    BRAsyncTask * _preloadImageTask;
    NSString * _assetIDBeingLoaded;
    <BRImageProxy> * _imageProxyForLoadingAsset;
    BRMarimbaSlideshowControl * _visuals;
    NSArray * _assets;
    BRMediaPlayer * _audioPlayer;
    id _musicServerID;
    id _musicPlaylistID;
    ATVDataServer * _musicServerRef;
    ATVDataCollection * _musicPlaylistRef;
    ATVDataQuery * _playlistsQuery;
    ATVDataQuery * _songsQuery;
    NSDictionary * _slideshowPlaybackOptions;
    NSArray * _orderedPhotoAssets;
    NSTimer * _screensaverTickleTimer;
    int _state;
    int _numPreloadAttemptsToMake;
    int _numPreloadSuccesses;
    int _indexOfNextImageToPreload;
    long _startIndex;
    int _imageSizeToLoad;
    char _initialImagePrefetchInProgress;
    char _playbackInitiated;
    char _shuffleSet;
    char _shuffle;
    char _repeatModeSet;
    int _repeatMode;
    char _muted;
    char _weOwnMusicPlayback;
    char _musicPlaybackOnwershipPermanentlyRelinquished;
    BRImageManager * _preferredImageManager;
    char _preloadingDisabled;
    char _substitute;
    int _substituteIndex;
    char _preloadingComplete;
    char _marimbaVisualsOnDisplay;
    char _musicPrefetchInProgress;
    char _documentSetupComplete;
    float _lastRemovedEffectsTime;
    NSArray * _pendingAssets;
    NSString * _uniqueIDForPlayPauseRegistration;
    int _marimbaDidAddEffectsVisitCounter;
    NSMutableDictionary * _assetKeyToAssetMap;
    id _musicQueryToRun;
    int _imageManagerPruneCountToRestore;
    int _imageLoadBatchCounter;
}

@property (copy, nonatomic) id musicQueryToRun;
@property (nonatomic) int imageManagerPruneCountToRestore;
@property (nonatomic) int imageLoadBatchCounter;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)contentTypes;

- (char)setState:(int)arg0 error:(id *)arg1;
- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(NSArray *)arg0;
- (void)setShufflePlayback:(char)arg0;
- (ATVDataClient *)_dataClient;
- (void)_playerMediaCued:(id)arg0;
- (void)nextMedia;
- (NSDictionary *)playerSpecificOptions;
- (void)setPlayerSpecificOptions:(NSDictionary *)arg0;
- (void)_spinnerTimerFired;
- (void)_screenSaverDismissed:(id)arg0;
- (void)previousMedia;
- (char)shufflePlayback;
- (void)_playerError:(NSError *)arg0;
- (char)playingVisualContent;
- (BRMarimbaSlideshowControl *)visuals;
- (void)_authorizationAttemptComplete:(id)arg0;
- (char)setMediaAtIndex:(long)arg0 inTrackList:(NSArray *)arg1 error:(id *)arg2;
- (char)supportsRepeatModes;
- (void)_screenSaverWillActivate:(id)arg0;
- (char)setMediaAtIndex:(long)arg0 inCollection:(RadioArtworkCollection *)arg1 error:(id *)arg2;
- (char)stopsActiveAudioPlayer;
- (char)reverseTouchSwipeBehavior;
- (void)_newPhotoPlayerPlaying:(id)arg0;
- (void)_imageWritten:(id)arg0;
- (void)_loadFailed:(AWDIMRemoteURLLoadFailed *)arg0;
- (void)_needPathsNotification:(NSNotification *)arg0;
- (void)_configureImageManagerPruneCount;
- (void)_beginMusicPrefetchFromDefaults;
- (void)_restoreImageManagerPruneCount;
- (void)_setNewState:(int)arg0;
- (void)_setNewMedia:(NSObject *)arg0;
- (char)_handleStopActionWithError:(id *)arg0;
- (char)_handlePauseActionWithError:(id *)arg0;
- (char)_handlePlayActionWithError:(id *)arg0;
- (void)_cancelMusicPrefetch;
- (void)_applyPlayerSpecificOptions;
- (void)_speakVOString:(NSString *)arg0;
- (NSObject *)_pathForLocalAssetID:(NSObject *)arg0;
- (int)_indexOfAssetPathInOrderedAssets:(NSArray *)arg0;
- (void)_updatePreloadingStateForLastPlayed:(id)arg0;
- (void)_triggerPreloadOfNextImage;
- (id)musicQueryToRun;
- (void)setMusicQueryToRun:(id)arg0;
- (int)imageManagerPruneCountToRestore;
- (void)setImageManagerPruneCountToRestore:(int)arg0;
- (int)imageLoadBatchCounter;
- (void)setImageLoadBatchCounter:(int)arg0;
- (void)_startSlideshowIfReady;
- (void)_startPreloadTask;
- (void)_preloadNextImage;
- (void)_runSongsQuery;
- (void)_runPlaylistsQuery;
- (void)_beginMusicPrefetch;
- (void)_beginMusicPrefetchFromPlayerOptions;
- (void)_reorderImages;
- (void)_updateDocumentForNewMedia;
- (void)_marimbaSlideshowPlaybackFinished:(id)arg0;
- (void)_marimbaSlideshowWillRepeat:(id)arg0;
- (void)_marimbaDidAddEffects:(id)arg0;
- (void)_startScreenSaverTickleTimer;
- (void)_setupDocument;
- (void)_applyDocumentChangesAfterTransition:(NSObject *)arg0;
- (void)_setTransition;
- (void)_setTimePerSlide;
- (void)_setSlideshowTheme;
- (void)_setMusic;
- (void)_setPlaylistsQuery:(NSObject *)arg0;
- (void)_setSongsQuery:(NSObject *)arg0;
- (void)_authorizeMedia;
- (void)_cueMedia;
- (void)_stopScreenSaverTickleTimer;
- (void)_tickleScreensaver:(id)arg0;
- (void)_updateForNewMedia;
- (void)_playlistsQueryComplete;
- (void)_songsQueryComplete;
- (int)_preloadSuccessThresholdForStyle:(NSObject *)arg0;
- (BRPhotoMediaCollection *)collection;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg0;
- (void)setMuted:(char)arg0;
- (void)dealloc;
- (LTMarimbaPhotoPlayer *)init;
- (void).cxx_destruct;
- (NSString *)absolutePathForAssetKey:(NSString *)arg0;
- (NSString *)absolutePathForAssetKey:(NSString *)arg0 andSize:(struct CGSize)arg1;
- (NSString *)absolutePathForStillAssetAtPath:(NSString *)arg0 andSize:(struct CGSize)arg1;
- (struct CGImage *)retainedCGImageForAssetKey:(NSString *)arg0 andSize:(struct CGSize)arg1;
- (int)playerState;
- (char)muted;
- (NSArray *)media;

@end
