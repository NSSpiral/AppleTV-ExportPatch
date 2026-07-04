/* Runtime dump - ATVShowcaseTransitioningController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCarouselViewDataSource;
@protocol ATVCarouselViewUIDelegate;

@class ATVCarouselView, ATVCarouselViewUIOpContext, ATVFeedElement, ATVShowcaseTemplateView, ATVShowcaseTransitioningView, BRControl;
@interface ATVShowcaseTransitioningController : NSObject <ATVCarouselViewDataSource, ATVCarouselViewUIDelegate>
{
    char _inTransition;
    NSArray * _items;
    ATVShowcaseTransitioningView * _transitioningView;
    ATVShowcaseTemplateView * _fromView;
    ATVShowcaseTemplateView * _toView;
    id _completionBlock;
    double _duration;
}

@property (nonatomic) double duration;
@property (nonatomic) char inTransition;
@property (retain, nonatomic) NSArray * items;
@property (retain, nonatomic) ATVShowcaseTransitioningView * transitioningView;
@property (retain, nonatomic) ATVShowcaseTemplateView * fromView;
@property (retain, nonatomic) ATVShowcaseTemplateView * toView;
@property (copy, nonatomic) id completionBlock;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (unsigned int)numberOfItemsForCarouselView:(ATVCarouselView *)arg0;
- (BRControl *)carouselView:(ATVCarouselView *)arg0 itemAtIndex:(unsigned int)arg1;
- (struct ATVCarouselViewItemsConfig)carouselView:(ATVCarouselView *)arg0 itemsConfigForContext:(SEL)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 configurePerspectiveForContext:(ATVCarouselViewUIOpContext *)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 setPositionOfItem:(BRControl *)arg1 toPositionAtIndex:(unsigned int)arg2 context:(ATVCarouselViewUIOpContext *)arg3;
- (void)setTransitioningView:(ATVShowcaseTransitioningView *)arg0;
- (void)updateWithViewElement:(ATVFeedElement *)arg0;
- (void)setInTransition:(char)arg0;
- (struct CATransform3D)_carouselSublayerTransformForView:(NSObject *)arg0;
- (float)_extraCoverflowArtifactOpacityForView:(NSObject *)arg0;
- (void)_positionMatrixForCarouselView:(NSObject *)arg0 ofItem:(NSObject *)arg1 forPositionAtIndex:(unsigned int)arg2 transform:(struct CATransform3D *)arg3;
- (void)transitionFromView:(NSObject *)arg0 toView:(ATVShowcaseTemplateView *)arg1 completion:(id /* block */)arg2;
- (ATVShowcaseTransitioningController *)init;
- (double)duration;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setDuration:(double)arg0;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (ATVShowcaseTemplateView *)fromView;
- (ATVShowcaseTemplateView *)toView;
- (ATVShowcaseTransitioningView *)transitioningView;
- (char)isInTransition;
- (void)setToView:(ATVShowcaseTemplateView *)arg0;
- (void)setFromView:(ATVShowcaseTemplateView *)arg0;
- (void).cxx_destruct;
- (ATVShowcaseTransitioningController *)initWithDuration:(double)arg0;

@end
