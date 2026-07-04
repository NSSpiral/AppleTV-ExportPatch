/* Runtime dump - MPVolumeSlider
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeSlider : UISlider <MPAVRoutingControllerDelegate, MPVolumeControllerDelegate>
{
    MPVolumeController * _volumeController;
    NSTimer * _commitTimer;
    UILabel * _routeNameLabel;
    int _style;
    UIImageView * _thumbImageView;
    UIImageView * _thumbMaskImageView;
    char _isOffScreen;
    char _forcingOffscreenVisibility;
    char _thumbIsDefault;
    UIView * _volumeWarningView;
    char _volumeWarningBlinking;
    UIImage * _volumeWarningTrackImage;
    MPAVRoutingController * _routingController;
    struct UIEdgeInsets _hitRectInsets;
}

@property (readonly, nonatomic) int style;
@property (retain, nonatomic) MPAVController * player;
@property (copy, nonatomic) NSString * volumeAudioCategory;
@property (retain, nonatomic) UIImage * volumeWarningTrackImage;
@property (nonatomic) char _isOffScreen;
@property (nonatomic) struct UIEdgeInsets hitRectInsets;
@property (readonly, nonatomic) MPAVRoutingController * routingController;
@property (readonly, nonatomic) UIView * volumeWarningView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_isExternalPlaybackActiveDidChangeNotification:(NSNotification *)arg0;
- (MPAVRoutingController *)routingController;
- (void)_applicationDidEnterBackgroundNotification:(NSNotification *)arg0;
- (void)_applicationWillEnterForegroundNotification:(NSNotification *)arg0;
- (void)routingControllerAvailableRoutesDidChange:(NSDictionary *)arg0;
- (void)setHitRectInsets:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)hitRectInsets;
- (void)_setIsOffScreen:(char)arg0;
- (void)_resetThumbImageForState:(unsigned int)arg0;
- (NSObject *)_minTrackImageForStyle:(int)arg0;
- (NSObject *)_maxTrackImageForStyle:(int)arg0;
- (void)_endBlinkingWarningView;
- (void)_layoutVolumeWarningView;
- (void)_commitVolumeChange;
- (void)_endTracking;
- (void)_layoutForAvailableRoutes;
- (void)_availableRoutesDidChangeNotification:(NSNotification *)arg0;
- (NSString *)volumeAudioCategory;
- (void)setVolumeAudioCategory:(NSString *)arg0;
- (void)_beginBlinkingWarningView;
- (NSObject *)_thumbImageForStyle:(int)arg0;
- (void)_routeNameLabelAnimationDidEnd;
- (NSObject *)_newVolumeWarningView;
- (void)_blinkWarningView;
- (void)volumeController:(MPVolumeController *)arg0 volumeValueDidChange:(float)arg1;
- (void)volumeController:(MPVolumeController *)arg0 EUVolumeLimitDidChange:(float)arg1;
- (void)volumeController:(MPVolumeController *)arg0 EUVolumeLimitEnforcedDidChange:(char)arg1;
- (void)setVolumeWarningTrackImage:(UIImage *)arg0;
- (char)_isOffScreen;
- (UIImage *)volumeWarningTrackImage;
- (UIView *)volumeWarningView;
- (MPVolumeSlider *)initWithFrame:(struct CGRect)arg0;
- (void)setUserInteractionEnabled:(char)arg0;
- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setHidden:(char)arg0;
- (void)setAlpha:(float)arg0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (int)style;
- (struct CGRect)hitRect;
- (void)didMoveToSuperview;
- (MPVolumeSlider *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (void)cancelTrackingWithEvent:(NSObject *)arg0;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (struct CGRect)thumbRectForBounds:(id)arg0 trackRect:(SEL)arg1 value:(struct CGRect)arg2;
- (NSObject *)createThumbView;
- (float)minimumValue;
- (float)maximumValue;
- (void)setValue:(float)arg0 animated:(char)arg1;
- (void)setThumbImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)setPlayer:(MPAVController *)arg0;
- (MPAVController *)player;

@end
