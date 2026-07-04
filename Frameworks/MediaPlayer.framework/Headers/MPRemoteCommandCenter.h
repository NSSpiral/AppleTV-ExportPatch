/* Runtime dump - MPRemoteCommandCenter
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate>
{
    NSMutableArray * _activeCommands;
    NSObject<OS_dispatch_queue> * _serialQueue;
    void * _mediaRemoteCommandHandler;
    char _scheduledSupportedCommandsChangedNotification;
    char _canBeNowPlayingApplication;
    MPRemoteCommand * _pauseCommand;
    MPRemoteCommand * _playCommand;
    MPRemoteCommand * _stopCommand;
    MPRemoteCommand * _togglePlayPauseCommand;
    MPRemoteCommand * _nextTrackCommand;
    MPRemoteCommand * _previousTrackCommand;
    MPSkipIntervalCommand * _skipForwardCommand;
    MPSkipIntervalCommand * _skipBackwardCommand;
    MPRemoteCommand * _seekForwardCommand;
    MPRemoteCommand * _seekBackwardCommand;
    MPRatingCommand * _ratingCommand;
    MPChangePlaybackRateCommand * _changePlaybackRateCommand;
    MPFeedbackCommand * _likeCommand;
    MPFeedbackCommand * _dislikeCommand;
    MPFeedbackCommand * _bookmarkCommand;
    MPRemoteCommand * _changePlaybackPositionCommand;
    MPChangeRepeatModeCommand * _changeRepeatModeCommand;
    MPChangeShuffleModeCommand * _changeShuffleModeCommand;
    MPRemoteCommand * _specialSeekForwardCommand;
    MPRemoteCommand * _specialSeekBackwardCommand;
    MPPurchaseCommand * _buyTrackCommand;
    MPPurchaseCommand * _buyAlbumCommand;
    MPPurchaseCommand * _preOrderAlbumCommand;
    MPPurchaseCommand * _cancelDownloadCommand;
    MPRemoteCommand * _advanceShuffleModeCommand;
    MPRemoteCommand * _advanceRepeatModeCommand;
    MPRemoteCommand * _createRadioStationCommand;
    MPRemoteCommand * _setPlaybackQueueCommand;
    MPRemoteCommand * _insertIntoPlaybackQueueCommand;
    MPFeedbackCommand * _addNowPlayingItemToLibraryCommand;
}

@property (readonly, nonatomic) MPRemoteCommand * pauseCommand;
@property (readonly, nonatomic) MPRemoteCommand * playCommand;
@property (readonly, nonatomic) MPRemoteCommand * stopCommand;
@property (readonly, nonatomic) MPRemoteCommand * togglePlayPauseCommand;
@property (readonly, nonatomic) MPRemoteCommand * nextTrackCommand;
@property (readonly, nonatomic) MPRemoteCommand * previousTrackCommand;
@property (readonly, nonatomic) MPSkipIntervalCommand * skipForwardCommand;
@property (readonly, nonatomic) MPSkipIntervalCommand * skipBackwardCommand;
@property (readonly, nonatomic) MPRemoteCommand * seekForwardCommand;
@property (readonly, nonatomic) MPRemoteCommand * seekBackwardCommand;
@property (readonly, nonatomic) MPRatingCommand * ratingCommand;
@property (readonly, nonatomic) MPChangePlaybackRateCommand * changePlaybackRateCommand;
@property (readonly, nonatomic) MPFeedbackCommand * likeCommand;
@property (readonly, nonatomic) MPFeedbackCommand * dislikeCommand;
@property (readonly, nonatomic) MPFeedbackCommand * bookmarkCommand;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MPRemoteCommandCenter *)sharedCommandCenter;

- (void)_setupMediaRemoteCommandHandler;
- (void)_setupMediaRemoteControlClient;
- (void)_teardownMediaRemoteCommandHandler;
- (void)_teardownMediaRemoteControlClient;
- (void)_scheduleSupportedCommandsChangedNotify;
- (NSMutableArray *)_activeCommands;
- (void)_pushMediaRemoteCommand:(unsigned int)arg0 withOptions:(struct __CFDictionary *)arg1 completion:(id /* block */)arg2;
- (NSObject *)_createRemoteCommandWithConcreteClass:(Class)arg0 mediaRemoteType:(unsigned int)arg1;
- (void)_commandTargetsDidChangeNotification:(NSNotification *)arg0;
- (void)remoteCommandDidMutatePropagatableProperty:(NSObject *)arg0;
- (struct __CFArray *)_copySupportedCommands;
- (NSObject *)_pushMediaRemoteCommand:(unsigned int)arg0 withOptions:(struct __CFDictionary *)arg1;
- (MPRemoteCommand *)stopCommand;
- (MPRemoteCommand *)nextTrackCommand;
- (MPRemoteCommand *)previousTrackCommand;
- (MPSkipIntervalCommand *)skipForwardCommand;
- (MPSkipIntervalCommand *)skipBackwardCommand;
- (MPRatingCommand *)ratingCommand;
- (MPChangePlaybackRateCommand *)changePlaybackRateCommand;
- (MPFeedbackCommand *)likeCommand;
- (MPFeedbackCommand *)dislikeCommand;
- (MPFeedbackCommand *)bookmarkCommand;
- (MPRemoteCommand *)changePlaybackPositionCommand;
- (MPChangeRepeatModeCommand *)changeRepeatModeCommand;
- (MPChangeShuffleModeCommand *)changeShuffleModeCommand;
- (MPRemoteCommand *)specialSeekForwardCommand;
- (MPRemoteCommand *)specialSeekBackwardCommand;
- (MPPurchaseCommand *)buyTrackCommand;
- (MPPurchaseCommand *)buyAlbumCommand;
- (MPPurchaseCommand *)preOrderAlbumCommand;
- (MPPurchaseCommand *)cancelDownloadCommand;
- (MPRemoteCommand *)advanceShuffleModeCommand;
- (MPRemoteCommand *)advanceRepeatModeCommand;
- (MPRemoteCommand *)createRadioStationCommand;
- (MPRemoteCommand *)setPlaybackQueueCommand;
- (MPRemoteCommand *)insertIntoPlaybackQueueCommand;
- (MPFeedbackCommand *)addNowPlayingItemToLibraryCommand;
- (void)dealloc;
- (MPRemoteCommandCenter *)init;
- (void).cxx_destruct;
- (void)_setupNotifications;
- (void)_teardownNotifications;
- (MPRemoteCommand *)pauseCommand;
- (MPRemoteCommand *)playCommand;
- (MPRemoteCommand *)togglePlayPauseCommand;
- (MPRemoteCommand *)seekBackwardCommand;
- (MPRemoteCommand *)seekForwardCommand;

@end
