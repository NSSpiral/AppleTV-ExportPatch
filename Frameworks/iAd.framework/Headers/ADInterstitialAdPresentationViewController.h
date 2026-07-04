/* Runtime dump - ADInterstitialAdPresentationViewController
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADInterstitialAdPresentationViewController : UIViewController
{
    ADInterstitialAd * _interstitialAd;
    ADCountdownButton * _closeButton;
}

@property (readonly, weak, nonatomic) ADInterstitialAd * interstitialAd;
@property (retain, nonatomic) ADCountdownButton * closeButton;

- (void)dealloc;
- (char)prefersStatusBarHidden;
- (char)wantsFullScreenLayout;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewDidAppear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (ADInterstitialAdPresentationViewController *)initForInterstitialAd:(ADInterstitialAd *)arg0;
- (ADInterstitialAd *)interstitialAd;
- (void)setCloseButton:(ADCountdownButton *)arg0;
- (ADCountdownButton *)closeButton;

@end
