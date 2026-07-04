/* Runtime dump - ADPlayer
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPlayer : NSObject <ADBannerViewInternalDelegate>
{
    <ADPlayerDelegate> * _delegate;
    char _playbackHasBegun;
    ADBannerView * _videoAd;
    AVPlayerItem * _avPlayerItem;
    AVPlayer * _avPlayer;
    unsigned int _playbackState;
    id _timeObserver;
}

@property (weak, nonatomic) <ADPlayerDelegate> * delegate;
@property (retain, nonatomic) ADBannerView * videoAd;
@property (readonly, nonatomic) float playbackRate;
@property (nonatomic) char playbackHasBegun;
@property (retain, nonatomic) AVPlayerItem * avPlayerItem;
@property (retain, nonatomic) AVPlayer * avPlayer;
@property (nonatomic) unsigned int playbackState;
@property (retain, nonatomic) id timeObserver;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (unsigned int)playbackState;
- (void)play;
- (AVPlayer *)avPlayer;
- (char)prepareForPlayback;
- (float)playbackRate;
- (void)dealloc;
- (void)setDelegate:(<ADPlayerDelegate> *)arg0;
- (ADPlayer *)init;
- (<ADPlayerDelegate> *)delegate;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)pause;
- (void)bannerViewActionDidFinish:(ADBannerView *)arg0;
- (char)bannerViewActionShouldBegin:(ADBannerView *)arg0 willLeaveApplication:(char)arg1;
- (UIViewController *)viewControllerForStoryboardPresentationFromBannerView:(ADBannerView *)arg0;
- (void)bannerViewWillLoadAd:(ADBannerView *)arg0;
- (void)bannerViewDidLoadAd:(ADBannerView *)arg0;
- (void)bannerView:(ADBannerView *)arg0 didFailToReceiveAdWithError:(NSError *)arg1;
- (void)bannerViewShouldPauseMedia:(ADBannerView *)arg0;
- (void)bannerViewShouldResumeMedia:(ADBannerView *)arg0;
- (void)performAction;
- (void)setVideoAd:(ADBannerView *)arg0;
- (ADBannerView *)videoAd;
- (id)_networkOptimalVideoURLForAd:(id)arg0;
- (char)playbackHasBegun;
- (void)playerItemDidPlayToEnd:(id)arg0;
- (void)playerItemDidFailedToPlayToEnd:(id)arg0;
- (void)playerItemEncounteredPlaybackStall:(id)arg0;
- (void)setAvPlayerItem:(AVPlayerItem *)arg0;
- (void)setAvPlayer:(AVPlayer *)arg0;
- (void)setTimeObserver:(NSObject *)arg0;
- (void)setPlaybackHasBegun:(char)arg0;
- (void)setPlaybackState:(unsigned int)arg0;
- (NSObject *)timeObserver;
- (void)playerDidStart;
- (void)playerDidPause;
- (AVPlayerItem *)avPlayerItem;
- (void)shutdown;

@end
