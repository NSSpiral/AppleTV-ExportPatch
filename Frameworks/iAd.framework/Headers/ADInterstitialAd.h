/* Runtime dump - ADInterstitialAd
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADInterstitialAd : NSObject <ADAdRecipient>
{
    <ADInterstitialAdDelegate> * _delegate;
    <ADInterstitialAdDelegate> * _internalDelegate;
    UIViewController * _internalPresentingViewController;
    char _loaded;
    char _actionInProgress;
    char _canLoadMoreThanOnce;
    char _hasLoadedFirstAd;
    int _options;
    ADInterstitialView * _interstitialView;
    ADAdSpace * _adSpace;
    int _creativeType;
    ADInterstitialAdPresentationViewController * _presentationViewController;
}

@property (weak, nonatomic) <ADInterstitialAdDelegate> * delegate;
@property (nonatomic) char loaded;
@property (nonatomic) char actionInProgress;
@property (weak, nonatomic) <ADInterstitialAdDelegate> * internalDelegate;
@property (retain, nonatomic) ADInterstitialView * interstitialView;
@property (weak, nonatomic) UIViewController * internalPresentingViewController;
@property (retain, nonatomic) ADAdSpace * adSpace;
@property (copy, nonatomic) NSSet * context;
@property (nonatomic) char canLoadMoreThanOnce;
@property (nonatomic) char hasLoadedFirstAd;
@property (nonatomic) int creativeType;
@property (retain, nonatomic) ADInterstitialAdPresentationViewController * presentationViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) int internalAdType;
@property (readonly, nonatomic) int options;
@property (readonly, nonatomic) UIView * adSpaceView;
@property (readonly, nonatomic) UIViewController * presentingViewController;

- (void)dealloc;
- (void)setDelegate:(<ADInterstitialAdDelegate> *)arg0;
- (ADInterstitialAd *)init;
- (<ADInterstitialAdDelegate> *)delegate;
- (UIViewController *)presentingViewController;
- (NSString *)identifier;
- (NSSet *)context;
- (void)setContext:(NSSet *)arg0;
- (void)cancelAction;
- (char)isLoaded;
- (int)options;
- (void)setSection:(UITableViewSection *)arg0;
- (ADAdSpace *)adSpace;
- (void)bannerTappedAtPoint:(struct CGPoint)arg0;
- (int)internalAdType;
- (void)setAuthenticationUserName:(NSString *)arg0;
- (void)serverBannerViewWillLoad;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewDidFailToReceiveAdWithError:(NSError *)arg0;
- (void)serverStoryboardDidTransitionOut;
- (void)storyboardViewControllerDidPresent;
- (void)pauseBannerMedia;
- (void)resumeBannerMedia;
- (UIView *)adSpaceView;
- (void)setAdSpace:(ADAdSpace *)arg0;
- (ADInterstitialAd *)initWithCreativeType:(int)arg0 options:(int)arg1;
- (ADInterstitialView *)interstitialView;
- (UIViewController *)internalPresentingViewController;
- (int)creativeType;
- (void)_presentFromViewController:(BRController *)arg0;
- (void)setInternalPresentingViewController:(UIViewController *)arg0;
- (ADInterstitialAdPresentationViewController *)presentationViewController;
- (void)setPresentationViewController:(ADInterstitialAdPresentationViewController *)arg0;
- (char)hasLoadedFirstAd;
- (char)canLoadMoreThanOnce;
- (char)_considerClosingAdSpace;
- (void)setHasLoadedFirstAd:(char)arg0;
- (void)setActionInProgress:(char)arg0;
- (char)presentInView:(NSObject *)arg0;
- (void)presentFromViewController:(BRController *)arg0;
- (int)clickAction;
- (void)_dismissModalInterstitial;
- (char)isActionInProgress;
- (void)setInterstitialView:(ADInterstitialView *)arg0;
- (void)setCanLoadMoreThanOnce:(char)arg0;
- (void)setCreativeType:(int)arg0;
- (NSURL *)serverURL;
- (void)setServerURL:(NSURL *)arg0;
- (void)setInternalDelegate:(<ADInterstitialAdDelegate> *)arg0;
- (<ADInterstitialAdDelegate> *)internalDelegate;
- (void)setLoaded:(char)arg0;

@end
