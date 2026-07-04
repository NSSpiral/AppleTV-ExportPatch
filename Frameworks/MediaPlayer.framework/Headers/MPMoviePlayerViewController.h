/* Runtime dump - MPMoviePlayerViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMoviePlayerViewController : UIViewController
{
    id _internal;
    char _statusBarWasHidden;
}

@property (readonly, nonatomic) MPMoviePlayerController * moviePlayer;

- (MPMoviePlayerViewController *)initWithContentURL:(NSURL *)arg0;
- (void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(NSNotification *)arg0;
- (MPMoviePlayerController *)moviePlayer;
- (void)_moviePlayerViewController_playbackDidFinishNotification:(NSNotification *)arg0;
- (void)dealloc;
- (MPMoviePlayerViewController *)init;
- (char)prefersStatusBarHidden;
- (char)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (char)canBecomeFirstResponder;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (char)_canReloadView;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (char)_shouldUseFullScreenLayoutInWindow:(NSObject *)arg0 parentViewController:(BRController *)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg0;
- (void)remoteControlReceivedWithEvent:(NSObject *)arg0;
- (MPMoviePlayerViewController *)initWithAsset:(NSSet *)arg0;
- (void).cxx_destruct;

@end
