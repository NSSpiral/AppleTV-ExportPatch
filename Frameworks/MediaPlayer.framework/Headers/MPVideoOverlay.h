/* Runtime dump - MPVideoOverlay
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate>
{
    <MPVideoControllerProtocol> * _videoViewController;
    <MPVideoOverlayDelegate> * _delegate;
    MPAVItem * _item;
    MPAVController * _player;
    MPDetailSlider * _scrubControl;
    int _interfaceOrientation;
    char _controlsAutohideDisabled;
    char _wantsTick;
    unsigned long long _desiredParts;
    unsigned long long _visibleParts;
    unsigned long long _disabledParts;
    NSMutableDictionary * _tickTimeEvents;
    double _lastTickTime;
}

@property (weak, nonatomic) <MPVideoControllerProtocol> * videoViewController;
@property (nonatomic) char allowsWirelessPlayback;
@property (nonatomic) char navigationBarHidden;
@property (retain, nonatomic) MPAVController * player;
@property (readonly, retain, nonatomic) UINavigationBar * navigationBar;
@property (weak, nonatomic) <MPVideoOverlayDelegate> * delegate;
@property (retain, nonatomic) MPAVItem * item;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) unsigned long long visibleParts;
@property (nonatomic) unsigned long long disabledParts;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setAllowsWirelessPlayback:(char)arg0;
- (char)allowsWirelessPlayback;
- (char)navigationBarHidden;
- (unsigned long long)visibleParts;
- (unsigned long long)desiredParts;
- (void)setDesiredParts:(unsigned long long)arg0;
- (void)setVisibleParts:(unsigned long long)arg0;
- (void)setDisabledParts:(unsigned long long)arg0;
- (void)_tickNotification:(NSNotification *)arg0;
- (void)setDesiredParts:(unsigned long long)arg0 animate:(char)arg1;
- (void)setVisibleParts:(unsigned long long)arg0 animate:(char)arg1;
- (void)registerForPlayerNotifications;
- (void)unregisterForPlayerNotifications;
- (unsigned long long)disabledParts;
- (void)stopTicking;
- (void)startTicking;
- (void)_itemDurationDidChangeNotification:(NSNotification *)arg0;
- (char)updateTimeBasedValues;
- (void)showAlternateTracks;
- (void)hideAlternateTracks;
- (<MPVideoControllerProtocol> *)videoViewController;
- (void)setVideoViewController:(<MPVideoControllerProtocol> *)arg0;
- (void)detailSliderTrackingDidBegin:(id)arg0;
- (void)detailSliderTrackingDidEnd:(id)arg0;
- (void)detailSliderTrackingDidCancel:(id)arg0;
- (void)detailSlider:(MPDetailSlider *)arg0 didChangeValue:(float)arg1;
- (void)_endSliderTracking;
- (double)_playableDuration;
- (void)performSelector:(SEL)arg0 whenTickingPastTime:(double)arg1;
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)arg0;
- (MPVideoOverlay *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<MPVideoOverlayDelegate> *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutSubviews;
- (<MPVideoOverlayDelegate> *)delegate;
- (UINavigationBar *)navigationBar;
- (MPAVItem *)item;
- (double)_duration;
- (void)didMoveToSuperview;
- (void)setItem:(MPAVItem *)arg0;
- (void)setNavigationBarHidden:(char)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(MPAVController *)arg0;
- (MPAVController *)player;

@end
