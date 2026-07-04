/* Runtime dump - MPMusicPlayerClientState
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerClientState : NSObject
{
    char _allowsBackgroundVideo;
    int _backgroundPlaybackAccess;
    MPMediaItem * _firstItem;
    MPMediaPlaylist * _geniusMixPlaylist;
    char _hasAudioBackgroundMode;
    MPMediaQuery * _query;
    MPRadioStation * _radioStation;
    int _repeatMode;
    char _seeking;
    int _shuffleMode;
    char _useApplicationSpecificQueue;
    char _videoPlaybackEnabled;
}

@property (nonatomic) char allowsBackgroundVideo;
@property (nonatomic) int backgroundPlaybackAccess;
@property (retain, nonatomic) MPMediaItem * firstItem;
@property (retain, nonatomic) MPMediaPlaylist * geniusMixPlaylist;
@property (nonatomic) char hasAudioBackgroundMode;
@property (retain, nonatomic) MPRadioStation * radioStation;
@property (nonatomic) int repeatMode;
@property (nonatomic) char seeking;
@property (nonatomic) int shuffleMode;
@property (retain, nonatomic) MPMediaQuery * query;
@property (nonatomic) char useApplicationSpecificQueue;
@property (nonatomic) char videoPlaybackEnabled;

- (int)repeatMode;
- (void)setRepeatMode:(int)arg0;
- (int)shuffleMode;
- (void)setShuffleMode:(int)arg0;
- (char)allowsBackgroundVideo;
- (void)setAllowsBackgroundVideo:(char)arg0;
- (void)setUseApplicationSpecificQueue:(char)arg0;
- (void)setVideoPlaybackEnabled:(char)arg0;
- (void)setSeeking:(char)arg0;
- (char)useApplicationSpecificQueue;
- (void)setFirstItem:(MPMediaItem *)arg0;
- (void)setGeniusMixPlaylist:(MPMediaPlaylist *)arg0;
- (void)setRadioStation:(MPRadioStation *)arg0;
- (void)setHasAudioBackgroundMode:(char)arg0;
- (int)backgroundPlaybackAccess;
- (char)hasAudioBackgroundMode;
- (void)setBackgroundPlaybackAccess:(int)arg0;
- (MPMediaPlaylist *)geniusMixPlaylist;
- (MPRadioStation *)radioStation;
- (char)seeking;
- (char)videoPlaybackEnabled;
- (MPMediaQuery *)query;
- (MPMediaItem *)firstItem;
- (void)setQuery:(MPMediaQuery *)arg0;
- (void).cxx_destruct;

@end
