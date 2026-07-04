/* Runtime dump - MPVolumeView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeView : UIView <MPAVRoutingControllerDelegate, NSCoding>
{
    MPAVRoutingSheet * _routingSheet;
    MPAVRoutingController * _routingController;
    char _hasNonDefaultRouteButtonImages;
    char _hasNonDefaultMaxVolumeSliderImage;
    char _hasNonDefaultMinVolumeSliderImage;
    char _hidesRouteLabelWhenNoRouteChoice;
    UIButton * _routeButton;
    char _routeButtonShowsTouchWhenHighlighted;
    char _routeDiscoveryEnabled;
    UILabel * _routeLabel;
    MPAudioVideoRoutingPopoverController * _routePopoverController;
    char _showingButton;
    char _showingLabel;
    char _showingSlider;
    char _showsRouteButton;
    char _showsVolumeSlider;
    int _style;
    MPVolumeSlider * _volumeSlider;
    char _volumeSliderShrinksFromBothEnds;
    char _wirelessRouteIsPicked;
    char _wirelessRoutesAvailable;
    char _pushedRouteDiscoveryModeState;
    unsigned int _routePopoverPermittedArrowDirections;
}

@property (nonatomic) char showsVolumeSlider;
@property (nonatomic) char showsRouteButton;
@property (readonly, nonatomic) char wirelessRoutesAvailable;
@property (readonly, nonatomic) char wirelessRouteActive;
@property (retain, nonatomic) UIImage * volumeWarningSliderImage;
@property (readonly, nonatomic) int style;
@property (readonly, nonatomic) MPVolumeSlider * volumeSlider;
@property (nonatomic) char volumeSliderShrinksFromBothEnds;
@property (nonatomic) char hidesRouteLabelWhenNoRouteChoice;
@property (readonly, nonatomic) char isVisible;
@property (readonly, nonatomic) char isShowingRouteButton;
@property (nonatomic) char routeButtonShowsTouchWhenHighlighted;
@property (nonatomic) unsigned int routePopoverPermittedArrowDirections;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_applicationDidEnterBackgroundNotification:(NSNotification *)arg0;
- (void)_applicationWillEnterForegroundNotification:(NSNotification *)arg0;
- (void)routingControllerAvailableRoutesDidChange:(NSDictionary *)arg0;
- (void)_createSubviews;
- (void)_registerNotifications;
- (void)_initWithStyle:(int)arg0;
- (void)_unregisterNotifications;
- (void)_setShowsVolumeSlider:(char)arg0;
- (void)_setShowsRouteButton:(char)arg0 animated:(char)arg1;
- (void)_setRouteDiscoveryEnabled:(char)arg0;
- (void)_updateWirelessRouteStatus;
- (void)_getDefaultVolumeSliderFrame:(struct CGRect *)arg0 routeButtonFrame:(struct CGSize)arg1 forBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg2;
- (char)routeButtonShowsTouchWhenHighlighted;
- (id)_defaultRouteButtonImageAsSelected:(char)arg0;
- (void)_displayAudioRoutePicker;
- (struct CGRect)volumeSliderRectForBounds:(id)arg0;
- (struct CGRect)routeButtonRectForBounds:(id)arg0;
- (char)isShowingRouteButton;
- (char)isWirelessRouteActive;
- (NSObject *)minimumVolumeSliderImageForState:(unsigned int)arg0;
- (NSObject *)maximumVolumeSliderImageForState:(unsigned int)arg0;
- (UIImage *)volumeWarningSliderImage;
- (NSObject *)routeButtonImageForState:(unsigned int)arg0;
- (void)setMinimumVolumeSliderImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)setMaximumVolumeSliderImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)setVolumeWarningSliderImage:(UIImage *)arg0;
- (void)setRouteButtonImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)setRouteButtonShowsTouchWhenHighlighted:(char)arg0;
- (void)setShowsRouteButton:(char)arg0;
- (void)setShowsVolumeSlider:(char)arg0;
- (void)setVolumeThumbImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (char)showsRouteButton;
- (char)showsVolumeSlider;
- (NSObject *)volumeThumbImageForState:(unsigned int)arg0;
- (struct CGRect)volumeThumbRectForBounds:(id)arg0 volumeSliderRect:(SEL)arg1 value:(struct CGRect)arg2;
- (MPVolumeSlider *)volumeSlider;
- (char)hidesRouteLabelWhenNoRouteChoice;
- (char)volumeSliderShrinksFromBothEnds;
- (void)setHidesRouteLabelWhenNoRouteChoice:(char)arg0;
- (void)setVolumeSliderShrinksFromBothEnds:(char)arg0;
- (void)dismissActiveOverlaysAnimated:(char)arg0;
- (char)isShowingActiveOverlays;
- (void)_setVolumeAudioCategory:(NSString *)arg0;
- (UIButton *)_routeButton;
- (unsigned int)routePopoverPermittedArrowDirections;
- (void)setRoutePopoverPermittedArrowDirections:(unsigned int)arg0;
- (MPVolumeView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (MPVolumeView *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setHidden:(char)arg0;
- (void)setAlpha:(float)arg0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (int)style;
- (void)willMoveToWindow:(NSObject *)arg0;
- (void)didMoveToSuperview;
- (MPVolumeView *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (char)isVisible;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (void).cxx_destruct;
- (char)areWirelessRoutesAvailable;

@end
