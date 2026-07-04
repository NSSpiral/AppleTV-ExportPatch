/* Runtime dump - ATVFeedCarouselDataSource
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCarouselViewDataSource;
@protocol ATVCarouselViewDelegate;

@class ATVCarouselView, ATVFeedElement, ATVMerchant, BRControl;
@interface ATVFeedCarouselDataSource : NSObject <ATVCarouselViewDataSource, ATVCarouselViewDelegate>
{
    NSDictionary * _data;
    NSString * _templateName;
    ATVFeedElement * _feedElement;
    ATVMerchant * _merchant;
}

@property (retain) ATVMerchant * merchant;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ATVMerchant *)merchant;
- (void)setMerchant:(ATVMerchant *)arg0;
- (unsigned int)numberOfItemsForCarouselView:(ATVCarouselView *)arg0;
- (BRControl *)carouselView:(ATVCarouselView *)arg0 itemAtIndex:(unsigned int)arg1;
- (void)carouselView:(ATVCarouselView *)arg0 didFocusItemAtIndex:(int)arg1;
- (ATVFeedCarouselDataSource *)initWithData:(NSDictionary *)arg0 templateName:(NSString *)arg1;
- (ATVFeedCarouselDataSource *)initWithFeedElement:(ATVFeedElement *)arg0 templateName:(NSString *)arg1;
- (void).cxx_destruct;

@end
