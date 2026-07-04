/* Runtime dump - ATVPhotoCarouselViewUIDelegateTransitionImpl
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCarouselViewUIDelegate;

@class ATVCarouselView, ATVCarouselViewUIOpContext, BRControl;
@interface ATVPhotoCarouselViewUIDelegateTransitionImpl : NSObject <ATVCarouselViewUIDelegate>
{
    int _transitioningTo;
    int _originallyTransitioningFrom;
    float _reflectionAmount;
    double _setupAnimationDuration;
    struct ? _centerImageSize;
    struct ? _preferredImageSize;
}

@property (nonatomic) int transitioningTo;
@property (nonatomic) int originallyTransitioningFrom;
@property (nonatomic) double setupAnimationDuration;
@property (nonatomic) struct ? centerImageSize;
@property (nonatomic) struct ? preferredImageSize;
@property (nonatomic) float reflectionAmount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (struct ?)preferredImageSize;
- (void)setPreferredImageSize:(struct ?)arg0;
- (void)setReflectionAmount:(float)arg0;
- (float)reflectionAmount;
- (struct ATVCarouselViewItemsConfig)carouselView:(ATVCarouselView *)arg0 itemsConfigForContext:(SEL)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 configurePerspectiveForContext:(ATVCarouselViewUIOpContext *)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 setPositionOfItem:(BRControl *)arg1 toPositionAtIndex:(unsigned int)arg2 context:(ATVCarouselViewUIOpContext *)arg3;
- (double)setupAnimationDuration;
- (struct ?)centerImageSize;
- (int)originallyTransitioningFrom;
- (int)transitioningTo;
- (void)setTransitioningTo:(int)arg0;
- (void)setOriginallyTransitioningFrom:(int)arg0;
- (void)setSetupAnimationDuration:(double)arg0;
- (void)setCenterImageSize:(struct ?)arg0;

@end
