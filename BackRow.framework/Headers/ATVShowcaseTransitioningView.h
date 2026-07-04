/* Runtime dump - ATVShowcaseTransitioningView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVCarouselView, ATVShowcaseTemplateCoverflowView;
@interface ATVShowcaseTransitioningView : BRControl
{
    ATVShowcaseTemplateCoverflowView * _coverflowView;
    ATVCarouselView * _carouselView;
}

@property (retain, nonatomic) ATVShowcaseTemplateCoverflowView * coverflowView;
@property (readonly, retain, nonatomic) ATVCarouselView * carouselView;

- (void)layoutSubcontrols;
- (ATVCarouselView *)carouselView;
- (void)setCoverflowView:(ATVShowcaseTemplateCoverflowView *)arg0;
- (ATVShowcaseTemplateCoverflowView *)coverflowView;
- (ATVShowcaseTransitioningView *)init;
- (void).cxx_destruct;

@end
