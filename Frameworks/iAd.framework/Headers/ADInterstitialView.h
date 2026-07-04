/* Runtime dump - ADInterstitialView
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADInterstitialView : UIView <ADDimmerViewDelegate>
{
    ADInterstitialAd * _interstitialAd;
    struct CGRect _dismissButtonRect;
}

@property (nonatomic) struct CGRect dismissButtonRect;
@property (readonly, nonatomic) ADInterstitialAd * interstitialAd;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)requiresConstraintBasedLayout;

- (void)dealloc;
- (void)setHidden:(char)arg0;
- (void)setAlpha:(float)arg0;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg0;
- (void)removeFromSuperview;
- (void)setBounds:(struct CGRect)arg0;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (struct CGSize)intrinsicContentSize;
- (void)dimmerView:(ADDimmerView *)arg0 didReceiveTouchUpAtPoint:(struct CGPoint)arg1;
- (char)enableDimmerView:(ADDimmerView *)arg0;
- (ADInterstitialView *)initForInterstitialAd:(ADInterstitialAd *)arg0;
- (ADInterstitialAd *)interstitialAd;
- (void)setDismissButtonRect:(struct CGRect)arg0;
- (struct CGRect)dismissButtonRect;

@end
