/* Runtime dump - ATVCoverflowViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCarouselViewDataSource;
@protocol ATVCarouselViewUIDelegate;
@protocol ATVSubviewController;

@class ATVCarouselView, ATVCarouselViewUIOpContext, ATVFeedElement, BRControl;
@interface ATVCoverflowViewController : NSObject <ATVSubviewController, ATVCarouselViewDataSource, ATVCarouselViewUIDelegate>
{
    ATVCarouselView * _carouselView;
    NSArray * _items;
}

@property (retain, nonatomic) ATVCarouselView * carouselView;
@property (retain, nonatomic) NSArray * items;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (unsigned int)numberOfItemsForCarouselView:(ATVCarouselView *)arg0;
- (BRControl *)carouselView:(ATVCarouselView *)arg0 itemAtIndex:(unsigned int)arg1;
- (struct ATVCarouselViewItemsConfig)carouselView:(ATVCarouselView *)arg0 itemsConfigForContext:(SEL)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 configurePerspectiveForContext:(ATVCarouselViewUIOpContext *)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 setPositionOfItem:(BRControl *)arg1 toPositionAtIndex:(unsigned int)arg2 context:(ATVCarouselViewUIOpContext *)arg3;
- (void)updateWithViewElement:(ATVFeedElement *)arg0;
- (ATVCarouselView *)carouselView;
- (void)_positionMatrixAtIndex:(unsigned int)arg0 transform:(struct CATransform3D *)arg1;
- (void)setCarouselView:(ATVCarouselView *)arg0;
- (ATVCoverflowViewController *)init;
- (BRControl *)view;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (void).cxx_destruct;

@end
