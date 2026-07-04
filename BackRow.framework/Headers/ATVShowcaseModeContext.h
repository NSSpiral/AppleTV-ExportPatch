/* Runtime dump - ATVShowcaseModeContext
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVShowcaseTemplateView, BRControl;
@interface ATVShowcaseModeContext : NSObject
{
    NSString * _layout;
    ATVShowcaseTemplateView * _showcaseView;
    id _carouselControl;
}

@property (retain, nonatomic) NSString * layout;
@property (retain, nonatomic) ATVShowcaseTemplateView * showcaseView;
@property (retain, nonatomic) id carouselControl;

- (ATVShowcaseTemplateView *)showcaseView;
- (void)setShowcaseView:(ATVShowcaseTemplateView *)arg0;
- (BRControl *)carouselControl;
- (void)setCarouselControl:(BRControl *)arg0;
- (NSString *)layout;
- (void)setLayout:(NSString *)arg0;
- (void).cxx_destruct;

@end
