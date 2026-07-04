/* Runtime dump - MPTransportControls
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTransportControls : UIView
{
    id _target;
    MPAVItem * _item;
    MPAVController * _player;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    NSMutableIndexSet * _heldParts;
    unsigned long long _visibleParts;
    id _playing;
    char _allowsWirelessPlayback;
    char _registeredForPlayerNotifications;
    MPButton * _alternatesButton;
    MPButton * _bookmarkButton;
    MPButton * _chaptersButton;
    MPButton * _emailButton;
    MPButton * _fastForward15SecondsButton;
    MPButton * _likeOrBanButton;
    MPButton * _nextButton;
    MPButton * _playButton;
    MPButton * _previousButton;
    MPButton * _rewind15SecondsButton;
    MPButton * _rewind30SecondsButton;
    MPButton * _scaleButton;
    MPButton * _toggleFullscreenButton;
    id _volumeSlider;
}

@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) unsigned long long disabledParts;
@property (retain, nonatomic) MPAVItem * item;
@property (retain, nonatomic) MPAVController * player;
@property (nonatomic) char registeredForPlayerNotifications;
@property (weak, nonatomic) id target;
@property (nonatomic) unsigned long long visibleParts;
@property (nonatomic) char allowsWirelessPlayback;
@property (readonly, nonatomic) NSString * playButtonImage;
@property (readonly, nonatomic) NSString * pauseButtonImage;
@property (readonly, nonatomic) NSString * playPauseButtonImage;

+ (unsigned long long)defaultVisibleParts;
+ (char)buttonImagesUseBackgroundImage;
+ (Class)buttonClass;
+ (int)buttonType;

- (void)_isExternalPlaybackActiveDidChangeNotification:(NSNotification *)arg0;
- (void)setAllowsWirelessPlayback:(char)arg0;
- (char)allowsWirelessPlayback;
- (unsigned long long)visibleParts;
- (unsigned long long)desiredParts;
- (void)setDesiredParts:(unsigned long long)arg0;
- (void)setVisibleParts:(unsigned long long)arg0;
- (void)setDisabledParts:(unsigned long long)arg0;
- (void)_itemChangedNotification:(NSNotification *)arg0;
- (void)_validityChangedNotification:(NSNotification *)arg0;
- (void)registerForPlayerNotifications;
- (void)unregisterForPlayerNotifications;
- (unsigned long long)disabledParts;
- (void)setRegisteredForPlayerNotifications:(char)arg0;
- (char)registeredForPlayerNotifications;
- (void)_alternateTypesChangedNotification:(NSNotification *)arg0;
- (void)_itemDurationDidChangeNotification:(NSNotification *)arg0;
- (void)_timeMarkersAvailableNotification:(NSNotification *)arg0;
- (void)_availableRoutesChangedNotification:(NSNotification *)arg0;
- (void)_playbackStateChangedNotification:(NSNotification *)arg0;
- (void)_reloadViewWithAnimation:(char)arg0;
- (char)usesTintColorForControls;
- (id)buttonForPart:(unsigned long long)arg0;
- (id)tintColorForPart:(unsigned long long)arg0;
- (void)_applyDesiredPartsWithAnimation:(char)arg0;
- (void)setDesiredParts:(unsigned long long)arg0 animated:(char)arg1;
- (void)_updateEnabledStates:(char)arg0;
- (void)_updatePlayButtonImage;
- (void)_updateTintColorForPart:(unsigned long long)arg0;
- (void)setVisibleParts:(unsigned long long)arg0 animated:(char)arg1;
- (unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)arg0;
- (NSString *)pauseButtonImage;
- (NSString *)playButtonImage;
- (id)buttonImageForPart:(unsigned long long)arg0;
- (id)highlightedButtonImageForPart:(unsigned long long)arg0;
- (char)_handleHoldForPart:(unsigned long long)arg0;
- (char)_handleReleaseForPart:(unsigned long long)arg0;
- (char)_handleTapForPart:(unsigned long long)arg0;
- (void)buttonDown:(id)arg0;
- (void)buttonUp:(id)arg0;
- (id)disabledButtonImageForPart:(unsigned long long)arg0;
- (NSString *)playPauseButtonImage;
- (char)showsVolumeSliderWhenNoVolumeControlAvailable;
- (id)_updateAdditions:(id)arg0 removals:(id)arg1 forPart:(unsigned long long)arg2;
- (void)buttonHeld:(id)arg0;
- (void)buttonHoldReleased:(id)arg0;
- (id)newVolumeSlider;
- (void)reloadForAdditions:(id)arg0 removals:(id)arg1 animate:(char)arg2;
- (id)newButtonForPart:(unsigned long long)arg0;
- (char)allowsWirelessPlaybackForCurrentItem;
- (char)alwaysHidesSystemVolumeHUD;
- (MPTransportControls *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setHidden:(char)arg0;
- (void)setAlpha:(float)arg0;
- (void)didMoveToWindow;
- (MPTransportControls *)init;
- (void)setFrame:(struct CGRect)arg0;
- (MPAVItem *)item;
- (void)setTarget:(NSObject *)arg0;
- (NSObject *)target;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (void)setItem:(MPAVItem *)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(MPAVController *)arg0;
- (MPAVController *)player;

@end
