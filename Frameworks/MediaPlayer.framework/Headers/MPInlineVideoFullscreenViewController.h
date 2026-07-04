/* Runtime dump - MPInlineVideoFullscreenViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVolumeControllerDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget>
{
    char _disableTaps;
    UITapGestureRecognizer * _doubleTapGestureRecognizer;
    MPWeakTimer * _idleTimer;
    char _isAnimatingOverlay;
    MPAVItem * _item;
    UIActivityIndicatorView * _loadingIndicator;
    MPInlineVideoController * _masterController;
    MPVideoPlaybackOverlayView * _overlayView;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    char _shouldForwardRotationEvents;
    MPSwipableView * _swipableView;
    UITapGestureRecognizer * _tapGestureRecognizer;
    int _activeOverlayUserEvents;
    char _statusBarWasHidden;
    MPVolumeController * _volumeController;
}

@property (weak, nonatomic) MPInlineVideoController * masterController;
@property (retain, nonatomic) MPAVItem * item;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)swipableViewHadActivity:(id)arg0;
- (char)transportControls:(MPInlineAudioTransportControls *)arg0 tappedButtonPart:(unsigned long long)arg1;
- (void)overlayTappedBackButton:(id)arg0;
- (void)overlayTappedFullscreenButton:(id)arg0;
- (void)overlay:(<MKOverlay> *)arg0 didBeginUserEvent:(int)arg1;
- (void)overlay:(<MKOverlay> *)arg0 didCancelUserEvent:(int)arg1;
- (void)overlay:(<MKOverlay> *)arg0 didEndUserEvent:(int)arg1;
- (void)showAlternateTracks;
- (void)volumeController:(MPVolumeController *)arg0 volumeValueDidChange:(float)arg1;
- (void)setMasterController:(MPInlineVideoController *)arg0;
- (void)_viewWasTapped:(id)arg0;
- (void)_viewWasPinched:(id)arg0;
- (void)_hideOverlayAnimated:(char)arg0;
- (void)updateOverlayView;
- (void)cancelOverlayIdleTimer;
- (void)showLoadingIndicator;
- (void)hideLoadingIndicator;
- (void)_hideOverlayDidEnd;
- (void)resetOverlayIdleTimer;
- (void)showOverlayAnimated:(char)arg0;
- (void)prepareForTransitionFromFullscreen;
- (MPInlineVideoController *)masterController;
- (void)_overlayIdleTimerFired;
- (void)_showOverlayDidEnd;
- (void)dealloc;
- (MPInlineVideoFullscreenViewController *)init;
- (MPAVItem *)item;
- (char)prefersStatusBarHidden;
- (char)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize)arg0 withTransitionCoordinator:(NSObject *)arg1;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)willRotateToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg0;
- (void)setItem:(MPAVItem *)arg0;
- (void).cxx_destruct;

@end
