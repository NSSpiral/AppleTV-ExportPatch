/* Runtime dump - ADPrerollController
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollController : NSObject <ADPrerollViewDelegate, ADPlayerDelegate>
{
    AVPlayerViewController * _avPlayerViewController;
    MPMoviePlayerController * _moviePlayerController;
    char _setupInProgress;
    char _isObservingThirdPartyAVPlayer;
    unsigned int _type;
    ADPrerollView * _view;
    ADPlayer * _adPlayer;
    id _completionHandler;
}

@property (readonly, nonatomic) unsigned int type;
@property (weak, nonatomic) AVPlayerViewController * avPlayerViewController;
@property (weak, nonatomic) MPMoviePlayerController * moviePlayerController;
@property (retain, nonatomic) ADPrerollView * view;
@property (retain, nonatomic) ADPlayer * adPlayer;
@property (nonatomic) char setupInProgress;
@property (nonatomic) char isObservingThirdPartyAVPlayer;
@property (copy, nonatomic) id completionHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (UIView *)_advertisementView;
- (void)cancel;
- (void)dealloc;
- (ADPrerollController *)init;
- (ADPrerollView *)view;
- (unsigned int)type;
- (void)setView:(ADPrerollView *)arg0;
- (id /* block */)completionHandler;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)_appWillResignActive;
- (ADPrerollController *)initWithAVPlayerViewController:(BRController *)arg0;
- (ADPrerollController *)initWithMoviePlayerController:(MPMoviePlayerController *)arg0;
- (void)setAvPlayerViewController:(AVPlayerViewController *)arg0;
- (void)setMoviePlayerController:(MPMoviePlayerController *)arg0;
- (char)setupInProgress;
- (void)setSetupInProgress:(char)arg0;
- (char)_beginPlayback;
- (char)isObservingThirdPartyAVPlayer;
- (AVPlayerViewController *)avPlayerViewController;
- (ADPlayer *)adPlayer;
- (char)_isEmbedded;
- (MPMoviePlayerController *)moviePlayerController;
- (void)_handlePlaybackCompletion:(char)arg0;
- (void)setIsObservingThirdPartyAVPlayer:(char)arg0;
- (void)setAdPlayer:(ADPlayer *)arg0;
- (char)prerollViewRequestsEmbeddedStatus;
- (void)doneButtonPressed;
- (void)playButtonPressed;
- (void)pauseButtonPressed;
- (void)skipButtonPressed;
- (void)actionButtonPressed;
- (void)adPlayerDidTimeout:(ADPlayer *)arg0;
- (void)adPlayerFailedToLoadAsset:(ADPlayer *)arg0;
- (void)adPlayerFailedToPlayWithUnknownError:(ADPlayer *)arg0;
- (void)adPlayer:(ADPlayer *)arg0 readyForPlaybackWithAVPlayer:(AVPlayer *)arg1 impressionProperties:(ADAdImpressionPublicAttributes *)arg2;
- (void)adPlayer:(ADPlayer *)arg0 didChangePlaybackState:(unsigned int)arg1;
- (void)adPlayer:(ADPlayer *)arg0 elapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)adPlayerDidFinishPlayback:(ADPlayer *)arg0;
- (UIViewController *)viewControllerForActionFromAdPlayer:(ADPlayer *)arg0;
- (void)playPrerollAdWithCompletion:(id /* block */)arg0;
- (void)adPlayerDidBeginAction:(NSObject *)arg0;
- (void)shutdown;

@end
