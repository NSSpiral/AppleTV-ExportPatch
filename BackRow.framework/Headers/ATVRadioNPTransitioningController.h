/* Runtime dump - ATVRadioNPTransitioningController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCarouselViewDataSource;
@protocol ATVCarouselViewUIDelegate;

@class ATVCarouselView, ATVCarouselViewUIOpContext, ATVRadioNPHistoryView, ATVRadioNPTrackView, BRControl;
@interface ATVRadioNPTransitioningController : NSObject <ATVCarouselViewDataSource, ATVCarouselViewUIDelegate>
{
    ATVRadioNPTrackView * _trackView;
    ATVRadioNPHistoryView * _historyView;
    id _completion;
    NSArray * _historyItems;
    ATVCarouselView * _carousel;
    <ATVCarouselViewUIDelegate> * _fromUIDelegate;
    <ATVCarouselViewUIDelegate> * _toUIDelegate;
    BRControl * _transitioningView;
    BRControl * _fromView;
    BRControl * _toView;
    NSTimer * _transitionEndTimer;
    double _duration;
    struct ATVCarouselViewItemsConfig _fromItemsConfig;
    struct ATVCarouselViewItemsConfig _toItemsConfig;
}

@property (retain, nonatomic) ATVRadioNPTrackView * trackView;
@property (retain, nonatomic) ATVRadioNPHistoryView * historyView;
@property (nonatomic) double duration;
@property (copy, nonatomic) id completion;
@property (copy, nonatomic) NSArray * historyItems;
@property (retain, nonatomic) ATVCarouselView * carousel;
@property (retain, nonatomic) <ATVCarouselViewUIDelegate> * fromUIDelegate;
@property (retain, nonatomic) <ATVCarouselViewUIDelegate> * toUIDelegate;
@property (nonatomic) struct ATVCarouselViewItemsConfig fromItemsConfig;
@property (nonatomic) struct ATVCarouselViewItemsConfig toItemsConfig;
@property (retain, nonatomic) BRControl * transitioningView;
@property (retain, nonatomic) BRControl * fromView;
@property (retain, nonatomic) BRControl * toView;
@property (weak, nonatomic) NSTimer * transitionEndTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setHistoryView:(ATVRadioNPHistoryView *)arg0;
- (void)setTrackView:(ATVRadioNPTrackView *)arg0;
- (ATVRadioNPTrackView *)trackView;
- (ATVRadioNPHistoryView *)historyView;
- (ATVRadioNPTransitioningController *)initWithTrackView:(ATVRadioNPTrackView *)arg0 historyView:(ATVRadioNPHistoryView *)arg1;
- (void)transitionToView:(NSObject *)arg0 historyItems:(NSArray *)arg1 completion:(id /* block */)arg2;
- (void)setCarousel:(ATVCarouselView *)arg0;
- (unsigned int)numberOfItemsForCarouselView:(ATVCarouselView *)arg0;
- (BRControl *)carouselView:(ATVCarouselView *)arg0 itemAtIndex:(unsigned int)arg1;
- (struct ATVCarouselViewItemsConfig)carouselView:(ATVCarouselView *)arg0 itemsConfigForContext:(SEL)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 configurePerspectiveForContext:(ATVCarouselViewUIOpContext *)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 setPositionOfItem:(BRControl *)arg1 toPositionAtIndex:(unsigned int)arg2 context:(ATVCarouselViewUIOpContext *)arg3;
- (void)setFromUIDelegate:(<ATVCarouselViewUIDelegate> *)arg0;
- (void)setToUIDelegate:(<ATVCarouselViewUIDelegate> *)arg0;
- (<ATVCarouselViewUIDelegate> *)fromUIDelegate;
- (void)setTransitioningView:(BRControl *)arg0;
- (void)_transitionEndTimerHandler:(id /* block */)arg0;
- (void)setTransitionEndTimer:(NSTimer *)arg0;
- (void)setFromItemsConfig:(struct ATVCarouselViewItemsConfig)arg0;
- (<ATVCarouselViewUIDelegate> *)toUIDelegate;
- (void)setToItemsConfig:(struct ATVCarouselViewItemsConfig)arg0;
- (struct ATVCarouselViewItemsConfig)fromItemsConfig;
- (struct ATVCarouselViewItemsConfig)toItemsConfig;
- (NSTimer *)transitionEndTimer;
- (void)dealloc;
- (double)duration;
- (void)setDuration:(double)arg0;
- (BRControl *)fromView;
- (BRControl *)toView;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (BRControl *)transitioningView;
- (void)setToView:(BRControl *)arg0;
- (void)setFromView:(BRControl *)arg0;
- (void).cxx_destruct;
- (NSArray *)historyItems;
- (void)setHistoryItems:(NSArray *)arg0;
- (ATVCarouselView *)carousel;

@end
