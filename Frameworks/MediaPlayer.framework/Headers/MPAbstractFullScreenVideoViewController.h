/* Runtime dump - MPAbstractFullScreenVideoViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate>
{
    id _requestExitAfterHidingControls;
    id _rotateAfterHidingControls;
    id _showControlsAfterRotate;
    id _autoHidingForItemChange;
    id _scheduledAutoHide;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setCanShowControlsOverlay:(char)arg0;
- (char)canShowControlsOverlay;
- (char)controlsOverlayVisible;
- (void)setControlsOverlayVisible:(char)arg0 animate:(char)arg1 force:(char)arg2;
- (void)setDisabledParts:(unsigned long long)arg0;
- (void)setDisableControlsAutohide:(char)arg0;
- (void)setOrientation:(int)arg0 animate:(char)arg1;
- (void)setDesiredParts:(unsigned long long)arg0 animate:(char)arg1;
- (void)setVisibleParts:(unsigned long long)arg0 animate:(char)arg1;
- (char)canHideOverlay:(char)arg0;
- (void)videoView_bufferingStateChangedNotification:(NSNotification *)arg0;
- (void)videoView_playbackStateChangedNotification:(NSNotification *)arg0;
- (NSObject *)newAlternateTracksTransition;
- (void)displayVideoViewOnScreen;
- (void)swipableView:(MPSwipableView *)arg0 tappedWithCount:(unsigned int)arg1 atLocation:(struct CGPoint)arg2;
- (void)swipableViewHadActivity:(id)arg0;
- (char)canDisplayItem:(NSObject *)arg0 withInterfaceOrientation:(int)arg1;
- (char)transportControls:(MPInlineAudioTransportControls *)arg0 heldButtonPart:(unsigned long long)arg1;
- (char)transportControls:(MPInlineAudioTransportControls *)arg0 releasedHeldButtonPart:(unsigned long long)arg1;
- (char)transportControls:(MPInlineAudioTransportControls *)arg0 tappedButtonPart:(unsigned long long)arg1;
- (void)overlayDidBeginScrubbing:(id)arg0;
- (void)overlayDidEndScrubbing:(id)arg0;
- (void)showOverlayAnimated:(char)arg0;
- (void)_resumedEventsOnlyNotification:(NSNotification *)arg0;
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)arg0;
- (void)transformVideoForInterfaceOrientation:(int)arg0 animate:(char)arg1;
- (void)_hideOverlayWithAnimation:(char)arg0 shouldUpdateAutohideFlag:(char)arg1;
- (int)_validInterfaceOrientation;
- (void)hideOverlayAnimated:(char)arg0;
- (void)showOverlayIfNecessary;
- (char)inhibitOverlay;
- (void)cancelControlsOverlayAutohide;
- (void)_autohideControlsOverlay;
- (void)setInhibitOverlay:(char)arg0;
- (char)forceScaleToFitInPortrait;
- (void)_hideOverlayWithAnimation:(char)arg0;
- (void)dealloc;
- (MPAbstractFullScreenVideoViewController *)init;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (char)_shouldUseFullScreenLayoutInWindow:(NSObject *)arg0 parentViewController:(BRController *)arg1;
- (void)setItem:(MPAVItem *)arg0;
- (void)_applicationDidBecomeActive:(NSNotification *)arg0;
- (void)setPlayer:(MPAVController *)arg0;

@end
