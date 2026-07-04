/* Runtime dump - ATVPhotoBatchCarouselViewUIDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCarouselViewUIDelegate;

@class ATVCarouselView, ATVCarouselViewUIOpContext, BRControl;
@interface ATVPhotoBatchCarouselViewUIDelegate : NSObject <ATVCarouselViewUIDelegate>
{
    NSArray * _positions;
    float _displacement;
}

@property (copy, nonatomic) NSArray * positions;
@property (nonatomic) float displacement;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setPositions:(NSArray *)arg0;
- (void)setDisplacement:(float)arg0;
- (NSArray *)positions;
- (float)displacement;
- (struct ATVCarouselViewItemsConfig)carouselView:(ATVCarouselView *)arg0 itemsConfigForContext:(SEL)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 configurePerspectiveForContext:(ATVCarouselViewUIOpContext *)arg1;
- (CAAnimation *)carouselView:(ATVCarouselView *)arg0 setPositionOfItem:(BRControl *)arg1 toPositionAtIndex:(unsigned int)arg2 context:(ATVCarouselViewUIOpContext *)arg3;
- (void).cxx_destruct;

@end
