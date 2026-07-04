/* Runtime dump - ATVPhotoCarouselViewUIDelegateCommentsImpl
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCarouselViewUIDelegate;

@class ATVCarouselView, ATVCarouselViewUIOpContext, BRControl;
@interface ATVPhotoCarouselViewUIDelegateCommentsImpl : NSObject <ATVCarouselViewUIDelegate>
{
    float _reflectionAmount;
    double _eventAnimationDuration;
    double _retriggerEventAnimationDuration;
    struct ? _preferredImageSize;
}

@property (nonatomic) double eventAnimationDuration;
@property (nonatomic) double retriggerEventAnimationDuration;
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
- (double)retriggerEventAnimationDuration;
- (double)eventAnimationDuration;
- (void)setEventAnimationDuration:(double)arg0;
- (void)setRetriggerEventAnimationDuration:(double)arg0;

@end
