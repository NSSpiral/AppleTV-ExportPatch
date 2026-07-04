/* Runtime dump - MPMusicPlayerControllerInternal
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController>
{
    unsigned int _clientPort;
    int _inBlockHandlingPlaybackStateChangedMessageFromServer;
    MPMediaItemCollection * _itemCollection;
    MPMusicPlayerController * _musicPlayerController;
    int _playbackNotificationObservers;
    int _playbackState;
    char _preparedToPlay;
    struct SBSProcessAssertion * _processAssertion;
    MPMediaQuery * _query;
    struct __CFRunLoopSource * _runLoopSource;
    id _didCheckIn;
    id _useApplicationSpecificQueue;
    id _useCachedPlaybackState;
    id _cachedPlaybackStateIsValid;
    id _allowsBackgroundVideo;
    id _wantsQueueModificationsDisabled;
}

@property char inBlockHandlingPlaybackStateChangedMessageFromServer;

- (MPMusicPlayerControllerInternal *)initWithMusicPlayerController:(MPMusicPlayerController *)arg0;
- (void)acquireProcessAssertion;
- (void)setInBlockHandlingPlaybackStateChangedMessageFromServer:(char)arg0;
- (char)inBlockHandlingPlaybackStateChangedMessageFromServer;
- (char)prepareForRemoteSelectorInvocation;
- (NSString *)_bundleIdentifier;
- (void)didPrepareForRemoteSelectorInvocation;
- (void)serverConnectionDied;
- (void)dealloc;
- (void).cxx_destruct;

@end
