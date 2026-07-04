/* Runtime dump - MPVolumeController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeController : NSObject
{
    MPAVController * _player;
    NSString * _volumeAudioCategory;
    char _volumeWarningBlinking;
    UIImage * _volumeWarningTrackImage;
    char _debugVolumeWarning;
    char _volumeWarningEnabled;
    <MPVolumeControllerDelegate> * _delegate;
    float _volumeValue;
    int _volumeWarningState;
    float _EUVolumeLimit;
}

@property (weak, nonatomic) <MPVolumeControllerDelegate> * delegate;
@property (readonly, nonatomic) float volumeValue;
@property (nonatomic) char muted;
@property (retain, nonatomic) MPAVController * player;
@property (copy, nonatomic) NSString * volumeAudioCategory;
@property (readonly, nonatomic) char volumeWarningEnabled;
@property (readonly, nonatomic) int volumeWarningState;
@property (readonly, nonatomic) float EUVolumeLimit;

- (void)_isExternalPlaybackActiveDidChangeNotification:(NSNotification *)arg0;
- (void)_applicationDidEnterBackgroundNotification:(NSNotification *)arg0;
- (void)_applicationWillEnterForegroundNotification:(NSNotification *)arg0;
- (float)setVolumeValue:(float)arg0;
- (void)setMuted:(char)arg0;
- (char)volumeWarningEnabled;
- (int)volumeWarningState;
- (void)updateVolumeWarningState;
- (void)updateVolumeValue;
- (void)_availableRoutesDidChangeNotification:(NSNotification *)arg0;
- (NSString *)volumeAudioCategory;
- (void)setVolumeAudioCategory:(NSString *)arg0;
- (float)EUVolumeLimit;
- (void)_mediaServerDiedNotification:(NSNotification *)arg0;
- (void)_systemVolumeDidChange:(NSDictionary *)arg0;
- (void)_tearDownNotifications;
- (float)_volumeFromAVController;
- (void)_setVolumeWarningState:(int)arg0;
- (float)volumeValue;
- (void)_internalSetVolumeValue:(float)arg0;
- (char)_isPlayerInValidState;
- (void)_systemMuteDidChange:(NSDictionary *)arg0;
- (void)_EUVolumeLimitDidChange:(NSDictionary *)arg0;
- (void)_EUVolumeLimitEnforcedDidChange:(NSDictionary *)arg0;
- (void)_volumeDidChange:(NSDictionary *)arg0;
- (void)_forcefullySetVolumeValue:(float)arg0;
- (void)dealloc;
- (void)setDelegate:(<MPVolumeControllerDelegate> *)arg0;
- (MPVolumeController *)init;
- (<MPVolumeControllerDelegate> *)delegate;
- (void).cxx_destruct;
- (void)_setupNotifications;
- (char)muted;
- (void)setPlayer:(MPAVController *)arg0;
- (MPAVController *)player;

@end
