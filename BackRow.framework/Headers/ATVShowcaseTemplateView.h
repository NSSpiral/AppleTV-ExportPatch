/* Runtime dump - ATVShowcaseTemplateView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVCarouselView;
@interface ATVShowcaseTemplateView : BRControl
{
    ATVCarouselView * _carouselView;
}

@property (retain, nonatomic) ATVCarouselView * carouselView;

- (ATVCarouselView *)carouselView;
- (void)setCarouselView:(ATVCarouselView *)arg0;
- (void)_updateCarouselView;
- (ATVShowcaseTemplateView *)init;
- (void).cxx_destruct;

@end
