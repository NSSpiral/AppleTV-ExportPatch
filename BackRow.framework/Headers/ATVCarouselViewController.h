/* Runtime dump - ATVCarouselViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCarouselViewDataSource;
@protocol ATVSubviewController;

@class ATVCarouselView, ATVFeedElement, ATVFeedShowcaseCarouselViewUIDelegate, BRControl;
@interface ATVCarouselViewController : NSObject <ATVSubviewController, ATVCarouselViewDataSource>
{
    ATVCarouselView * _carouselView;
    NSArray * _items;
    ATVFeedShowcaseCarouselViewUIDelegate * _uiDelegate;
}

@property (readonly, retain, nonatomic) <ATVCarouselViewUIDelegate> * carouselUIDelegate;
@property (retain, nonatomic) ATVCarouselView * carouselView;
@property (retain, nonatomic) NSArray * items;
@property (retain, nonatomic) ATVFeedShowcaseCarouselViewUIDelegate * uiDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (unsigned int)numberOfItemsForCarouselView:(ATVCarouselView *)arg0;
- (BRControl *)carouselView:(ATVCarouselView *)arg0 itemAtIndex:(unsigned int)arg1;
- (void)updateWithViewElement:(ATVFeedElement *)arg0;
- (ATVCarouselView *)carouselView;
- (void)setCarouselView:(ATVCarouselView *)arg0;
- (<ATVCarouselViewUIDelegate> *)carouselUIDelegate;
- (ATVCarouselViewController *)init;
- (BRControl *)view;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (void).cxx_destruct;
- (void)setUiDelegate:(ATVFeedShowcaseCarouselViewUIDelegate *)arg0;
- (ATVFeedShowcaseCarouselViewUIDelegate *)uiDelegate;

@end
