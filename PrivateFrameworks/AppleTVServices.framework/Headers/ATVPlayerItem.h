/* Runtime dump - ATVPlayerItem
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPlayerItem : AVPlayerItem
{
    char _muted;
    char _audioSelectionIsAutomatic;
    char _waitingForAutomaticAudioSelection;
    char _waitingForAutomaticSubtitleSelection;
    char _shouldSendAudioNotificationWhenReadyToPlay;
    char _shouldSendSubtitleNotificationWhenReadyToPlay;
    AVMediaSelectionOption * _savedAudioSelection;
}

@property (nonatomic) char muted;
@property (nonatomic) char audioSelectionIsAutomatic;
@property (nonatomic) char waitingForAutomaticAudioSelection;
@property (nonatomic) char waitingForAutomaticSubtitleSelection;
@property (nonatomic) char shouldSendAudioNotificationWhenReadyToPlay;
@property (nonatomic) char shouldSendSubtitleNotificationWhenReadyToPlay;
@property (retain, nonatomic) AVMediaSelectionOption * savedAudioSelection;

- (void)setMuted:(char)arg0;
- (void)dealloc;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (ATVPlayerItem *)initWithAsset:(NSSet *)arg0;
- (void).cxx_destruct;
- (char)waitingForAutomaticAudioSelection;
- (void)setWaitingForAutomaticAudioSelection:(char)arg0;
- (void)_ATVPostAudioNotificationWhenStatusIsReadyToPlay;
- (char)waitingForAutomaticSubtitleSelection;
- (void)setWaitingForAutomaticSubtitleSelection:(char)arg0;
- (void)_ATVPostSubtitleNotificationWhenStatusIsReadyToPlay;
- (char)shouldSendAudioNotificationWhenReadyToPlay;
- (void)setShouldSendAudioNotificationWhenReadyToPlay:(char)arg0;
- (char)shouldSendSubtitleNotificationWhenReadyToPlay;
- (void)setShouldSendSubtitleNotificationWhenReadyToPlay:(char)arg0;
- (void)setSavedAudioSelection:(AVMediaSelectionOption *)arg0;
- (void)_ATVSelectMediaOptionAutomaticallyInMediaSelectionGroup:(NSObject *)arg0;
- (void)_ATVSelectMediaOption:(id)arg0 inMediaSelectionGroup:(NSObject *)arg1;
- (char)audioSelectionIsAutomatic;
- (AVMediaSelectionOption *)savedAudioSelection;
- (void)setAudioSelectionIsAutomatic:(char)arg0;
- (char)muted;
- (void)selectMediaOption:(id)arg0 inMediaSelectionGroup:(NSObject *)arg1;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(NSObject *)arg0;

@end
