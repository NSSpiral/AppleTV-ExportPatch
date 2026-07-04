/* Runtime dump - MEAirTunesPlayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMediaPlayer.h>

@class MEAirTunesMediaAsset, MEAirTunesMediaProvider;
@interface MEAirTunesPlayer : BRMediaPlayer
{
    char _enabled;
    double _position;
    int _state;
    int _stateBeforeSeek;
    MEAirTunesMediaProvider * _provider;
    MEAirTunesMediaAsset * _asset;
    NSTimer * _progressNotificationTimer;
}

+ (char)handlesVideoForType:(NSObject *)arg0;
+ (char)allowMultiplePlayers;
+ (NSDictionary *)contentTypes;

- (char)setState:(int)arg0 error:(id *)arg1;
- (void)nextMedia;
- (void)resetToBeginning;
- (void)previousMedia;
- (char)setMediaAtIndex:(long)arg0 inTrackList:(NSArray *)arg1 error:(id *)arg2;
- (void)updateMetaData:(NSData *)arg0;
- (void)updateProgress:(double)arg0 duration:(double)arg1;
- (void)_setNewState:(int)arg0;
- (char)_handlePlayActionWithError:(id *)arg0;
- (char)_handleRateChangeState:(int)arg0 withError:(id *)arg1;
- (void)_startPlaybackProgressNotifications;
- (void)_stopPlaybackProgressNotifications;
- (void)_notificationDACPError:(NSError *)arg0;
- (void)_notificationOnOffToggleDidChange:(NSDictionary *)arg0;
- (void)_notificationTemporaryEnableStateChange:(NSDictionary *)arg0;
- (void)_sendProgressNotification:(NSNotification *)arg0;
- (void)dealloc;
- (MEAirTunesPlayer *)init;
- (double)duration;
- (void)resume;
- (void)enable;
- (void).cxx_destruct;
- (double)elapsedTime;
- (void)stopped;
- (void)setElapsedTime:(double)arg0;
- (void)started;
- (int)playerState;
- (void)_registerForNotifications;
- (void)disable;
- (NSArray *)media;

@end
