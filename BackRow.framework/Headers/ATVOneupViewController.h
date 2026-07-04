/* Runtime dump - ATVOneupViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCarouselViewDataSource;
@protocol ATVCarouselViewUIDelegate;
@protocol ATVSubviewController;

@class ATVCarouselView, ATVCarouselViewUIOpContext, ATVFeedElement, BRControl;
@interface ATVOneupViewController : NSObject <ATVSubviewController, ATVCarouselViewDataSource, ATVCarouselViewUIDelegate>
{
    ATVCarouselView * _carouselView;
    NSArray * _items;
    unsigned int _transitionMode;
}

@property (retain, nonatomic) ATVCarouselView * carouselView;
@property (retain, nonatomic) NSArray * items;
@property (nonatomic) unsigned int transitionMode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (unsigned int)numberOfItemsForCarouselView:(ATVCarouselView *)arg0;
- (BRControl *)carouselView:(ATVCarouselView *)arg0 itemAtIndex:(unsigned int)arg1;
- (struct ATVCarouselViewItemsConfig)carouselView:(ATVCarouselView *)arg0 itemsConfigForContext:(SEL)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 configurePerspectiveForContext:(ATVCarouselViewUIOpContext *)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 setPositionOfItem:(BRControl *)arg1 toPositionAtIndex:(unsigned int)arg2 context:(ATVCarouselViewUIOpContext *)arg3;
- (ATVCarouselView *)carouselView;
- (void)updateWithViewElement:(ATVFeedElement *)arg0 transitionMode:(unsigned int)arg1;
- (void)setCarouselView:(ATVCarouselView *)arg0;
- (void)setTransitionMode:(unsigned int)arg0;
- (void)_disposeImageForItem:(NSObject *)arg0;
- (unsigned int)transitionMode;
- (void)_pushPositionMatrixAtIndex:(unsigned int)arg0 transform:(struct CATransform3D *)arg1;
- (NSObject *)_applyDissolvePositionMatrixToItem:(NSObject *)arg0 forPositionAtIndex:(unsigned int)arg1 context:(NSObject *)arg2;
- (NSObject *)_applyPushPositionMatrixToItem:(NSObject *)arg0 toPositionAtIndex:(unsigned int)arg1 context:(NSObject *)arg2;
- (void)_dissolvePositionMatrixAtIndex:(unsigned int)arg0 opacity:(float *)arg1;
- (ATVOneupViewController *)init;
- (BRControl *)view;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (void).cxx_destruct;

@end
